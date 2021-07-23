// =============================================================================
//
// ztd.text
// Copyright © 2021 JeanHeyd "ThePhD" Meneide and Shepherd's Oasis, LLC
// Contact: opensource@soasis.org
//
// Commercial License Usage
// Licensees holding valid commercial ztd.text licenses may use this file in
// accordance with the commercial license agreement provided with the
// Software or, alternatively, in accordance with the terms contained in
// a written agreement between you and Shepherd's Oasis, LLC.
// For licensing terms and conditions see your agreement. For
// further information contact opensource@soasis.org.
//
// Apache License Version 2 Usage
// Alternatively, this file may be used under the terms of Apache License
// Version 2.0 (the "License") for non-commercial use; you may not use this
// file except in compliance with the License. You may obtain a copy of the
// License at
//
//		http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// ============================================================================>

#pragma once

#ifndef ZTD_TEXT_DETAIL_EXECUTION_MAC_OS_HPP
#define ZTD_TEXT_DETAIL_EXECUTION_MAC_OS_HPP

#include <ztd/text/version.hpp>

#include <ztd/text/utf8.hpp>
#include <ztd/text/is_unicode_encoding.hpp>
#include <ztd/text/is_ignorable_error_handler.hpp>
#include <ztd/text/is_unicode_encoding.hpp>
#include <ztd/text/is_full_range_representable.hpp>
#include <ztd/text/encode_result.hpp>
#include <ztd/text/decode_result.hpp>
#include <ztd/text/type_traits.hpp>
#include <ztd/text/detail/progress_handler.hpp>

#include <ztd/prologue.hpp>

namespace ztd { namespace text {
	ZTD_TEXT_INLINE_ABI_NAMESPACE_OPEN_I_

	namespace __impl {
		//////
		/// @brief The default execution ("locale") encoding for Mac OS.
		///
		/// @remarks Note that for all intents and purposes, Mac OS demands that all text is in UTF-8. However, on Big
		/// Sur, Catalina, and a few other platforms locale functionality and data has been either forgotten/left
		/// behind or intentionally kept in place on these devices. It may be possible that with very dedicated hacks
		/// one can still change the desired default encoding from UTF-8 to something else in the majority of Apple
		/// text. Their documentation states that all text "should" be UTF-8, but very explicitly goes out of its way
		/// to not make that hard guarantee. Since it is a BSD-like system and they left plenty of that data behind
		/// from C libraries, this may break in extremely obscure cases. Please be careful on Apple machines!
		//////
		class __execution_mac_os : private basic_utf8<char, char32_t> {
		private:
			using __base_t = basic_utf8<char, char32_t>;

		public:
			using __base_t::code_point;
			using __base_t::code_unit;
			using __base_t::state;

			//////
			/// @brief Whether or not this encoding is a unicode encoding or not.
			//////
			using is_unicode_encoding = ::std::integral_constant<bool, is_unicode_encoding_v<__base_t>>;
			//////
			/// @brief Whether or not this encoding's @c decode_one step is injective or not.
			//////
			using is_decode_injective = ::std::integral_constant<bool, is_decode_injective_v<__base_t>>;
			//////
			/// @brief Whether or not this encoding's @c encode_one step is injective or not.
			//////
			using is_encode_injective = ::std::integral_constant<bool, is_encode_injective_v<__base_t>>;

			//////
			/// @brief The maximum code units a single complete operation of encoding can produce.
			///
			/// @remarks There are encodings for which one input can produce 3 code points (some Tamil encodings) and
			/// there are rumours of an encoding that can produce 7 code points from a handful of input. We use a
			/// protective/conservative 8, here, to make sure ABI isn't broken later.
			//////
			inline static constexpr ::std::size_t max_code_points = 8;
			//////
			/// @brief The maximum number of code points a single complete operation of decoding can produce.
			///
			/// @remarks This is bounded by the platform's @c MB_LEN_MAX macro, which is an integral constant
			/// expression representing the maximum value of output all C locales can produce from a single complete
			/// operation.
			//////
			inline static constexpr ::std::size_t max_code_units = MB_LEN_MAX;

			//////
			/// @brief Decodes a single complete unit of information as code points and produces a result with the
			/// input and output ranges moved past what was successfully read and written; or, produces an error and
			/// returns the input and output ranges untouched.
			///
			/// @param[in] __input The input view to read code uunits from.
			/// @param[in] __output The output view to write code points into.
			/// @param[in] __error_handler The error handler to invoke if encoding fails.
			/// @param[in, out] __s The necessary state information. Most encodings have no state, but because this
			/// is effectively a runtime encoding and therefore it is important to preserve and manage this state.
			///
			/// @returns A ztd::text::decode_result object that contains the reconstructed input range,
			/// reconstructed output range, error handler, and a reference to the passed-in state.
			template <typename _InputRange, typename _OutputRange, typename _ErrorHandler>
			static constexpr auto decode_one(
				_InputRange&& __input, _OutputRange&& __output, _ErrorHandler&& __error_handler, state& __s) {
				using _UErrorHandler                = remove_cvref_t<_ErrorHandler>;
				constexpr bool __call_error_handler = !is_ignorable_error_handler_v<_UErrorHandler>;

				// just go straight to UTF8
				__base_t __base_encoding {};
				__txt_detail::__progress_handler<!__call_error_handler, __execution_mac_os>
					__intermediate_handler {};
				auto __intermediate_result = __base_encoding.decode_one(::std::forward<_InputRange>(__input),
					::std::forward<_OutputRange>(__output), __intermediate_handler, __s);

				if constexpr (__call_error_handler) {
					if (__intermediate_result.error_code != encoding_error::ok) {
						__execution_mac_os __self {};
						return __error_handler(__self, ::std::move(__intermediate_result),
							::ztd::ranges::span<code_point>(__intermediate_handler._M_code_points.data(),
							     __intermediate_handler._M_code_points_size));
					}
				}
				return __intermediate_result;
			}

			//////
			/// @brief Encodes a single complete unit of information as code units and produces a result with the
			/// input and output ranges moved past what was successfully read and written; or, produces an error and
			/// returns the input and output ranges untouched.
			///
			/// @param[in] __input The input view to read code uunits from.
			/// @param[in] __output The output view to write code points into.
			/// @param[in] __error_handler The error handler to invoke if encoding fails.
			/// @param[in, out] __s The necessary state information. Most encodings have no state, but because this
			/// is effectively a runtime encoding and therefore it is important to preserve and manage this state.
			///
			/// @returns A ztd::text::encode_result object that contains the reconstructed input range,
			/// reconstructed output range, error handler, and a reference to the passed-in state.
			template <typename _InputRange, typename _OutputRange, typename _ErrorHandler>
			static constexpr auto encode_one(
				_InputRange&& __input, _OutputRange&& __output, _ErrorHandler&& __error_handler, state& __s) {
				using _UErrorHandler                = remove_cvref_t<_ErrorHandler>;
				constexpr bool __call_error_handler = !is_ignorable_error_handler_v<_UErrorHandler>;

				// just go straight to UTF8
				__base_t __base_encoding {};
				__txt_detail::__progress_handler<!__call_error_handler, __execution_mac_os>
					__intermediate_handler {};
				auto __intermediate_result = __base_encoding.encode_one(::std::forward<_InputRange>(__input),
					::std::forward<_OutputRange>(__output), __intermediate_handler, __s);

				if constexpr (__call_error_handler) {
					if (__intermediate_result.error_code != encoding_error::ok) {
						__execution_mac_os __self {};
						return __error_handler(__self, ::std::move(__intermediate_result),
							::ztd::ranges::span<code_point>(__intermediate_handler._M_code_points.data(),
							     __intermediate_handler._M_code_points_size));
					}
				}
				return __intermediate_result;
			}
		};

	} // namespace __impl

	ZTD_TEXT_INLINE_ABI_NAMESPACE_CLOSE_I_
}} // namespace ztd::text

#endif // ZTD_TEXT_DETAIL_EXECUTION_MAC_OS_HPP
