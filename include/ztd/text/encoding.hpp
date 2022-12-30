// =============================================================================
//
// ztd.text
// Copyright © 2022-2023 JeanHeyd "ThePhD" Meneide and Shepherd's Oasis, LLC
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

#ifndef ZTD_TEXT_ENCODING_HPP
#define ZTD_TEXT_ENCODING_HPP

#include <ztd/text/version.hpp>

// general purpose encoding wrappers/shims
#include <ztd/text/execution.hpp>
#include <ztd/text/wide_execution.hpp>
#include <ztd/text/encoding_scheme.hpp>
#include <ztd/text/literal.hpp>
#include <ztd/text/wide_literal.hpp>
#include <ztd/text/any_encoding.hpp>
#include <ztd/text/cuneicode_encoding.hpp>
#include <ztd/text/cuneicode_registry_encoding.hpp>

// specific, named encodings
#include <ztd/text/basic_iconv.hpp>
#include <ztd/text/punycode.hpp>
#include <ztd/text/ascii.hpp>
#include <ztd/text/shift_jis_x0208.hpp>
#include <ztd/text/euc_kr.hpp>
#include <ztd/text/windows_1252.hpp>
#include <ztd/text/utf8.hpp>
#include <ztd/text/utf16.hpp>
#include <ztd/text/utf32.hpp>

#include <ztd/prologue.hpp>

namespace ztd { namespace text {
	ZTD_TEXT_INLINE_ABI_NAMESPACE_OPEN_I_

	ZTD_TEXT_INLINE_ABI_NAMESPACE_CLOSE_I_
}} // namespace ztd::text

#include <ztd/epilogue.hpp>

#endif
