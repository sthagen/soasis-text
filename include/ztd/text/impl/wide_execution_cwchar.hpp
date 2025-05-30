// =============================================================================
//
// ztd.text
// Copyright © JeanHeyd "ThePhD" Meneide and Shepherd's Oasis, LLC
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
// https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// ============================================================================ //

#pragma once

#ifndef ZTD_TEXT_DETAIL_WIDE_EXECUTION_CWCHAR_HPP
#define ZTD_TEXT_DETAIL_WIDE_EXECUTION_CWCHAR_HPP

#include <ztd/text/version.hpp>

#include <ztd/text/execution.hpp>
#include <ztd/text/encode_result.hpp>
#include <ztd/text/decode_result.hpp>
#include <ztd/text/error_handler.hpp>
#include <ztd/text/unicode_code_point.hpp>
#include <ztd/text/is_ignorable_error_handler.hpp>
#include <ztd/text/state.hpp>
#include <ztd/text/detail/empty_state.hpp>
#include <ztd/text/detail/progress_handler.hpp>

#include <ztd/ranges/range.hpp>
#include <ztd/idk/span.hpp>
#include <ztd/idk/encoding_detection.hpp>
#include <ztd/idk/mbstate_t.hpp>
#include <ztd/idk/type_traits.hpp>

#include <ztd/prologue.hpp>

#include <cwchar>
#include <iterator>
#include <utility>

namespace ztd { namespace text {
	ZTD_TEXT_INLINE_ABI_NAMESPACE_OPEN_I_

	namespace __txt_detail {

		class __wide_execution_decode_state {
		public:
			//////
			/// @brief The narrow mbstate_t from the standard library for multibyte conversion sequences.
			ztd_mbstate_t __wide_state;
			//////
			/// @brief The narrow state from the relied-upon standard execution multibyte encoding.
			decode_state_t<execution_t> __narrow_state;

			//////
			/// @brief Zero-initializes to its initial state, which includes the initial conversion sequence.
			__wide_execution_decode_state() noexcept : __wide_state(), __narrow_state() {
				// make sure it is initialized
				ZTD_TEXT_ASSERT(::std::mbsinit(&this->__wide_state) != 0);
			}

			//////
			/// @brief Finds out whether or not the state contains any unused data that needs to complete an
			/// indivisible unit of work.
			///
			/// @returns Whether or not there are additional information stored in any part of the standard-based
			/// streams have accumulated information for a continual decode operation.
			bool is_complete() const noexcept {
				return (::std::mbsinit(&this->__wide_state) != 0)
					&& ::ztd::text::is_state_complete(this->__narrow_state);
			}
		};

		class __wide_execution_encode_state {
		public:
			//////
			/// @brief The wide mbstate_t from the standard library for multibyte conversion sequences.
			ztd_mbstate_t __wide_state;
			//////
			/// @brief The narrow state from the relied-upon standard execution multibyte encoding.
			encode_state_t<execution_t> __narrow_state;

			//////
			/// @brief Zero-initializes to its initial state, which includes the initial conversion sequence.
			__wide_execution_encode_state() noexcept : __wide_state(), __narrow_state() {
				ZTD_TEXT_ASSERT(::std::mbsinit(&this->__wide_state) != 0);
			}


			//////
			/// @brief Finds out whether or not the state contains any unused data that needs to complete an
			/// indivisible unit of work.
			///
			/// @returns Whether or not there are additional information stored in any part of the standard-based
			/// streams have accumulated information for a continual encode operation.
			bool is_complete() const noexcept {
				return (::std::mbsinit(&this->__wide_state) != 0)
					&& ::ztd::text::is_state_complete(this->__narrow_state);
			}
		};
	} // namespace __txt_detail

	namespace __txt_impl {

		//////
		/// @brief The Encoding that represents the "Wide Execution" (wide locale-based) encoding. This iteration
		/// uses the C Standard Library to do its job.
		///
		/// @remarks Because this encoding uses the C Standard Library's functions, it is both slower and
		/// effectively dangerous because it requires a roundtrip through the encoding to get to
		/// UTF-32, and vice-versa. This is only used when `wchar_t` and its locale-based runtime encoding
		/// cannot be determined to be UTF-32, UTF-16, or some other statically-known encoding. These conversions
		/// may also be lossy.
		class __wide_execution_cwchar {
		public:
			//////
			/// @brief The individual units that result from an encode operation or are used as input to a
			/// decode operation.
			///
			/// @remarks Please note that wchar_t is a variably sized type across platforms and may not
			/// represent either UTF-16 or UTF-32, including on *nix or POSIX platforms.
			using code_unit = wchar_t;
			//////
			/// @brief The individual units that result from a decode operation or as used as input to an encode
			/// operation. For most encodings, this is going to be a Unicode Code Point or a Unicode Scalar
			/// Value.
			using code_point = unicode_code_point;

		private:
			using __wide_decode_state = __txt_detail::__wide_execution_decode_state;
			using __wide_encode_state = __txt_detail::__wide_execution_encode_state;

		public:
			//////
			/// @brief The state of the wide encoding used between calls, which may potentially manage
			/// shift state.
			///
			/// @remarks This type can potentially have lots of state due to the way the C API is specified.
			using decode_state = __wide_decode_state;
			//////
			/// @brief The state of the wide encoding used between calls, which may potentially manage
			/// shift state.
			///
			/// @remarks This type can potentially have lots of state due to the way the C API is specified.
			using encode_state = __wide_encode_state;
			//////
			/// @brief Whether or not the decode operation can process all forms of input into code point
			/// values.
			///
			/// @remarks All known wide encodings can decode into Unicode just fine.
			using is_decode_injective = ::std::false_type;

			//////
			/// @brief Whether or not the encode operation can process all forms of input into code unit values.
			/// On Windows, this is guaranteed to be UTF-16 encoding for the platform. Normally, this is UTF-32
			/// on *nix/POSIX machines, but it can (and has been) changed before, sometimes even at runtime.
			///
			/// @remarks IBM encodings/computers make life interesting...
			using is_encode_injective = ::std::false_type;

			//////
			/// @brief Whether or not this encoding a Unicode encoding of some type.
			///
			/// @remarks On Windows, this is always true. On other platforms, the guarantees are not quite
			/// there. IBM encodings/computers make life interesting...
			using is_unicode_encoding = ::std::false_type;

			//////
			/// @brief The maximum code units a single complete operation of encoding can produce.
			inline static constexpr const ::std::size_t max_code_units = 8;
			//////
			/// @brief The maximum number of code points a single complete operation of decoding can produce.
			inline static constexpr const ::std::size_t max_code_points = 8;

			//////
			/// @brief Returns whether or not this encoding is a unicode encoding.
			///
			/// @remarks This function operates at runtime and queries the existing locale through a variety of
			/// platform-specific means (such as `nl_langinfo` for POSIX, ACP probing on Windows, or fallin
			/// back to
			/// `std::setlocale` name checking otherwise).
			static bool contains_unicode_encoding() noexcept {
				// even if the wide encoding is unicode, we have to round-trip through the execution encoding, so if
				// this doesn't work then nothing works with all unicode code points!
				if (!ztd::is_execution_encoding_unicode()) {
					return false;
				}
				return ztd::is_wide_execution_encoding_unicode();
			}

			//////
			/// @brief Encodes a single complete unit of information as code units and produces a result with
			/// the input and output ranges moved past what was successfully read and written; or, produces an
			/// error and returns the input and output ranges untouched.
			///
			/// @param[in] __input The input view to read code uunits from.
			/// @param[in] __output The output view to write code points into.
			/// @param[in] __error_handler The error handler to invoke if encoding fails.
			/// @param[in, out] __s The necessary state information. Most encodings have no state, but because
			/// this is effectively a runtime encoding and therefore it is important to preserve and manage this
			/// state.
			///
			/// @returns A ztd::text::encode_result object that contains the reconstructed input range,
			/// reconstructed output range, error handler, and a reference to the passed-in state.
			///
			/// @remarks Platform APIs and/or the C Standard Library may be used to properly decode one complete
			/// unit of information (alongside std::mbstate_t usage). Whether or not the state is used is based
			/// on the implementation and what it chooses.
			///
			/// @remarks To the best ability of the implementation, the iterators will be
			/// returned untouched (e.g., the input models at least a view and a forward_range). If it is not
			/// possible, returned ranges may be incremented even if an error occurs due to the semantics of any
			/// view that models an input_range.
			template <typename _Input, typename _Output, typename _ErrorHandler>
			static auto encode_one(
				_Input&& __input, _Output&& __output, _ErrorHandler&& __error_handler, encode_state& __s) {
				using _UErrorHandler = remove_cvref_t<_ErrorHandler>;
				using _SubInput      = ztd::ranges::csubrange_for_t<::std::remove_reference_t<_Input>>;
				using _SubOutput     = ztd::ranges::subrange_for_t<::std::remove_reference_t<_Output>>;
				using _Result        = encode_result<_SubInput, _SubOutput, encode_state>;
				constexpr bool __call_error_handler = !is_ignorable_error_handler_v<_UErrorHandler>;

				auto __in_it   = ::ztd::ranges::cbegin(__input);
				auto __in_last = ::ztd::ranges::cend(__input);

				if (__in_it == __in_last) {
					// an exhausted sequence is fine
					return _Result(_SubInput(::std::move(__in_it), ::std::move(__in_last)),
						::std::forward<_Output>(__output), __s, encoding_error::ok);
				}

				auto __out_it   = ::ztd::ranges::begin(__output);
				auto __out_last = ::ztd::ranges::end(__output);

				constexpr const ::std::size_t __state_max = 32;
				char __intermediate_buffer[__state_max + 1] {};
				char* __intermediate_start = &__intermediate_buffer[0];
				::ztd::span<char> __intermediate_output(__intermediate_start, __state_max);
				execution_t __exec {};
				__txt_detail::__progress_handler<!__call_error_handler, __wide_execution_cwchar>
					__intermediate_handler {};
				auto __result = __exec.encode_one(::std::forward<_Input>(__input), __intermediate_output,
					__intermediate_handler, __s.__narrow_state);
				if constexpr (__call_error_handler) {
					if (__result.error_code != encoding_error::ok) {
						__wide_execution_cwchar __self {};
						return ::std::forward<_ErrorHandler>(__error_handler)(__self,
							_Result(::std::move(__result.input),
							     _SubOutput(::std::move(__out_it), ::std::move(__out_last)), __s,
							     __result.error_code),
							__intermediate_handler._M_code_points_progress(),
							__intermediate_handler._M_code_units_progress());
					}
				}

				auto __current_input = ::ztd::span<char>(__intermediate_output.data(),
					::std::distance(__intermediate_output.data(), __result.output.data()));
				code_unit __units[1] {};
				::std::size_t __res = ::std::mbrtowc(::std::addressof(__units[0]), __current_input.data(),
					__current_input.size(), ::std::addressof(__s.__wide_state));
				if (__res == static_cast<::std::size_t>(-1)) {
					// error: cry about it
					if constexpr (__call_error_handler) {
						__wide_execution_cwchar __self {};
						return ::std::forward<_ErrorHandler>(__error_handler)(__self,
							_Result(::std::move(__result.input),
							     _SubOutput(::std::move(__out_it), ::std::move(__out_last)), __s,
							     encoding_error::invalid_sequence),
							__intermediate_handler._M_code_points_progress(),
							__intermediate_handler._M_code_units_progress());
					}
				}
				else if (__res == static_cast<::std::size_t>(-2)) {
					// incomplete sequence
					if constexpr (__call_error_handler) {
						__wide_execution_cwchar __self {};
						return ::std::forward<_ErrorHandler>(__error_handler)(__self,
							_Result(::std::move(__result.input),
							     _SubOutput(::std::move(__out_it), ::std::move(__out_last)), __s,
							     encoding_error::incomplete_sequence),
							__intermediate_handler._M_code_points_progress(),
							__intermediate_handler._M_code_units_progress());
					}
				}
				*__out_it = __units[0];
				::ztd::ranges::iter_advance(__out_it);

				return _Result(::std::move(__result.input),
					_SubOutput(::std::move(__out_it), ::std::move(__out_last)), __s, __result.error_code);
			}

			//////
			/// @brief Decodes a single complete unit of information as code points and produces a result with
			/// the input and output ranges moved past what was successfully read and written; or, produces an
			/// error and returns the input and output ranges untouched.
			///
			/// @param[in] __input The input view to read code uunits from.
			/// @param[in] __output The output view to write code points into.
			/// @param[in] __error_handler The error handler to invoke if encoding fails.
			/// @param[in, out] __s The necessary state information. Most encodings have no state, but because
			/// this is effectively a runtime encoding and therefore it is important to preserve and manage this
			/// state.
			///
			/// @returns A ztd::text::decode_result object that contains the reconstructed input range,
			/// reconstructed output range, error handler, and a reference to the passed-in state.
			///
			/// @remarks Platform APIs and/or the C Standard Library may be used to properly decode one complete
			/// unit of information (alongside std::mbstate_t usage). Whether or not the state is used is based
			/// on the implementation and what it chooses.
			///
			/// @remarks To the best ability of the implementation, the iterators will be
			/// returned untouched (e.g., the input models at least a view and a forward_range). If it is not
			/// possible, returned ranges may be incremented even if an error occurs due to the semantics of any
			/// view that models an input_range.
			template <typename _Input, typename _Output, typename _ErrorHandler>
			static auto decode_one(
				_Input&& __input, _Output&& __output, _ErrorHandler&& __error_handler, decode_state& __s) {
				using _UErrorHandler = remove_cvref_t<_ErrorHandler>;
				using _SubInput      = ztd::ranges::csubrange_for_t<::std::remove_reference_t<_Input>>;
				using _SubOutput     = ztd::ranges::subrange_for_t<::std::remove_reference_t<_Output>>;
				using _Result        = decode_result<_SubInput, _SubOutput, decode_state>;
				constexpr bool __call_error_handler = !is_ignorable_error_handler_v<_UErrorHandler>;

				auto __in_it   = ::ztd::ranges::cbegin(__input);
				auto __in_last = ::ztd::ranges::cend(__input);

				if (__in_it == __in_last) {
					// an exhausted sequence is fine
					return _Result(_SubInput(::std::move(__in_it), ::std::move(__in_last)),
						::std::forward<_Output>(__output), __s, encoding_error::ok);
				}

				auto __out_it   = ::ztd::ranges::begin(__output);
				auto __out_last = ::ztd::ranges::end(__output);

				if constexpr (__call_error_handler) {
					if (__out_it == __out_last) {
						__wide_execution_cwchar __self {};
						return ::std::forward<_ErrorHandler>(__error_handler)(__self,
							_Result(_SubInput(::std::move(__in_it), ::std::move(__in_last)),
							     _SubOutput(::std::move(__out_it), ::std::move(__out_last)), __s,
							     encoding_error::insufficient_output_space),
							::ztd::span<code_unit>(), ::ztd::span<code_point>());
					}
				}

				constexpr const ::std::size_t __state_max = 32;
				char __intermediate_buffer[__state_max + 1] {};
				::std::size_t __state_count = 0;
				code_unit __units[__state_max] {};
				::std::size_t __units_count = 0;
				for (; __state_count < __state_max;) {
					__units[__units_count]  = *__in_it;
					const code_unit& __unit = __units[__units_count];
					++__units_count;
					::ztd::ranges::iter_advance(__in_it);
#if ZTD_IS_ON(ZTD_CXX_STDLIB_VCXX)
					::std::size_t __res;
					errno_t __err = wcrtomb_s(::std::addressof(__res), __intermediate_buffer, __state_max, __unit,
						::std::addressof(__s.__wide_state));
					if constexpr (__call_error_handler) {
						if (__err != 0) {
							// error: cry about it
							__wide_execution_cwchar __self {};
							return ::std::forward<_ErrorHandler>(__error_handler)(__self,
								_Result(_SubInput(::std::move(__in_it), ::std::move(__in_last)),
								     _SubOutput(::std::move(__out_it), ::std::move(__out_last)), __s,
								     encoding_error::invalid_sequence),
								::ztd::span<code_unit>(::std::addressof(__units[0]), __units_count),
								::ztd::span<code_point>());
						}
					}
					else {
						(void)__err;
					}
#else
					::std::size_t __res
						= ::std::wcrtomb(__intermediate_buffer, __unit, ::std::addressof(__s.__wide_state));
#endif

					if (__res == static_cast<::std::size_t>(-1)) {
						if constexpr (__call_error_handler) {
							// error: cry about it
							__wide_execution_cwchar __self {};
							return ::std::forward<_ErrorHandler>(__error_handler)(__self,
								_Result(_SubInput(::std::move(__in_it), ::std::move(__in_last)),
								     _SubOutput(::std::move(__out_it), ::std::move(__out_last)), __s,
								     encoding_error::invalid_sequence),
								::ztd::span<code_unit>(::std::addressof(__units[0]), __units_count),
								::ztd::span<code_point>());
						}
					}
					else if (__res == 0) {
						if (::std::mbsinit(::std::addressof(__s.__wide_state)) == 0) {
							// mixed conversion potential?!
							// technically, not standard behavior, but I don't really care?
							// Mr. Steve Downey points out I'm slightly right
							// about my assumption here: C has an open DR for this
							// (DR 488, http://www.open-std.org/jtc1/sc22/wg14/www/docs/n2059.htm#dr_488)
							// Another DR, DR 499
							// (http://www.open-std.org/jtc1/sc22/wg14/www/docs/n2059.htm#dr_498) addresses
							// thread safety issues, both should be solved is this is to be anywhere near
							// usable
							if constexpr (__call_error_handler) {
								if (__in_it == __in_last) {
									__wide_execution_cwchar __self {};
									return ::std::forward<_ErrorHandler>(__error_handler)(__self,
										_Result(::std::forward<_Input>(__input),
										     ::std::forward<_Output>(__output), __s,
										     encoding_error::incomplete_sequence),
										::ztd::span<code_unit>(::std::addressof(__units[0]), __units_count),
										::ztd::span<code_point>());
								}
							}
							continue;
						}
					}

					__state_count += __res;
					break;
				}

				execution_t __exec {};
				__txt_detail::__progress_handler<!__call_error_handler, __wide_execution_cwchar>
					__intermediate_handler {};
				::ztd::span<char> __intermediate_input(__intermediate_buffer, __state_max);
				auto __result = __exec.decode_one(__intermediate_input, ::std::forward<_Output>(__output),
					__intermediate_handler, __s.__narrow_state);
				if constexpr (__call_error_handler) {
					if (__result.error_code != encoding_error::ok) {
						__wide_execution_cwchar __self {};
						return ::std::forward<_ErrorHandler>(__error_handler)(__self,
							_Result(_SubInput(::std::move(__in_it), ::std::move(__in_last)),
							     ::std::move(__result.output), __s, __result.error_code),
							::ztd::span<code_unit>(::std::addressof(__units[0]), __units_count),
							__intermediate_handler._M_code_points_progress());
					}
				}
				return _Result(_SubInput(::std::move(__in_it), ::std::move(__in_last)),
					::std::move(__result.output), __s, __result.error_code);
			}
		};
	} // namespace __txt_impl


	ZTD_TEXT_INLINE_ABI_NAMESPACE_CLOSE_I_
}} // namespace ztd::text

#include <ztd/epilogue.hpp>

#endif
