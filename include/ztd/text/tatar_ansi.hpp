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

#ifndef ZTD_TEXT_TATAR_ANSI_HPP
#define ZTD_TEXT_TATAR_ANSI_HPP

#include <ztd/text/version.hpp>

#include <ztd/text/unicode_code_point.hpp>
#include <ztd/text/impl/single_ascii_byte_high_bit_lookup_encoding.hpp>

#include <ztd/encoding_tables/tatar_ansi.tables.hpp>

#include <ztd/prologue.hpp>

namespace ztd { namespace text {
	ZTD_TEXT_INLINE_ABI_NAMESPACE_OPEN_I_

	//////
	/// @brief The encoding that matches the TATAR encoding (it's ANSI variant, based on Windows Code Page 1252.)
	///
	/// @tparam _CodeUnit The default code unit type to use when outputting encoded units.
	/// @tparam _CodePoint The code point type to use when outputting decoded units.
	template <typename _CodeUnit = char, typename _CodePoint = unicode_code_point>
	class basic_tatar_ansi
	: public __txt_impl::__single_ascii_byte_high_bit_lookup_encoding<basic_tatar_ansi<_CodeUnit, _CodePoint>,
		  &::ztd::et::tatar_ansi_index_to_code_point, &::ztd::et::tatar_ansi_code_point_to_index, _CodeUnit,
		  _CodePoint> { };

	//////
	/// @brief An instance of basic_tatar_ansi for ease of use.
	inline constexpr basic_tatar_ansi<char> tatar_ansi = {};

	ZTD_TEXT_INLINE_ABI_NAMESPACE_CLOSE_I_
}} // namespace ztd::text


#include <ztd/epilogue.hpp>

#endif
