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

#ifndef ZTD_TEXT_TESTS_BASIC_UNICODE_STRINGS_HPP
#define ZTD_TEXT_TESTS_BASIC_UNICODE_STRINGS_HPP

#include <ztd/text/version.hpp>

#include <ztd/text/c_string_view.hpp>
#include <ztd/text/encoding.hpp>
#include <ztd/text/endian.hpp>
#include <ztd/text/char8_t.hpp>
#include <ztd/text/is_unicode_encoding.hpp>

#include <ztd/text/detail/span.hpp>

#if ZTD_TEXT_IS_ON(ZTD_TEXT_COMPILER_VCXX_I_)
#pragma warning(push)
#pragma warning(disable : 4310)
#endif

namespace ztd { namespace text { namespace tests {

	template <typename Container>
	inline ztd::text::span<const std::byte> as_bytes(Container& c) {
		return ztd::text::as_bytes(ztd::text::span<std::remove_pointer_t<decltype(c.data())>>(c.data(), c.size()));
	}

	template <typename Container>
	inline ztd::text::span<const std::byte> as_writeable_bytes(Container& c) {
		return ztd::text::as_writable_bytes(
			ztd::text::span<std::remove_pointer_t<decltype(c.data())>>(c.data(), c.size()));
	}

	template <typename CharType>
	inline constexpr const CharType x_u32_unicode_sequence_truth_native_endian_storage[] = { (CharType)0x00006b66,
		(CharType)0x00004fa6, (CharType)0x00005baa, (CharType)0x00007ae0, (CharType)0x00007b2c, (CharType)0x00000039,
		(CharType)0x00006761, (CharType)0x00002014, (CharType)0x00002014, (CharType)0x00005e94, (CharType)0x00005c55,
		(CharType)0x00007fc5, (CharType)0x00004e16, (CharType)0x0000754c, (CharType)0x00003002, (CharType)0x00004e0d,
		(CharType)0x00005206, (CharType)0x00004eba, (CharType)0x000079cd, (CharType)0x00003001, (CharType)0x000056fd,
		(CharType)0x00007c4d, (CharType)0x00005171, (CharType)0x0000540c, (CharType)0x00006218, (CharType)0x00006597,
		(CharType)0x00003002, (CharType)0x000026c4, (CharType)0x000026c4, (CharType)0x00002728, (CharType)0x00002728,
		(CharType)0x00002705, (CharType)0x0001f980, (CharType)0x0001f602, (CharType)0x0001f62d, (CharType)0x0001f62c,
		(CharType)0x0001f62c, (CharType)0x0001f614, (CharType)0x0001f614, (CharType)0x0001f614, (CharType)0x0001f3a8,
		(CharType)0x0001f3a8, (CharType)0x0001f436, (CharType)0x0001f937, (CharType)0x0000200d, (CharType)0x00002640,
		(CharType)0x0000fe0f, (CharType)0x0001f6e0, (CharType)0x0001f44b, (CharType)0x0001f4a5, (CharType)0x0001f4a3,
		(CharType)0x0001f4a5, (CharType)0x0001f4a3, (CharType)0x0001f377, (CharType)0x0001f377, (CharType)0x0001f377,
		(CharType)0x0001f377, (CharType)0x0000007a, (CharType)0x00002665, (CharType)0x00004566, (CharType)0x0000fffd,
		(CharType)0x0000fffd, (CharType)0x000079c1, (CharType)0x0000306f, (CharType)0x000030ac, (CharType)0x000030e9,
		(CharType)0x000030b9, (CharType)0x00003092, (CharType)0x000098df, (CharType)0x00003079, (CharType)0x00003089,
		(CharType)0x0000308c, (CharType)0x0000307e, (CharType)0x00003059, (CharType)0x00003002, (CharType)0x0000305d,
		(CharType)0x0000308c, (CharType)0x0000306f, (CharType)0x000079c1, (CharType)0x00003092, (CharType)0x000050b7,
		(CharType)0x00003064, (CharType)0x00003051, (CharType)0x0000307e, (CharType)0x0000305b, (CharType)0x00003093,
		(CharType)0x00003002, (CharType)0x00000baf, (CharType)0x00000bbe, (CharType)0x00000bae, (CharType)0x00000bb1,
		(CharType)0x00000bbf, (CharType)0x00000ba8, (CharType)0x00000bcd, (CharType)0x00000ba4, (CharType)0x00000020,
		(CharType)0x00000bae, (CharType)0x00000bca, (CharType)0x00000bb4, (CharType)0x00000bbf, (CharType)0x00000b95,
		(CharType)0x00000bb3, (CharType)0x00000bbf, (CharType)0x00000bb2, (CharType)0x00000bc7, (CharType)0x00000020,
		(CharType)0x00000ba4, (CharType)0x00000bae, (CharType)0x00000bbf, (CharType)0x00000bb4, (CharType)0x00000bcd,
		(CharType)0x00000bae, (CharType)0x00000bca, (CharType)0x00000bb4, (CharType)0x00000bbf, (CharType)0x00000020,
		(CharType)0x00000baa, (CharType)0x00000bcb, (CharType)0x00000bb2, (CharType)0x00000bcd, (CharType)0x00000020,
		(CharType)0x00000b87, (CharType)0x00000ba9, (CharType)0x00000bbf, (CharType)0x00000ba4, (CharType)0x00000bbe,
		(CharType)0x00000bb5, (CharType)0x00000ba4, (CharType)0x00000bc1, (CharType)0x00000020, (CharType)0x00000b8e,
		(CharType)0x00000b99, (CharType)0x00000bcd, (CharType)0x00000b95, (CharType)0x00000bc1, (CharType)0x00000bae,
		(CharType)0x00000bcd, (CharType)0x00000020, (CharType)0x00000b95, (CharType)0x00000bbe, (CharType)0x00000ba3,
		(CharType)0x00000bcb, (CharType)0x00000bae, (CharType)0x00000bcd, (CharType)0x0000002c, (CharType)0x0000041d,
		(CharType)0x00000430, (CharType)0x00000020, (CharType)0x00000431, (CharType)0x00000435, (CharType)0x00000440,
		(CharType)0x00000435, (CharType)0x00000433, (CharType)0x00000443, (CharType)0x00000020, (CharType)0x0000043f,
		(CharType)0x00000443, (CharType)0x00000441, (CharType)0x00000442, (CharType)0x0000044b, (CharType)0x0000043d,
		(CharType)0x0000043d, (CharType)0x0000044b, (CharType)0x00000445, (CharType)0x00000020, (CharType)0x00000432,
		(CharType)0x0000043e, (CharType)0x0000043b, (CharType)0x0000043d, (CharType)0x00000020, (CharType)0x000020ac,
		(CharType)0x00000020, (CharType)0x00000623, (CharType)0x00000646, (CharType)0x00000627, (CharType)0x00000020,
		(CharType)0x00000642, (CharType)0x00000627, (CharType)0x0000062f, (CharType)0x00000631, (CharType)0x00000020,
		(CharType)0x00000639, (CharType)0x00000644, (CharType)0x00000649, (CharType)0x00000020, (CharType)0x00000623,
		(CharType)0x00000643, (CharType)0x00000644, (CharType)0x00000020, (CharType)0x00000627, (CharType)0x00000644,
		(CharType)0x00000632, (CharType)0x0000062c, (CharType)0x00000627, (CharType)0x0000062c, (CharType)0x00000020,
		(CharType)0x00000648, (CharType)0x00000020, (CharType)0x00000647, (CharType)0x00000630, (CharType)0x00000627,
		(CharType)0x00000020, (CharType)0x00000644, (CharType)0x00000627, (CharType)0x00000020, (CharType)0x0000064a,
		(CharType)0x00000624, (CharType)0x00000644, (CharType)0x00000645, (CharType)0x00000646, (CharType)0x0000064a,
		(CharType)0x0000002e, (CharType)0x00000020, (CharType)0x0000004f, (CharType)0x0000006e, (CharType)0x00000020,
		(CharType)0x00000074, (CharType)0x00000068, (CharType)0x00000065, (CharType)0x00000020, (CharType)0x0000006f,
		(CharType)0x00000074, (CharType)0x00000068, (CharType)0x00000065, (CharType)0x00000072, (CharType)0x00000020,
		(CharType)0x00000068, (CharType)0x00000061, (CharType)0x0000006e, (CharType)0x00000064, (CharType)0x0000002c,
		(CharType)0x00000020, (CharType)0x00000077, (CharType)0x00000065, (CharType)0x00000020, (CharType)0x00000064,
		(CharType)0x00000065, (CharType)0x0000006e, (CharType)0x0000006f, (CharType)0x00000075, (CharType)0x0000006e,
		(CharType)0x00000063, (CharType)0x00000065, (CharType)0x00000020, (CharType)0x00000077, (CharType)0x00000069,
		(CharType)0x00000074, (CharType)0x00000068, (CharType)0x00000020, (CharType)0x00000072, (CharType)0x00000069,
		(CharType)0x00000067, (CharType)0x00000068, (CharType)0x00000074, (CharType)0x00000065, (CharType)0x0000006f,
		(CharType)0x00000075, (CharType)0x00000073, (CharType)0x00000020, (CharType)0x00000069, (CharType)0x0000006e,
		(CharType)0x00000064, (CharType)0x00000069, (CharType)0x00000067, (CharType)0x0000006e, (CharType)0x00000061,
		(CharType)0x00000074, (CharType)0x00000069, (CharType)0x0000006f, (CharType)0x0000006e, (CharType)0x00000020,
		(CharType)0x00000061, (CharType)0x0000006e, (CharType)0x00000064, (CharType)0x00000020, (CharType)0x00000064,
		(CharType)0x00000069, (CharType)0x00000073, (CharType)0x0000006c, (CharType)0x00000069, (CharType)0x0000006b,
		(CharType)0x00000065, (CharType)0x00000020, (CharType)0x0000006d, (CharType)0x00000065, (CharType)0x0000006e,
		(CharType)0x00000020, (CharType)0x00000077, (CharType)0x00000068, (CharType)0x0000006f, (CharType)0x00000020,
		(CharType)0x00000061, (CharType)0x00000072, (CharType)0x00000065, (CharType)0x00000020, (CharType)0x00000073,
		(CharType)0x0000006f, (CharType)0x00000020, (CharType)0x00000062, (CharType)0x00000065, (CharType)0x00000067,
		(CharType)0x00000075, (CharType)0x00000069, (CharType)0x0000006c, (CharType)0x00000065, (CharType)0x00000064,
		(CharType)0x00000020, (CharType)0x00000061, (CharType)0x0000006e, (CharType)0x00000064, (CharType)0x00000020,
		(CharType)0x00000064, (CharType)0x00000065, (CharType)0x0000006d, (CharType)0x0000006f, (CharType)0x00000072,
		(CharType)0x00000061, (CharType)0x0000006c, (CharType)0x00000069, (CharType)0x0000007a, (CharType)0x00000065,
		(CharType)0x00000064, (CharType)0x00000020, (CharType)0x00000062, (CharType)0x00000079, (CharType)0x00000020,
		(CharType)0x00000074, (CharType)0x00000068, (CharType)0x00000065, (CharType)0x00000020, (CharType)0x00000063,
		(CharType)0x00000068, (CharType)0x00000061, (CharType)0x00000072, (CharType)0x0000006d, (CharType)0x00000073,
		(CharType)0x00000020, (CharType)0x0000006f, (CharType)0x00000066, (CharType)0x00000020, (CharType)0x00000070,
		(CharType)0x0000006c, (CharType)0x00000065, (CharType)0x00000061, (CharType)0x00000073, (CharType)0x00000075,
		(CharType)0x00000072, (CharType)0x00000065, (CharType)0x00000020, (CharType)0x0000006f, (CharType)0x00000066,
		(CharType)0x00000020, (CharType)0x00000074, (CharType)0x00000068, (CharType)0x00000065, (CharType)0x00000020,
		(CharType)0x0000006d, (CharType)0x0000006f, (CharType)0x0000006d, (CharType)0x00000065, (CharType)0x0000006e,
		(CharType)0x00000074, (CharType)0x0000002c, (CharType)0x00000020, (CharType)0x00000073, (CharType)0x0000006f,
		(CharType)0x00000020, (CharType)0x00000062, (CharType)0x0000006c, (CharType)0x00000069, (CharType)0x0000006e,
		(CharType)0x00000064, (CharType)0x00000065, (CharType)0x00000064, (CharType)0x00000020, (CharType)0x00000062,
		(CharType)0x00000079, (CharType)0x00000020, (CharType)0x00000064, (CharType)0x00000065, (CharType)0x00000073,
		(CharType)0x00000069, (CharType)0x00000072, (CharType)0x00000065, (CharType)0x0000002c, (CharType)0x00000020,
		(CharType)0x00000074, (CharType)0x00000068, (CharType)0x00000061, (CharType)0x00000074, (CharType)0x00000020,
		(CharType)0x00000074, (CharType)0x00000068, (CharType)0x00000065, (CharType)0x00000079, (CharType)0x00000020,
		(CharType)0x00000063, (CharType)0x00000061, (CharType)0x0000006e, (CharType)0x0000006e, (CharType)0x0000006f,
		(CharType)0x00000074, (CharType)0x00000020, (CharType)0x00000066, (CharType)0x0000006f, (CharType)0x00000072,
		(CharType)0x00000065, (CharType)0x00000073, (CharType)0x00000065, (CharType)0x00000065, (CharType)0x00000020,
		(CharType)0x00000074, (CharType)0x00000068, (CharType)0x00000065, (CharType)0x00000020, (CharType)0x00000070,
		(CharType)0x00000061, (CharType)0x00000069, (CharType)0x0000006e, (CharType)0x00000020, (CharType)0x00000061,
		(CharType)0x0000006e, (CharType)0x00000064, (CharType)0x00000020, (CharType)0x00000074, (CharType)0x00000072,
		(CharType)0x0000006f, (CharType)0x00000075, (CharType)0x00000062, (CharType)0x0000006c, (CharType)0x00000065,
		(CharType)0x00000020, (CharType)0x00000074, (CharType)0x00000068, (CharType)0x00000061, (CharType)0x00000074,
		(CharType)0x00000020, (CharType)0x00000061, (CharType)0x00000072, (CharType)0x00000065, (CharType)0x00000020,
		(CharType)0x00000062, (CharType)0x0000006f, (CharType)0x00000075, (CharType)0x0000006e, (CharType)0x00000064,
		(CharType)0x00000020, (CharType)0x00000074, (CharType)0x0000006f, (CharType)0x00000020, (CharType)0x00000065,
		(CharType)0x0000006e, (CharType)0x00000073, (CharType)0x00000075, (CharType)0x00000065, (CharType)0x0000003b,
		(CharType)0x00000020, (CharType)0x00000061, (CharType)0x0000006e, (CharType)0x00000064, (CharType)0x00000020,
		(CharType)0x00000065, (CharType)0x00000071, (CharType)0x00000075, (CharType)0x00000061, (CharType)0x0000006c,
		(CharType)0x00000020, (CharType)0x00000062, (CharType)0x0000006c, (CharType)0x00000061, (CharType)0x0000006d,
		(CharType)0x00000065, (CharType)0x00000020, (CharType)0x00000062, (CharType)0x00000065, (CharType)0x0000006c,
		(CharType)0x0000006f, (CharType)0x0000006e, (CharType)0x00000067, (CharType)0x00000073, (CharType)0x00000020,
		(CharType)0x00000074, (CharType)0x0000006f, (CharType)0x00000020, (CharType)0x00000074, (CharType)0x00000068,
		(CharType)0x0000006f, (CharType)0x00000073, (CharType)0x00000065, (CharType)0x00000020, (CharType)0x00000077,
		(CharType)0x00000068, (CharType)0x0000006f, (CharType)0x00000020, (CharType)0x00000066, (CharType)0x00000061,
		(CharType)0x00000069, (CharType)0x0000006c, (CharType)0x00000020, (CharType)0x00000069, (CharType)0x0000006e,
		(CharType)0x00000020, (CharType)0x00000074, (CharType)0x00000068, (CharType)0x00000065, (CharType)0x00000069,
		(CharType)0x00000072, (CharType)0x00000020, (CharType)0x00000064, (CharType)0x00000075, (CharType)0x00000074,
		(CharType)0x00000079, (CharType)0x00000020, (CharType)0x00000074, (CharType)0x00000068, (CharType)0x00000072,
		(CharType)0x0000006f, (CharType)0x00000075, (CharType)0x00000067, (CharType)0x00000068, (CharType)0x00000020,
		(CharType)0x00000077, (CharType)0x00000065, (CharType)0x00000061, (CharType)0x0000006b, (CharType)0x0000006e,
		(CharType)0x00000065, (CharType)0x00000073, (CharType)0x00000073, (CharType)0x00000020, (CharType)0x0000006f,
		(CharType)0x00000066, (CharType)0x00000020, (CharType)0x00000077, (CharType)0x00000069, (CharType)0x0000006c,
		(CharType)0x0000006c, (CharType)0x0000002c, (CharType)0x00000020, (CharType)0x00000077, (CharType)0x00000068,
		(CharType)0x00000069, (CharType)0x00000063, (CharType)0x00000068, (CharType)0x00000020, (CharType)0x00000069,
		(CharType)0x00000073, (CharType)0x00000020, (CharType)0x00000074, (CharType)0x00000068, (CharType)0x00000065,
		(CharType)0x00000020, (CharType)0x00000073, (CharType)0x00000061, (CharType)0x0000006d, (CharType)0x00000065,
		(CharType)0x00000020, (CharType)0x00000061, (CharType)0x00000073, (CharType)0x00000020, (CharType)0x00000073,
		(CharType)0x00000061, (CharType)0x00000079, (CharType)0x00000069, (CharType)0x0000006e, (CharType)0x00000067,
		(CharType)0x00000020, (CharType)0x00000074, (CharType)0x00000068, (CharType)0x00000072, (CharType)0x0000006f,
		(CharType)0x00000075, (CharType)0x00000067, (CharType)0x00000068, (CharType)0x00000020, (CharType)0x00000073,
		(CharType)0x00000068, (CharType)0x00000072, (CharType)0x00000069, (CharType)0x0000006e, (CharType)0x0000006b,
		(CharType)0x00000069, (CharType)0x0000006e, (CharType)0x00000067, (CharType)0x00000020, (CharType)0x00000066,
		(CharType)0x00000072, (CharType)0x0000006f, (CharType)0x0000006d, (CharType)0x00000020, (CharType)0x00000074,
		(CharType)0x0000006f, (CharType)0x00000069, (CharType)0x0000006c, (CharType)0x00000020, (CharType)0x00000061,
		(CharType)0x0000006e, (CharType)0x00000064, (CharType)0x00000020, (CharType)0x00000070, (CharType)0x00000061,
		(CharType)0x00000069, (CharType)0x0000006e, (CharType)0x0000002e, (CharType)0x00000020, (CharType)0x00000054,
		(CharType)0x00000068, (CharType)0x00000065, (CharType)0x00000073, (CharType)0x00000065, (CharType)0x00000020,
		(CharType)0x00000063, (CharType)0x00000061, (CharType)0x00000073, (CharType)0x00000065, (CharType)0x00000073,
		(CharType)0x00000020, (CharType)0x00000061, (CharType)0x00000072, (CharType)0x00000065, (CharType)0x00000020,
		(CharType)0x00000070, (CharType)0x00000065, (CharType)0x00000072, (CharType)0x00000066, (CharType)0x00000065,
		(CharType)0x00000063, (CharType)0x00000074, (CharType)0x0000006c, (CharType)0x00000079, (CharType)0x00000020,
		(CharType)0x00000073, (CharType)0x00000069, (CharType)0x0000006d, (CharType)0x00000070, (CharType)0x0000006c,
		(CharType)0x00000065, (CharType)0x00000020, (CharType)0x00000061, (CharType)0x0000006e, (CharType)0x00000064,
		(CharType)0x00000020, (CharType)0x00000065, (CharType)0x00000061, (CharType)0x00000073, (CharType)0x00000079,
		(CharType)0x00000020, (CharType)0x00000074, (CharType)0x0000006f, (CharType)0x00000020, (CharType)0x00000064,
		(CharType)0x00000069, (CharType)0x00000073, (CharType)0x00000074, (CharType)0x00000069, (CharType)0x0000006e,
		(CharType)0x00000067, (CharType)0x00000075, (CharType)0x00000069, (CharType)0x00000073, (CharType)0x00000068,
		(CharType)0x0000002e, (CharType)0x00000020, (CharType)0x00000049, (CharType)0x0000006e, (CharType)0x00000020,
		(CharType)0x00000061, (CharType)0x00000020, (CharType)0x00000066, (CharType)0x00000072, (CharType)0x00000065,
		(CharType)0x00000065, (CharType)0x00000020, (CharType)0x00000068, (CharType)0x0000006f, (CharType)0x00000075,
		(CharType)0x00000072, (CharType)0x0000002c, (CharType)0x00000020, (CharType)0x00000077, (CharType)0x00000068,
		(CharType)0x00000065, (CharType)0x0000006e, (CharType)0x00000020, (CharType)0x0000006f, (CharType)0x00000075,
		(CharType)0x00000072, (CharType)0x00000020, (CharType)0x00000070, (CharType)0x0000006f, (CharType)0x00000077,
		(CharType)0x00000065, (CharType)0x00000072, (CharType)0x00000020, (CharType)0x0000006f, (CharType)0x00000066,
		(CharType)0x00000020, (CharType)0x00000063, (CharType)0x00000068, (CharType)0x0000006f, (CharType)0x00000069,
		(CharType)0x00000063, (CharType)0x00000065, (CharType)0x00000020, (CharType)0x00000069, (CharType)0x00000073,
		(CharType)0x00000020, (CharType)0x00000075, (CharType)0x0000006e, (CharType)0x00000074, (CharType)0x00000072,
		(CharType)0x00000061, (CharType)0x0000006d, (CharType)0x0000006d, (CharType)0x00000065, (CharType)0x0000006c,
		(CharType)0x0000006c, (CharType)0x00000065, (CharType)0x00000064, (CharType)0x00000020, (CharType)0x00000061,
		(CharType)0x0000006e, (CharType)0x00000064, (CharType)0x00000020, (CharType)0x00000077, (CharType)0x00000068,
		(CharType)0x00000065, (CharType)0x0000006e, (CharType)0x00000020, (CharType)0x0000006e, (CharType)0x0000006f,
		(CharType)0x00000074, (CharType)0x00000068, (CharType)0x00000069, (CharType)0x0000006e, (CharType)0x00000067,
		(CharType)0x00000020, (CharType)0x00000070, (CharType)0x00000072, (CharType)0x00000065, (CharType)0x00000076,
		(CharType)0x00000065, (CharType)0x0000006e, (CharType)0x00000074, (CharType)0x00000073, (CharType)0x00000020,
		(CharType)0x0000006f, (CharType)0x00000075, (CharType)0x00000072, (CharType)0x00000020, (CharType)0x00000062,
		(CharType)0x00000065, (CharType)0x00000069, (CharType)0x0000006e, (CharType)0x00000067, (CharType)0x00000020,
		(CharType)0x00000061, (CharType)0x00000062, (CharType)0x0000006c, (CharType)0x00000065, (CharType)0x00000020,
		(CharType)0x00000074, (CharType)0x0000006f, (CharType)0x00000020, (CharType)0x00000064, (CharType)0x0000006f,
		(CharType)0x00000020, (CharType)0x00000077, (CharType)0x00000068, (CharType)0x00000061, (CharType)0x00000074,
		(CharType)0x00000020, (CharType)0x00000077, (CharType)0x00000065, (CharType)0x00000020, (CharType)0x0000006c,
		(CharType)0x00000069, (CharType)0x0000006b, (CharType)0x00000065, (CharType)0x00000020, (CharType)0x00000062,
		(CharType)0x00000065, (CharType)0x00000073, (CharType)0x00000074, (CharType)0x0000002c, (CharType)0x00000020,
		(CharType)0x00000065, (CharType)0x00000076, (CharType)0x00000065, (CharType)0x00000072, (CharType)0x00000079,
		(CharType)0x00000020, (CharType)0x00000070, (CharType)0x0000006c, (CharType)0x00000065, (CharType)0x00000061,
		(CharType)0x00000073, (CharType)0x00000075, (CharType)0x00000072, (CharType)0x00000065, (CharType)0x00000020,
		(CharType)0x00000069, (CharType)0x00000073, (CharType)0x00000020, (CharType)0x00000074, (CharType)0x0000006f,
		(CharType)0x00000020, (CharType)0x00000062, (CharType)0x00000065, (CharType)0x00000020, (CharType)0x00000077,
		(CharType)0x00000065, (CharType)0x0000006c, (CharType)0x00000063, (CharType)0x0000006f, (CharType)0x0000006d,
		(CharType)0x00000065, (CharType)0x00000064, (CharType)0x00000020, (CharType)0x00000061, (CharType)0x0000006e,
		(CharType)0x00000064, (CharType)0x00000020, (CharType)0x00000065, (CharType)0x00000076, (CharType)0x00000065,
		(CharType)0x00000072, (CharType)0x00000079, (CharType)0x00000020, (CharType)0x00000070, (CharType)0x00000061,
		(CharType)0x00000069, (CharType)0x0000006e, (CharType)0x00000020, (CharType)0x00000061, (CharType)0x00000076,
		(CharType)0x0000006f, (CharType)0x00000069, (CharType)0x00000064, (CharType)0x00000065, (CharType)0x00000064,
		(CharType)0x0000002e, (CharType)0x00000020, (CharType)0x00000042, (CharType)0x00000075, (CharType)0x00000074,
		(CharType)0x00000020, (CharType)0x00000069, (CharType)0x0000006e, (CharType)0x00000020, (CharType)0x00000063,
		(CharType)0x00000065, (CharType)0x00000072, (CharType)0x00000074, (CharType)0x00000061, (CharType)0x00000069,
		(CharType)0x0000006e, (CharType)0x00000020, (CharType)0x00000063, (CharType)0x00000069, (CharType)0x00000072,
		(CharType)0x00000063, (CharType)0x00000075, (CharType)0x0000006d, (CharType)0x00000073, (CharType)0x00000074,
		(CharType)0x00000061, (CharType)0x0000006e, (CharType)0x00000063, (CharType)0x00000065, (CharType)0x00000073,
		(CharType)0x00000020, (CharType)0x00000061, (CharType)0x0000006e, (CharType)0x00000064, (CharType)0x00000020,
		(CharType)0x0000006f, (CharType)0x00000077, (CharType)0x00000069, (CharType)0x0000006e, (CharType)0x00000067,
		(CharType)0x00000020, (CharType)0x00000074, (CharType)0x0000006f, (CharType)0x00000020, (CharType)0x00000074,
		(CharType)0x00000068, (CharType)0x00000065, (CharType)0x00000020, (CharType)0x00000063, (CharType)0x0000006c,
		(CharType)0x00000061, (CharType)0x00000069, (CharType)0x0000006d, (CharType)0x00000073, (CharType)0x00000020,
		(CharType)0x0000006f, (CharType)0x00000066, (CharType)0x00000020, (CharType)0x00000064, (CharType)0x00000075,
		(CharType)0x00000074, (CharType)0x00000079, (CharType)0x00000020, (CharType)0x0000006f, (CharType)0x00000072,
		(CharType)0x00000020, (CharType)0x00000074, (CharType)0x00000068, (CharType)0x00000065, (CharType)0x00000020,
		(CharType)0x0000006f, (CharType)0x00000062, (CharType)0x0000006c, (CharType)0x00000069, (CharType)0x00000067,
		(CharType)0x00000061, (CharType)0x00000074, (CharType)0x00000069, (CharType)0x0000006f, (CharType)0x0000006e,
		(CharType)0x00000073, (CharType)0x00000020, (CharType)0x0000006f, (CharType)0x00000066, (CharType)0x00000020,
		(CharType)0x00000062, (CharType)0x00000075, (CharType)0x00000073, (CharType)0x00000069, (CharType)0x0000006e,
		(CharType)0x00000065, (CharType)0x00000073, (CharType)0x00000073, (CharType)0x00000020, (CharType)0x00000069,
		(CharType)0x00000074, (CharType)0x00000020, (CharType)0x00000077, (CharType)0x00000069, (CharType)0x0000006c,
		(CharType)0x0000006c, (CharType)0x00000020, (CharType)0x00000066, (CharType)0x00000072, (CharType)0x00000065,
		(CharType)0x00000071, (CharType)0x00000075, (CharType)0x00000065, (CharType)0x0000006e, (CharType)0x00000074,
		(CharType)0x0000006c, (CharType)0x00000079, (CharType)0x00000020, (CharType)0x0000006f, (CharType)0x00000063,
		(CharType)0x00000063, (CharType)0x00000075, (CharType)0x00000072, (CharType)0x00000020, (CharType)0x00000074,
		(CharType)0x00000068, (CharType)0x00000061, (CharType)0x00000074, (CharType)0x00000020, (CharType)0x00000070,
		(CharType)0x0000006c, (CharType)0x00000065, (CharType)0x00000061, (CharType)0x00000073, (CharType)0x00000075,
		(CharType)0x00000072, (CharType)0x00000065, (CharType)0x00000073, (CharType)0x00000020, (CharType)0x00000068,
		(CharType)0x00000061, (CharType)0x00000076, (CharType)0x00000065, (CharType)0x00000020, (CharType)0x00000074,
		(CharType)0x0000006f, (CharType)0x00000020, (CharType)0x00000062, (CharType)0x00000065, (CharType)0x00000020,
		(CharType)0x00000072, (CharType)0x00000065, (CharType)0x00000070, (CharType)0x00000075, (CharType)0x00000064,
		(CharType)0x00000069, (CharType)0x00000061, (CharType)0x00000074, (CharType)0x00000065, (CharType)0x00000064,
		(CharType)0x00000020, (CharType)0x00000061, (CharType)0x0000006e, (CharType)0x00000064, (CharType)0x00000020,
		(CharType)0x00000061, (CharType)0x0000006e, (CharType)0x0000006e, (CharType)0x0000006f, (CharType)0x00000079,
		(CharType)0x00000061, (CharType)0x0000006e, (CharType)0x00000063, (CharType)0x00000065, (CharType)0x00000073,
		(CharType)0x00000020, (CharType)0x00000061, (CharType)0x00000063, (CharType)0x00000063, (CharType)0x00000065,
		(CharType)0x00000070, (CharType)0x00000074, (CharType)0x00000065, (CharType)0x00000064, (CharType)0x0000002e,
		(CharType)0x00000020, (CharType)0x00000054, (CharType)0x00000068, (CharType)0x00000065, (CharType)0x00000020,
		(CharType)0x00000077, (CharType)0x00000069, (CharType)0x00000073, (CharType)0x00000065, (CharType)0x00000020,
		(CharType)0x0000006d, (CharType)0x00000061, (CharType)0x0000006e, (CharType)0x00000020, (CharType)0x00000074,
		(CharType)0x00000068, (CharType)0x00000065, (CharType)0x00000072, (CharType)0x00000065, (CharType)0x00000066,
		(CharType)0x0000006f, (CharType)0x00000072, (CharType)0x00000065, (CharType)0x00000020, (CharType)0x00000061,
		(CharType)0x0000006c, (CharType)0x00000077, (CharType)0x00000061, (CharType)0x00000079, (CharType)0x00000073,
		(CharType)0x00000020, (CharType)0x00000068, (CharType)0x0000006f, (CharType)0x0000006c, (CharType)0x00000064,
		(CharType)0x00000073, (CharType)0x00000020, (CharType)0x00000069, (CharType)0x0000006e, (CharType)0x00000020,
		(CharType)0x00000074, (CharType)0x00000068, (CharType)0x00000065, (CharType)0x00000073, (CharType)0x00000065,
		(CharType)0x00000020, (CharType)0x0000006d, (CharType)0x00000061, (CharType)0x00000074, (CharType)0x00000074,
		(CharType)0x00000065, (CharType)0x00000072, (CharType)0x00000073, (CharType)0x00000020, (CharType)0x00000074,
		(CharType)0x0000006f, (CharType)0x00000020, (CharType)0x00000074, (CharType)0x00000068, (CharType)0x00000069,
		(CharType)0x00000073, (CharType)0x00000020, (CharType)0x00000070, (CharType)0x00000072, (CharType)0x00000069,
		(CharType)0x0000006e, (CharType)0x00000063, (CharType)0x00000069, (CharType)0x00000070, (CharType)0x0000006c,
		(CharType)0x00000065, (CharType)0x00000020, (CharType)0x0000006f, (CharType)0x00000066, (CharType)0x00000020,
		(CharType)0x00000073, (CharType)0x00000065, (CharType)0x0000006c, (CharType)0x00000065, (CharType)0x00000063,
		(CharType)0x00000074, (CharType)0x00000069, (CharType)0x0000006f, (CharType)0x0000006e, (CharType)0x0000003a,
		(CharType)0x00000020, (CharType)0x00000068, (CharType)0x00000065, (CharType)0x00000020, (CharType)0x00000072,
		(CharType)0x00000065, (CharType)0x0000006a, (CharType)0x00000065, (CharType)0x00000063, (CharType)0x00000074,
		(CharType)0x00000073, (CharType)0x00000020, (CharType)0x00000070, (CharType)0x0000006c, (CharType)0x00000065,
		(CharType)0x00000061, (CharType)0x00000073, (CharType)0x00000075, (CharType)0x00000072, (CharType)0x00000065,
		(CharType)0x00000073, (CharType)0x00000020, (CharType)0x00000074, (CharType)0x0000006f, (CharType)0x00000020,
		(CharType)0x00000073, (CharType)0x00000065, (CharType)0x00000063, (CharType)0x00000075, (CharType)0x00000072,
		(CharType)0x00000065, (CharType)0x00000020, (CharType)0x0000006f, (CharType)0x00000074, (CharType)0x00000068,
		(CharType)0x00000065, (CharType)0x00000072, (CharType)0x00000020, (CharType)0x00000067, (CharType)0x00000072,
		(CharType)0x00000065, (CharType)0x00000061, (CharType)0x00000074, (CharType)0x00000065, (CharType)0x00000072,
		(CharType)0x00000020, (CharType)0x00000070, (CharType)0x0000006c, (CharType)0x00000065, (CharType)0x00000061,
		(CharType)0x00000073, (CharType)0x00000075, (CharType)0x00000072, (CharType)0x00000065, (CharType)0x00000073,
		(CharType)0x0000002c, (CharType)0x00000020, (CharType)0x0000006f, (CharType)0x00000072, (CharType)0x00000020,
		(CharType)0x00000065, (CharType)0x0000006c, (CharType)0x00000073, (CharType)0x00000065, (CharType)0x00000020,
		(CharType)0x00000068, (CharType)0x00000065, (CharType)0x00000020, (CharType)0x00000065, (CharType)0x0000006e,
		(CharType)0x00000064, (CharType)0x00000075, (CharType)0x00000072, (CharType)0x00000065, (CharType)0x00000073,
		(CharType)0x00000020, (CharType)0x00000070, (CharType)0x00000061, (CharType)0x00000069, (CharType)0x0000006e,
		(CharType)0x00000073, (CharType)0x00000020, (CharType)0x00000074, (CharType)0x0000006f, (CharType)0x00000020,
		(CharType)0x00000061, (CharType)0x00000076, (CharType)0x0000006f, (CharType)0x00000069, (CharType)0x00000064,
		(CharType)0x00000020, (CharType)0x00000077, (CharType)0x0000006f, (CharType)0x00000072, (CharType)0x00000073,
		(CharType)0x00000065, (CharType)0x00000020, (CharType)0x00000070, (CharType)0x00000061, (CharType)0x00000069,
		(CharType)0x0000006e, (CharType)0x00000073, (CharType)0x0000002e, (CharType)0x00000020, (CharType)0x0000c624,
		(CharType)0x0000b298, (CharType)0x0000c774, (CharType)0x00000020, (CharType)0x0000c624, (CharType)0x0000b298,
		(CharType)0x0000c774, (CharType)0x0000c18c, (CharType)0x0000c11c, (CharType)0x00000020, (CharType)0x0000b9e4,
		(CharType)0x0000c77c, (CharType)0x0000c774, (CharType)0x00000020, (CharType)0x0000c624, (CharType)0x0000b298,
		(CharType)0x0000c774, (CharType)0x0000c18c, (CharType)0x0000c11c, (CharType)0x00000020, (CharType)0x0000c800,
		(CharType)0x0000bb3c, (CharType)0x0000c9c0, (CharType)0x0000b3c4, (CharType)0x00000020, (CharType)0x0000c0c8,
		(CharType)0x0000c9c0, (CharType)0x0000b3c4, (CharType)0x00000020, (CharType)0x0000b9d0, (CharType)0x0000c73c,
		(CharType)0x0000c2dc, (CharType)0x0000ace0, (CharType)0x00000020, (CharType)0x0000c0c8, (CharType)0x0000b824,
		(CharType)0x0000ba74, (CharType)0x00000020, (CharType)0x0000b298, (CharType)0x00000020, (CharType)0x0000c5b8,
		(CharType)0x0000c81c, (CharType)0x0000b098, (CharType)0x00000020, (CharType)0x0000c624, (CharType)0x0000b298,
		(CharType)0x0000c774, (CharType)0x0000c18c, (CharType)0x0000c11c, (CharType)0x0000002e, (CharType)0x00000020,
		(CharType)0x00005230, (CharType)0x00005e95, (CharType)0x0000662f, (CharType)0x00006211, (CharType)0x0000773c,
		(CharType)0x0000795e, (CharType)0x0000592a, (CharType)0x0000597d, (CharType)0x0000ff0c, (CharType)0x00008fd8,
		(CharType)0x0000662f, (CharType)0x00006211, (CharType)0x0000540c, (CharType)0x00004e8b, (CharType)0x0000773c,
		(CharType)0x0000592a, (CharType)0x000082b1, (CharType)0x00003002, (CharType)0x00006ca1, (CharType)0x00006709,
		(CharType)0x00004efb, (CharType)0x00004f55, (CharType)0x00004fdd, (CharType)0x00008bc1, (CharType)0x00007528,
		(CharType)0x00004e86, (CharType)0x00000020, (CharType)0x00000070, (CharType)0x00000069, (CharType)0x00000070,
		(CharType)0x00000065, (CharType)0x0000006e, (CharType)0x00000076, (CharType)0x00000020, (CharType)0x00007684,
		(CharType)0x00009879, (CharType)0x000076ee, (CharType)0x000080fd, (CharType)0x00005728, (CharType)0x0000968f,
		(CharType)0x00004fbf, (CharType)0x00004e00, (CharType)0x00004e2a, (CharType)0x00000020, (CharType)0x00000043,
		(CharType)0x0000006f, (CharType)0x0000006e, (CharType)0x00000064, (CharType)0x00000061, (CharType)0x00000020,
		(CharType)0x00000065, (CharType)0x0000006e, (CharType)0x00000076, (CharType)0x00000069, (CharType)0x00000072,
		(CharType)0x0000006f, (CharType)0x0000006e, (CharType)0x0000006d, (CharType)0x00000065, (CharType)0x0000006e,
		(CharType)0x00000074, (CharType)0x00000020, (CharType)0x000091cc, (CharType)0x00008dd1, (CharType)0x00008d77,
		(CharType)0x00006765, (CharType)0x00005355, (CharType)0x00005143, (CharType)0x00006d4b, (CharType)0x00008bd5,
		(CharType)0x0000ff01, (CharType)0x000030ed, (CharType)0x000030a4, (CharType)0x000030bf, (CharType)0x000030fc,
		(CharType)0x00008a18, (CharType)0x00008005, (CharType)0x00003001, (CharType)0x00005f85, (CharType)0x00006a5f,
		(CharType)0x0000671f, (CharType)0x00009593, (CharType)0x0000306e, (CharType)0x000030d1, (CharType)0x000030fc,
		(CharType)0x000030c6, (CharType)0x000030a3, (CharType)0x000030fc, (CharType)0x000053c2, (CharType)0x000052a0,
		(CharType)0x00003067, (CharType)0x000030b3, (CharType)0x000030ed, (CharType)0x000030ca, (CharType)0x00005909,
		(CharType)0x00007570, (CharType)0x0000682a, (CharType)0x0000304c, (CharType)0x0000611f, (CharType)0x000067d3,
		(CharType)0x000062e1, (CharType)0x00005927, (CharType)0x00000020, (CharType)0x0000007c, (CharType)0x00000020,
		(CharType)0x000030b9, (CharType)0x000030af, (CharType)0x000030fc, (CharType)0x000030d7, (CharType)0x0000901f,
		(CharType)0x00005831, (CharType)0x00000020, (CharType)0x00000023, (CharType)0x000030ed, (CharType)0x000030a4,
		(CharType)0x000030bf, (CharType)0x000030fc, (CharType)0x00000020, (CharType)0x00000023, (CharType)0x000030b9,
		(CharType)0x000030af, (CharType)0x000030fc, (CharType)0x000030d7, (CharType)0x0000901f, (CharType)0x00005831,
		(CharType)0x00000020, (CharType)0x00000023, (CharType)0x00009031, (CharType)0x0000520a, (CharType)0x00006587,
		(CharType)0x00006625, (CharType)0x00000020, (CharType)0x0000005c, (CharType)0x00000022, (CharType)0x00000046,
		(CharType)0x00000061, (CharType)0x00000065, (CharType)0x0000006e, (CharType)0x0000005c, (CharType)0x00000022,
		(CharType)0x00000020, (CharType)0x0000006f, (CharType)0x00000067, (CharType)0x00000020, (CharType)0x0000005c,
		(CharType)0x00000022, (CharType)0x00000068, (CharType)0x00000065, (CharType)0x00000072, (CharType)0x00000072,
		(CharType)0x00000065, (CharType)0x00000067, (CharType)0x00000075, (CharType)0x00000064, (CharType)0x0000005c,
		(CharType)0x00000022, (CharType)0x00000020, (CharType)0x00000073, (CharType)0x00000061, (CharType)0x00000020,
		(CharType)0x00000064, (CharType)0x00000065, (CharType)0x00000020, (CharType)0x00000069, (CharType)0x00000020,
		(CharType)0x00000067, (CharType)0x00000061, (CharType)0x0000006d, (CharType)0x0000006c, (CharType)0x00000065,
		(CharType)0x00000020, (CharType)0x00000064, (CharType)0x00000061, (CharType)0x00000067, (CharType)0x00000065,
		(CharType)0x00000072, (CharType)0x0000002e, (CharType)0x00000020, (CharType)0x00000049, (CharType)0x00000074,
		(CharType)0x00000027, (CharType)0x00000073, (CharType)0x00000020, (CharType)0x0000006e, (CharType)0x00000065,
		(CharType)0x00000076, (CharType)0x00000065, (CharType)0x00000072, (CharType)0x00000020, (CharType)0x00000074,
		(CharType)0x0000006f, (CharType)0x0000006f, (CharType)0x00000020, (CharType)0x00000065, (CharType)0x00000061,
		(CharType)0x00000072, (CharType)0x0000006c, (CharType)0x00000079, (CharType)0x00000020, (CharType)0x00000074,
		(CharType)0x0000006f, (CharType)0x00000020, (CharType)0x0000006c, (CharType)0x00000065, (CharType)0x00000061,
		(CharType)0x00000072, (CharType)0x0000006e, (CharType)0x00000020, (CharType)0x00000061, (CharType)0x00000020,
		(CharType)0x0000006c, (CharType)0x00000061, (CharType)0x0000006e, (CharType)0x00000067, (CharType)0x00000075,
		(CharType)0x00000061, (CharType)0x00000067, (CharType)0x00000065, (CharType)0x0000002e, (CharType)0x0000002e,
		(CharType)0x0000002e, (CharType)0x00000020, (CharType)0x00000041, (CharType)0x00000075, (CharType)0x00000072,
		(CharType)0x000000e9, (CharType)0x0000006c, (CharType)0x00000069, (CharType)0x00000065, (CharType)0x0000002e,
		(CharType)0x00000000 };
	template <typename CharType>
	inline constexpr const CharType x_u32_unicode_sequence_truth_reverse_endian_storage[] = { (CharType)0x666b0000,
		(CharType)0xa64f0000, (CharType)0xaa5b0000, (CharType)0xe07a0000, (CharType)0x2c7b0000, (CharType)0x39000000,
		(CharType)0x61670000, (CharType)0x14200000, (CharType)0x14200000, (CharType)0x945e0000, (CharType)0x555c0000,
		(CharType)0xc57f0000, (CharType)0x164e0000, (CharType)0x4c750000, (CharType)0x02300000, (CharType)0x0d4e0000,
		(CharType)0x06520000, (CharType)0xba4e0000, (CharType)0xcd790000, (CharType)0x01300000, (CharType)0xfd560000,
		(CharType)0x4d7c0000, (CharType)0x71510000, (CharType)0x0c540000, (CharType)0x18620000, (CharType)0x97650000,
		(CharType)0x02300000, (CharType)0xc4260000, (CharType)0xc4260000, (CharType)0x28270000, (CharType)0x28270000,
		(CharType)0x05270000, (CharType)0x80f90100, (CharType)0x02f60100, (CharType)0x2df60100, (CharType)0x2cf60100,
		(CharType)0x2cf60100, (CharType)0x14f60100, (CharType)0x14f60100, (CharType)0x14f60100, (CharType)0xa8f30100,
		(CharType)0xa8f30100, (CharType)0x36f40100, (CharType)0x37f90100, (CharType)0x0d200000, (CharType)0x40260000,
		(CharType)0x0ffe0000, (CharType)0xe0f60100, (CharType)0x4bf40100, (CharType)0xa5f40100, (CharType)0xa3f40100,
		(CharType)0xa5f40100, (CharType)0xa3f40100, (CharType)0x77f30100, (CharType)0x77f30100, (CharType)0x77f30100,
		(CharType)0x77f30100, (CharType)0x7a000000, (CharType)0x65260000, (CharType)0x66450000, (CharType)0xfdff0000,
		(CharType)0xfdff0000, (CharType)0xc1790000, (CharType)0x6f300000, (CharType)0xac300000, (CharType)0xe9300000,
		(CharType)0xb9300000, (CharType)0x92300000, (CharType)0xdf980000, (CharType)0x79300000, (CharType)0x89300000,
		(CharType)0x8c300000, (CharType)0x7e300000, (CharType)0x59300000, (CharType)0x02300000, (CharType)0x5d300000,
		(CharType)0x8c300000, (CharType)0x6f300000, (CharType)0xc1790000, (CharType)0x92300000, (CharType)0xb7500000,
		(CharType)0x64300000, (CharType)0x51300000, (CharType)0x7e300000, (CharType)0x5b300000, (CharType)0x93300000,
		(CharType)0x02300000, (CharType)0xaf0b0000, (CharType)0xbe0b0000, (CharType)0xae0b0000, (CharType)0xb10b0000,
		(CharType)0xbf0b0000, (CharType)0xa80b0000, (CharType)0xcd0b0000, (CharType)0xa40b0000, (CharType)0x20000000,
		(CharType)0xae0b0000, (CharType)0xca0b0000, (CharType)0xb40b0000, (CharType)0xbf0b0000, (CharType)0x950b0000,
		(CharType)0xb30b0000, (CharType)0xbf0b0000, (CharType)0xb20b0000, (CharType)0xc70b0000, (CharType)0x20000000,
		(CharType)0xa40b0000, (CharType)0xae0b0000, (CharType)0xbf0b0000, (CharType)0xb40b0000, (CharType)0xcd0b0000,
		(CharType)0xae0b0000, (CharType)0xca0b0000, (CharType)0xb40b0000, (CharType)0xbf0b0000, (CharType)0x20000000,
		(CharType)0xaa0b0000, (CharType)0xcb0b0000, (CharType)0xb20b0000, (CharType)0xcd0b0000, (CharType)0x20000000,
		(CharType)0x870b0000, (CharType)0xa90b0000, (CharType)0xbf0b0000, (CharType)0xa40b0000, (CharType)0xbe0b0000,
		(CharType)0xb50b0000, (CharType)0xa40b0000, (CharType)0xc10b0000, (CharType)0x20000000, (CharType)0x8e0b0000,
		(CharType)0x990b0000, (CharType)0xcd0b0000, (CharType)0x950b0000, (CharType)0xc10b0000, (CharType)0xae0b0000,
		(CharType)0xcd0b0000, (CharType)0x20000000, (CharType)0x950b0000, (CharType)0xbe0b0000, (CharType)0xa30b0000,
		(CharType)0xcb0b0000, (CharType)0xae0b0000, (CharType)0xcd0b0000, (CharType)0x2c000000, (CharType)0x1d040000,
		(CharType)0x30040000, (CharType)0x20000000, (CharType)0x31040000, (CharType)0x35040000, (CharType)0x40040000,
		(CharType)0x35040000, (CharType)0x33040000, (CharType)0x43040000, (CharType)0x20000000, (CharType)0x3f040000,
		(CharType)0x43040000, (CharType)0x41040000, (CharType)0x42040000, (CharType)0x4b040000, (CharType)0x3d040000,
		(CharType)0x3d040000, (CharType)0x4b040000, (CharType)0x45040000, (CharType)0x20000000, (CharType)0x32040000,
		(CharType)0x3e040000, (CharType)0x3b040000, (CharType)0x3d040000, (CharType)0x20000000, (CharType)0xac200000,
		(CharType)0x20000000, (CharType)0x23060000, (CharType)0x46060000, (CharType)0x27060000, (CharType)0x20000000,
		(CharType)0x42060000, (CharType)0x27060000, (CharType)0x2f060000, (CharType)0x31060000, (CharType)0x20000000,
		(CharType)0x39060000, (CharType)0x44060000, (CharType)0x49060000, (CharType)0x20000000, (CharType)0x23060000,
		(CharType)0x43060000, (CharType)0x44060000, (CharType)0x20000000, (CharType)0x27060000, (CharType)0x44060000,
		(CharType)0x32060000, (CharType)0x2c060000, (CharType)0x27060000, (CharType)0x2c060000, (CharType)0x20000000,
		(CharType)0x48060000, (CharType)0x20000000, (CharType)0x47060000, (CharType)0x30060000, (CharType)0x27060000,
		(CharType)0x20000000, (CharType)0x44060000, (CharType)0x27060000, (CharType)0x20000000, (CharType)0x4a060000,
		(CharType)0x24060000, (CharType)0x44060000, (CharType)0x45060000, (CharType)0x46060000, (CharType)0x4a060000,
		(CharType)0x2e000000, (CharType)0x20000000, (CharType)0x4f000000, (CharType)0x6e000000, (CharType)0x20000000,
		(CharType)0x74000000, (CharType)0x68000000, (CharType)0x65000000, (CharType)0x20000000, (CharType)0x6f000000,
		(CharType)0x74000000, (CharType)0x68000000, (CharType)0x65000000, (CharType)0x72000000, (CharType)0x20000000,
		(CharType)0x68000000, (CharType)0x61000000, (CharType)0x6e000000, (CharType)0x64000000, (CharType)0x2c000000,
		(CharType)0x20000000, (CharType)0x77000000, (CharType)0x65000000, (CharType)0x20000000, (CharType)0x64000000,
		(CharType)0x65000000, (CharType)0x6e000000, (CharType)0x6f000000, (CharType)0x75000000, (CharType)0x6e000000,
		(CharType)0x63000000, (CharType)0x65000000, (CharType)0x20000000, (CharType)0x77000000, (CharType)0x69000000,
		(CharType)0x74000000, (CharType)0x68000000, (CharType)0x20000000, (CharType)0x72000000, (CharType)0x69000000,
		(CharType)0x67000000, (CharType)0x68000000, (CharType)0x74000000, (CharType)0x65000000, (CharType)0x6f000000,
		(CharType)0x75000000, (CharType)0x73000000, (CharType)0x20000000, (CharType)0x69000000, (CharType)0x6e000000,
		(CharType)0x64000000, (CharType)0x69000000, (CharType)0x67000000, (CharType)0x6e000000, (CharType)0x61000000,
		(CharType)0x74000000, (CharType)0x69000000, (CharType)0x6f000000, (CharType)0x6e000000, (CharType)0x20000000,
		(CharType)0x61000000, (CharType)0x6e000000, (CharType)0x64000000, (CharType)0x20000000, (CharType)0x64000000,
		(CharType)0x69000000, (CharType)0x73000000, (CharType)0x6c000000, (CharType)0x69000000, (CharType)0x6b000000,
		(CharType)0x65000000, (CharType)0x20000000, (CharType)0x6d000000, (CharType)0x65000000, (CharType)0x6e000000,
		(CharType)0x20000000, (CharType)0x77000000, (CharType)0x68000000, (CharType)0x6f000000, (CharType)0x20000000,
		(CharType)0x61000000, (CharType)0x72000000, (CharType)0x65000000, (CharType)0x20000000, (CharType)0x73000000,
		(CharType)0x6f000000, (CharType)0x20000000, (CharType)0x62000000, (CharType)0x65000000, (CharType)0x67000000,
		(CharType)0x75000000, (CharType)0x69000000, (CharType)0x6c000000, (CharType)0x65000000, (CharType)0x64000000,
		(CharType)0x20000000, (CharType)0x61000000, (CharType)0x6e000000, (CharType)0x64000000, (CharType)0x20000000,
		(CharType)0x64000000, (CharType)0x65000000, (CharType)0x6d000000, (CharType)0x6f000000, (CharType)0x72000000,
		(CharType)0x61000000, (CharType)0x6c000000, (CharType)0x69000000, (CharType)0x7a000000, (CharType)0x65000000,
		(CharType)0x64000000, (CharType)0x20000000, (CharType)0x62000000, (CharType)0x79000000, (CharType)0x20000000,
		(CharType)0x74000000, (CharType)0x68000000, (CharType)0x65000000, (CharType)0x20000000, (CharType)0x63000000,
		(CharType)0x68000000, (CharType)0x61000000, (CharType)0x72000000, (CharType)0x6d000000, (CharType)0x73000000,
		(CharType)0x20000000, (CharType)0x6f000000, (CharType)0x66000000, (CharType)0x20000000, (CharType)0x70000000,
		(CharType)0x6c000000, (CharType)0x65000000, (CharType)0x61000000, (CharType)0x73000000, (CharType)0x75000000,
		(CharType)0x72000000, (CharType)0x65000000, (CharType)0x20000000, (CharType)0x6f000000, (CharType)0x66000000,
		(CharType)0x20000000, (CharType)0x74000000, (CharType)0x68000000, (CharType)0x65000000, (CharType)0x20000000,
		(CharType)0x6d000000, (CharType)0x6f000000, (CharType)0x6d000000, (CharType)0x65000000, (CharType)0x6e000000,
		(CharType)0x74000000, (CharType)0x2c000000, (CharType)0x20000000, (CharType)0x73000000, (CharType)0x6f000000,
		(CharType)0x20000000, (CharType)0x62000000, (CharType)0x6c000000, (CharType)0x69000000, (CharType)0x6e000000,
		(CharType)0x64000000, (CharType)0x65000000, (CharType)0x64000000, (CharType)0x20000000, (CharType)0x62000000,
		(CharType)0x79000000, (CharType)0x20000000, (CharType)0x64000000, (CharType)0x65000000, (CharType)0x73000000,
		(CharType)0x69000000, (CharType)0x72000000, (CharType)0x65000000, (CharType)0x2c000000, (CharType)0x20000000,
		(CharType)0x74000000, (CharType)0x68000000, (CharType)0x61000000, (CharType)0x74000000, (CharType)0x20000000,
		(CharType)0x74000000, (CharType)0x68000000, (CharType)0x65000000, (CharType)0x79000000, (CharType)0x20000000,
		(CharType)0x63000000, (CharType)0x61000000, (CharType)0x6e000000, (CharType)0x6e000000, (CharType)0x6f000000,
		(CharType)0x74000000, (CharType)0x20000000, (CharType)0x66000000, (CharType)0x6f000000, (CharType)0x72000000,
		(CharType)0x65000000, (CharType)0x73000000, (CharType)0x65000000, (CharType)0x65000000, (CharType)0x20000000,
		(CharType)0x74000000, (CharType)0x68000000, (CharType)0x65000000, (CharType)0x20000000, (CharType)0x70000000,
		(CharType)0x61000000, (CharType)0x69000000, (CharType)0x6e000000, (CharType)0x20000000, (CharType)0x61000000,
		(CharType)0x6e000000, (CharType)0x64000000, (CharType)0x20000000, (CharType)0x74000000, (CharType)0x72000000,
		(CharType)0x6f000000, (CharType)0x75000000, (CharType)0x62000000, (CharType)0x6c000000, (CharType)0x65000000,
		(CharType)0x20000000, (CharType)0x74000000, (CharType)0x68000000, (CharType)0x61000000, (CharType)0x74000000,
		(CharType)0x20000000, (CharType)0x61000000, (CharType)0x72000000, (CharType)0x65000000, (CharType)0x20000000,
		(CharType)0x62000000, (CharType)0x6f000000, (CharType)0x75000000, (CharType)0x6e000000, (CharType)0x64000000,
		(CharType)0x20000000, (CharType)0x74000000, (CharType)0x6f000000, (CharType)0x20000000, (CharType)0x65000000,
		(CharType)0x6e000000, (CharType)0x73000000, (CharType)0x75000000, (CharType)0x65000000, (CharType)0x3b000000,
		(CharType)0x20000000, (CharType)0x61000000, (CharType)0x6e000000, (CharType)0x64000000, (CharType)0x20000000,
		(CharType)0x65000000, (CharType)0x71000000, (CharType)0x75000000, (CharType)0x61000000, (CharType)0x6c000000,
		(CharType)0x20000000, (CharType)0x62000000, (CharType)0x6c000000, (CharType)0x61000000, (CharType)0x6d000000,
		(CharType)0x65000000, (CharType)0x20000000, (CharType)0x62000000, (CharType)0x65000000, (CharType)0x6c000000,
		(CharType)0x6f000000, (CharType)0x6e000000, (CharType)0x67000000, (CharType)0x73000000, (CharType)0x20000000,
		(CharType)0x74000000, (CharType)0x6f000000, (CharType)0x20000000, (CharType)0x74000000, (CharType)0x68000000,
		(CharType)0x6f000000, (CharType)0x73000000, (CharType)0x65000000, (CharType)0x20000000, (CharType)0x77000000,
		(CharType)0x68000000, (CharType)0x6f000000, (CharType)0x20000000, (CharType)0x66000000, (CharType)0x61000000,
		(CharType)0x69000000, (CharType)0x6c000000, (CharType)0x20000000, (CharType)0x69000000, (CharType)0x6e000000,
		(CharType)0x20000000, (CharType)0x74000000, (CharType)0x68000000, (CharType)0x65000000, (CharType)0x69000000,
		(CharType)0x72000000, (CharType)0x20000000, (CharType)0x64000000, (CharType)0x75000000, (CharType)0x74000000,
		(CharType)0x79000000, (CharType)0x20000000, (CharType)0x74000000, (CharType)0x68000000, (CharType)0x72000000,
		(CharType)0x6f000000, (CharType)0x75000000, (CharType)0x67000000, (CharType)0x68000000, (CharType)0x20000000,
		(CharType)0x77000000, (CharType)0x65000000, (CharType)0x61000000, (CharType)0x6b000000, (CharType)0x6e000000,
		(CharType)0x65000000, (CharType)0x73000000, (CharType)0x73000000, (CharType)0x20000000, (CharType)0x6f000000,
		(CharType)0x66000000, (CharType)0x20000000, (CharType)0x77000000, (CharType)0x69000000, (CharType)0x6c000000,
		(CharType)0x6c000000, (CharType)0x2c000000, (CharType)0x20000000, (CharType)0x77000000, (CharType)0x68000000,
		(CharType)0x69000000, (CharType)0x63000000, (CharType)0x68000000, (CharType)0x20000000, (CharType)0x69000000,
		(CharType)0x73000000, (CharType)0x20000000, (CharType)0x74000000, (CharType)0x68000000, (CharType)0x65000000,
		(CharType)0x20000000, (CharType)0x73000000, (CharType)0x61000000, (CharType)0x6d000000, (CharType)0x65000000,
		(CharType)0x20000000, (CharType)0x61000000, (CharType)0x73000000, (CharType)0x20000000, (CharType)0x73000000,
		(CharType)0x61000000, (CharType)0x79000000, (CharType)0x69000000, (CharType)0x6e000000, (CharType)0x67000000,
		(CharType)0x20000000, (CharType)0x74000000, (CharType)0x68000000, (CharType)0x72000000, (CharType)0x6f000000,
		(CharType)0x75000000, (CharType)0x67000000, (CharType)0x68000000, (CharType)0x20000000, (CharType)0x73000000,
		(CharType)0x68000000, (CharType)0x72000000, (CharType)0x69000000, (CharType)0x6e000000, (CharType)0x6b000000,
		(CharType)0x69000000, (CharType)0x6e000000, (CharType)0x67000000, (CharType)0x20000000, (CharType)0x66000000,
		(CharType)0x72000000, (CharType)0x6f000000, (CharType)0x6d000000, (CharType)0x20000000, (CharType)0x74000000,
		(CharType)0x6f000000, (CharType)0x69000000, (CharType)0x6c000000, (CharType)0x20000000, (CharType)0x61000000,
		(CharType)0x6e000000, (CharType)0x64000000, (CharType)0x20000000, (CharType)0x70000000, (CharType)0x61000000,
		(CharType)0x69000000, (CharType)0x6e000000, (CharType)0x2e000000, (CharType)0x20000000, (CharType)0x54000000,
		(CharType)0x68000000, (CharType)0x65000000, (CharType)0x73000000, (CharType)0x65000000, (CharType)0x20000000,
		(CharType)0x63000000, (CharType)0x61000000, (CharType)0x73000000, (CharType)0x65000000, (CharType)0x73000000,
		(CharType)0x20000000, (CharType)0x61000000, (CharType)0x72000000, (CharType)0x65000000, (CharType)0x20000000,
		(CharType)0x70000000, (CharType)0x65000000, (CharType)0x72000000, (CharType)0x66000000, (CharType)0x65000000,
		(CharType)0x63000000, (CharType)0x74000000, (CharType)0x6c000000, (CharType)0x79000000, (CharType)0x20000000,
		(CharType)0x73000000, (CharType)0x69000000, (CharType)0x6d000000, (CharType)0x70000000, (CharType)0x6c000000,
		(CharType)0x65000000, (CharType)0x20000000, (CharType)0x61000000, (CharType)0x6e000000, (CharType)0x64000000,
		(CharType)0x20000000, (CharType)0x65000000, (CharType)0x61000000, (CharType)0x73000000, (CharType)0x79000000,
		(CharType)0x20000000, (CharType)0x74000000, (CharType)0x6f000000, (CharType)0x20000000, (CharType)0x64000000,
		(CharType)0x69000000, (CharType)0x73000000, (CharType)0x74000000, (CharType)0x69000000, (CharType)0x6e000000,
		(CharType)0x67000000, (CharType)0x75000000, (CharType)0x69000000, (CharType)0x73000000, (CharType)0x68000000,
		(CharType)0x2e000000, (CharType)0x20000000, (CharType)0x49000000, (CharType)0x6e000000, (CharType)0x20000000,
		(CharType)0x61000000, (CharType)0x20000000, (CharType)0x66000000, (CharType)0x72000000, (CharType)0x65000000,
		(CharType)0x65000000, (CharType)0x20000000, (CharType)0x68000000, (CharType)0x6f000000, (CharType)0x75000000,
		(CharType)0x72000000, (CharType)0x2c000000, (CharType)0x20000000, (CharType)0x77000000, (CharType)0x68000000,
		(CharType)0x65000000, (CharType)0x6e000000, (CharType)0x20000000, (CharType)0x6f000000, (CharType)0x75000000,
		(CharType)0x72000000, (CharType)0x20000000, (CharType)0x70000000, (CharType)0x6f000000, (CharType)0x77000000,
		(CharType)0x65000000, (CharType)0x72000000, (CharType)0x20000000, (CharType)0x6f000000, (CharType)0x66000000,
		(CharType)0x20000000, (CharType)0x63000000, (CharType)0x68000000, (CharType)0x6f000000, (CharType)0x69000000,
		(CharType)0x63000000, (CharType)0x65000000, (CharType)0x20000000, (CharType)0x69000000, (CharType)0x73000000,
		(CharType)0x20000000, (CharType)0x75000000, (CharType)0x6e000000, (CharType)0x74000000, (CharType)0x72000000,
		(CharType)0x61000000, (CharType)0x6d000000, (CharType)0x6d000000, (CharType)0x65000000, (CharType)0x6c000000,
		(CharType)0x6c000000, (CharType)0x65000000, (CharType)0x64000000, (CharType)0x20000000, (CharType)0x61000000,
		(CharType)0x6e000000, (CharType)0x64000000, (CharType)0x20000000, (CharType)0x77000000, (CharType)0x68000000,
		(CharType)0x65000000, (CharType)0x6e000000, (CharType)0x20000000, (CharType)0x6e000000, (CharType)0x6f000000,
		(CharType)0x74000000, (CharType)0x68000000, (CharType)0x69000000, (CharType)0x6e000000, (CharType)0x67000000,
		(CharType)0x20000000, (CharType)0x70000000, (CharType)0x72000000, (CharType)0x65000000, (CharType)0x76000000,
		(CharType)0x65000000, (CharType)0x6e000000, (CharType)0x74000000, (CharType)0x73000000, (CharType)0x20000000,
		(CharType)0x6f000000, (CharType)0x75000000, (CharType)0x72000000, (CharType)0x20000000, (CharType)0x62000000,
		(CharType)0x65000000, (CharType)0x69000000, (CharType)0x6e000000, (CharType)0x67000000, (CharType)0x20000000,
		(CharType)0x61000000, (CharType)0x62000000, (CharType)0x6c000000, (CharType)0x65000000, (CharType)0x20000000,
		(CharType)0x74000000, (CharType)0x6f000000, (CharType)0x20000000, (CharType)0x64000000, (CharType)0x6f000000,
		(CharType)0x20000000, (CharType)0x77000000, (CharType)0x68000000, (CharType)0x61000000, (CharType)0x74000000,
		(CharType)0x20000000, (CharType)0x77000000, (CharType)0x65000000, (CharType)0x20000000, (CharType)0x6c000000,
		(CharType)0x69000000, (CharType)0x6b000000, (CharType)0x65000000, (CharType)0x20000000, (CharType)0x62000000,
		(CharType)0x65000000, (CharType)0x73000000, (CharType)0x74000000, (CharType)0x2c000000, (CharType)0x20000000,
		(CharType)0x65000000, (CharType)0x76000000, (CharType)0x65000000, (CharType)0x72000000, (CharType)0x79000000,
		(CharType)0x20000000, (CharType)0x70000000, (CharType)0x6c000000, (CharType)0x65000000, (CharType)0x61000000,
		(CharType)0x73000000, (CharType)0x75000000, (CharType)0x72000000, (CharType)0x65000000, (CharType)0x20000000,
		(CharType)0x69000000, (CharType)0x73000000, (CharType)0x20000000, (CharType)0x74000000, (CharType)0x6f000000,
		(CharType)0x20000000, (CharType)0x62000000, (CharType)0x65000000, (CharType)0x20000000, (CharType)0x77000000,
		(CharType)0x65000000, (CharType)0x6c000000, (CharType)0x63000000, (CharType)0x6f000000, (CharType)0x6d000000,
		(CharType)0x65000000, (CharType)0x64000000, (CharType)0x20000000, (CharType)0x61000000, (CharType)0x6e000000,
		(CharType)0x64000000, (CharType)0x20000000, (CharType)0x65000000, (CharType)0x76000000, (CharType)0x65000000,
		(CharType)0x72000000, (CharType)0x79000000, (CharType)0x20000000, (CharType)0x70000000, (CharType)0x61000000,
		(CharType)0x69000000, (CharType)0x6e000000, (CharType)0x20000000, (CharType)0x61000000, (CharType)0x76000000,
		(CharType)0x6f000000, (CharType)0x69000000, (CharType)0x64000000, (CharType)0x65000000, (CharType)0x64000000,
		(CharType)0x2e000000, (CharType)0x20000000, (CharType)0x42000000, (CharType)0x75000000, (CharType)0x74000000,
		(CharType)0x20000000, (CharType)0x69000000, (CharType)0x6e000000, (CharType)0x20000000, (CharType)0x63000000,
		(CharType)0x65000000, (CharType)0x72000000, (CharType)0x74000000, (CharType)0x61000000, (CharType)0x69000000,
		(CharType)0x6e000000, (CharType)0x20000000, (CharType)0x63000000, (CharType)0x69000000, (CharType)0x72000000,
		(CharType)0x63000000, (CharType)0x75000000, (CharType)0x6d000000, (CharType)0x73000000, (CharType)0x74000000,
		(CharType)0x61000000, (CharType)0x6e000000, (CharType)0x63000000, (CharType)0x65000000, (CharType)0x73000000,
		(CharType)0x20000000, (CharType)0x61000000, (CharType)0x6e000000, (CharType)0x64000000, (CharType)0x20000000,
		(CharType)0x6f000000, (CharType)0x77000000, (CharType)0x69000000, (CharType)0x6e000000, (CharType)0x67000000,
		(CharType)0x20000000, (CharType)0x74000000, (CharType)0x6f000000, (CharType)0x20000000, (CharType)0x74000000,
		(CharType)0x68000000, (CharType)0x65000000, (CharType)0x20000000, (CharType)0x63000000, (CharType)0x6c000000,
		(CharType)0x61000000, (CharType)0x69000000, (CharType)0x6d000000, (CharType)0x73000000, (CharType)0x20000000,
		(CharType)0x6f000000, (CharType)0x66000000, (CharType)0x20000000, (CharType)0x64000000, (CharType)0x75000000,
		(CharType)0x74000000, (CharType)0x79000000, (CharType)0x20000000, (CharType)0x6f000000, (CharType)0x72000000,
		(CharType)0x20000000, (CharType)0x74000000, (CharType)0x68000000, (CharType)0x65000000, (CharType)0x20000000,
		(CharType)0x6f000000, (CharType)0x62000000, (CharType)0x6c000000, (CharType)0x69000000, (CharType)0x67000000,
		(CharType)0x61000000, (CharType)0x74000000, (CharType)0x69000000, (CharType)0x6f000000, (CharType)0x6e000000,
		(CharType)0x73000000, (CharType)0x20000000, (CharType)0x6f000000, (CharType)0x66000000, (CharType)0x20000000,
		(CharType)0x62000000, (CharType)0x75000000, (CharType)0x73000000, (CharType)0x69000000, (CharType)0x6e000000,
		(CharType)0x65000000, (CharType)0x73000000, (CharType)0x73000000, (CharType)0x20000000, (CharType)0x69000000,
		(CharType)0x74000000, (CharType)0x20000000, (CharType)0x77000000, (CharType)0x69000000, (CharType)0x6c000000,
		(CharType)0x6c000000, (CharType)0x20000000, (CharType)0x66000000, (CharType)0x72000000, (CharType)0x65000000,
		(CharType)0x71000000, (CharType)0x75000000, (CharType)0x65000000, (CharType)0x6e000000, (CharType)0x74000000,
		(CharType)0x6c000000, (CharType)0x79000000, (CharType)0x20000000, (CharType)0x6f000000, (CharType)0x63000000,
		(CharType)0x63000000, (CharType)0x75000000, (CharType)0x72000000, (CharType)0x20000000, (CharType)0x74000000,
		(CharType)0x68000000, (CharType)0x61000000, (CharType)0x74000000, (CharType)0x20000000, (CharType)0x70000000,
		(CharType)0x6c000000, (CharType)0x65000000, (CharType)0x61000000, (CharType)0x73000000, (CharType)0x75000000,
		(CharType)0x72000000, (CharType)0x65000000, (CharType)0x73000000, (CharType)0x20000000, (CharType)0x68000000,
		(CharType)0x61000000, (CharType)0x76000000, (CharType)0x65000000, (CharType)0x20000000, (CharType)0x74000000,
		(CharType)0x6f000000, (CharType)0x20000000, (CharType)0x62000000, (CharType)0x65000000, (CharType)0x20000000,
		(CharType)0x72000000, (CharType)0x65000000, (CharType)0x70000000, (CharType)0x75000000, (CharType)0x64000000,
		(CharType)0x69000000, (CharType)0x61000000, (CharType)0x74000000, (CharType)0x65000000, (CharType)0x64000000,
		(CharType)0x20000000, (CharType)0x61000000, (CharType)0x6e000000, (CharType)0x64000000, (CharType)0x20000000,
		(CharType)0x61000000, (CharType)0x6e000000, (CharType)0x6e000000, (CharType)0x6f000000, (CharType)0x79000000,
		(CharType)0x61000000, (CharType)0x6e000000, (CharType)0x63000000, (CharType)0x65000000, (CharType)0x73000000,
		(CharType)0x20000000, (CharType)0x61000000, (CharType)0x63000000, (CharType)0x63000000, (CharType)0x65000000,
		(CharType)0x70000000, (CharType)0x74000000, (CharType)0x65000000, (CharType)0x64000000, (CharType)0x2e000000,
		(CharType)0x20000000, (CharType)0x54000000, (CharType)0x68000000, (CharType)0x65000000, (CharType)0x20000000,
		(CharType)0x77000000, (CharType)0x69000000, (CharType)0x73000000, (CharType)0x65000000, (CharType)0x20000000,
		(CharType)0x6d000000, (CharType)0x61000000, (CharType)0x6e000000, (CharType)0x20000000, (CharType)0x74000000,
		(CharType)0x68000000, (CharType)0x65000000, (CharType)0x72000000, (CharType)0x65000000, (CharType)0x66000000,
		(CharType)0x6f000000, (CharType)0x72000000, (CharType)0x65000000, (CharType)0x20000000, (CharType)0x61000000,
		(CharType)0x6c000000, (CharType)0x77000000, (CharType)0x61000000, (CharType)0x79000000, (CharType)0x73000000,
		(CharType)0x20000000, (CharType)0x68000000, (CharType)0x6f000000, (CharType)0x6c000000, (CharType)0x64000000,
		(CharType)0x73000000, (CharType)0x20000000, (CharType)0x69000000, (CharType)0x6e000000, (CharType)0x20000000,
		(CharType)0x74000000, (CharType)0x68000000, (CharType)0x65000000, (CharType)0x73000000, (CharType)0x65000000,
		(CharType)0x20000000, (CharType)0x6d000000, (CharType)0x61000000, (CharType)0x74000000, (CharType)0x74000000,
		(CharType)0x65000000, (CharType)0x72000000, (CharType)0x73000000, (CharType)0x20000000, (CharType)0x74000000,
		(CharType)0x6f000000, (CharType)0x20000000, (CharType)0x74000000, (CharType)0x68000000, (CharType)0x69000000,
		(CharType)0x73000000, (CharType)0x20000000, (CharType)0x70000000, (CharType)0x72000000, (CharType)0x69000000,
		(CharType)0x6e000000, (CharType)0x63000000, (CharType)0x69000000, (CharType)0x70000000, (CharType)0x6c000000,
		(CharType)0x65000000, (CharType)0x20000000, (CharType)0x6f000000, (CharType)0x66000000, (CharType)0x20000000,
		(CharType)0x73000000, (CharType)0x65000000, (CharType)0x6c000000, (CharType)0x65000000, (CharType)0x63000000,
		(CharType)0x74000000, (CharType)0x69000000, (CharType)0x6f000000, (CharType)0x6e000000, (CharType)0x3a000000,
		(CharType)0x20000000, (CharType)0x68000000, (CharType)0x65000000, (CharType)0x20000000, (CharType)0x72000000,
		(CharType)0x65000000, (CharType)0x6a000000, (CharType)0x65000000, (CharType)0x63000000, (CharType)0x74000000,
		(CharType)0x73000000, (CharType)0x20000000, (CharType)0x70000000, (CharType)0x6c000000, (CharType)0x65000000,
		(CharType)0x61000000, (CharType)0x73000000, (CharType)0x75000000, (CharType)0x72000000, (CharType)0x65000000,
		(CharType)0x73000000, (CharType)0x20000000, (CharType)0x74000000, (CharType)0x6f000000, (CharType)0x20000000,
		(CharType)0x73000000, (CharType)0x65000000, (CharType)0x63000000, (CharType)0x75000000, (CharType)0x72000000,
		(CharType)0x65000000, (CharType)0x20000000, (CharType)0x6f000000, (CharType)0x74000000, (CharType)0x68000000,
		(CharType)0x65000000, (CharType)0x72000000, (CharType)0x20000000, (CharType)0x67000000, (CharType)0x72000000,
		(CharType)0x65000000, (CharType)0x61000000, (CharType)0x74000000, (CharType)0x65000000, (CharType)0x72000000,
		(CharType)0x20000000, (CharType)0x70000000, (CharType)0x6c000000, (CharType)0x65000000, (CharType)0x61000000,
		(CharType)0x73000000, (CharType)0x75000000, (CharType)0x72000000, (CharType)0x65000000, (CharType)0x73000000,
		(CharType)0x2c000000, (CharType)0x20000000, (CharType)0x6f000000, (CharType)0x72000000, (CharType)0x20000000,
		(CharType)0x65000000, (CharType)0x6c000000, (CharType)0x73000000, (CharType)0x65000000, (CharType)0x20000000,
		(CharType)0x68000000, (CharType)0x65000000, (CharType)0x20000000, (CharType)0x65000000, (CharType)0x6e000000,
		(CharType)0x64000000, (CharType)0x75000000, (CharType)0x72000000, (CharType)0x65000000, (CharType)0x73000000,
		(CharType)0x20000000, (CharType)0x70000000, (CharType)0x61000000, (CharType)0x69000000, (CharType)0x6e000000,
		(CharType)0x73000000, (CharType)0x20000000, (CharType)0x74000000, (CharType)0x6f000000, (CharType)0x20000000,
		(CharType)0x61000000, (CharType)0x76000000, (CharType)0x6f000000, (CharType)0x69000000, (CharType)0x64000000,
		(CharType)0x20000000, (CharType)0x77000000, (CharType)0x6f000000, (CharType)0x72000000, (CharType)0x73000000,
		(CharType)0x65000000, (CharType)0x20000000, (CharType)0x70000000, (CharType)0x61000000, (CharType)0x69000000,
		(CharType)0x6e000000, (CharType)0x73000000, (CharType)0x2e000000, (CharType)0x20000000, (CharType)0x24c60000,
		(CharType)0x98b20000, (CharType)0x74c70000, (CharType)0x20000000, (CharType)0x24c60000, (CharType)0x98b20000,
		(CharType)0x74c70000, (CharType)0x8cc10000, (CharType)0x1cc10000, (CharType)0x20000000, (CharType)0xe4b90000,
		(CharType)0x7cc70000, (CharType)0x74c70000, (CharType)0x20000000, (CharType)0x24c60000, (CharType)0x98b20000,
		(CharType)0x74c70000, (CharType)0x8cc10000, (CharType)0x1cc10000, (CharType)0x20000000, (CharType)0x00c80000,
		(CharType)0x3cbb0000, (CharType)0xc0c90000, (CharType)0xc4b30000, (CharType)0x20000000, (CharType)0xc8c00000,
		(CharType)0xc0c90000, (CharType)0xc4b30000, (CharType)0x20000000, (CharType)0xd0b90000, (CharType)0x3cc70000,
		(CharType)0xdcc20000, (CharType)0xe0ac0000, (CharType)0x20000000, (CharType)0xc8c00000, (CharType)0x24b80000,
		(CharType)0x74ba0000, (CharType)0x20000000, (CharType)0x98b20000, (CharType)0x20000000, (CharType)0xb8c50000,
		(CharType)0x1cc80000, (CharType)0x98b00000, (CharType)0x20000000, (CharType)0x24c60000, (CharType)0x98b20000,
		(CharType)0x74c70000, (CharType)0x8cc10000, (CharType)0x1cc10000, (CharType)0x2e000000, (CharType)0x20000000,
		(CharType)0x30520000, (CharType)0x955e0000, (CharType)0x2f660000, (CharType)0x11620000, (CharType)0x3c770000,
		(CharType)0x5e790000, (CharType)0x2a590000, (CharType)0x7d590000, (CharType)0x0cff0000, (CharType)0xd88f0000,
		(CharType)0x2f660000, (CharType)0x11620000, (CharType)0x0c540000, (CharType)0x8b4e0000, (CharType)0x3c770000,
		(CharType)0x2a590000, (CharType)0xb1820000, (CharType)0x02300000, (CharType)0xa16c0000, (CharType)0x09670000,
		(CharType)0xfb4e0000, (CharType)0x554f0000, (CharType)0xdd4f0000, (CharType)0xc18b0000, (CharType)0x28750000,
		(CharType)0x864e0000, (CharType)0x20000000, (CharType)0x70000000, (CharType)0x69000000, (CharType)0x70000000,
		(CharType)0x65000000, (CharType)0x6e000000, (CharType)0x76000000, (CharType)0x20000000, (CharType)0x84760000,
		(CharType)0x79980000, (CharType)0xee760000, (CharType)0xfd800000, (CharType)0x28570000, (CharType)0x8f960000,
		(CharType)0xbf4f0000, (CharType)0x004e0000, (CharType)0x2a4e0000, (CharType)0x20000000, (CharType)0x43000000,
		(CharType)0x6f000000, (CharType)0x6e000000, (CharType)0x64000000, (CharType)0x61000000, (CharType)0x20000000,
		(CharType)0x65000000, (CharType)0x6e000000, (CharType)0x76000000, (CharType)0x69000000, (CharType)0x72000000,
		(CharType)0x6f000000, (CharType)0x6e000000, (CharType)0x6d000000, (CharType)0x65000000, (CharType)0x6e000000,
		(CharType)0x74000000, (CharType)0x20000000, (CharType)0xcc910000, (CharType)0xd18d0000, (CharType)0x778d0000,
		(CharType)0x65670000, (CharType)0x55530000, (CharType)0x43510000, (CharType)0x4b6d0000, (CharType)0xd58b0000,
		(CharType)0x01ff0000, (CharType)0xed300000, (CharType)0xa4300000, (CharType)0xbf300000, (CharType)0xfc300000,
		(CharType)0x188a0000, (CharType)0x05800000, (CharType)0x01300000, (CharType)0x855f0000, (CharType)0x5f6a0000,
		(CharType)0x1f670000, (CharType)0x93950000, (CharType)0x6e300000, (CharType)0xd1300000, (CharType)0xfc300000,
		(CharType)0xc6300000, (CharType)0xa3300000, (CharType)0xfc300000, (CharType)0xc2530000, (CharType)0xa0520000,
		(CharType)0x67300000, (CharType)0xb3300000, (CharType)0xed300000, (CharType)0xca300000, (CharType)0x09590000,
		(CharType)0x70750000, (CharType)0x2a680000, (CharType)0x4c300000, (CharType)0x1f610000, (CharType)0xd3670000,
		(CharType)0xe1620000, (CharType)0x27590000, (CharType)0x20000000, (CharType)0x7c000000, (CharType)0x20000000,
		(CharType)0xb9300000, (CharType)0xaf300000, (CharType)0xfc300000, (CharType)0xd7300000, (CharType)0x1f900000,
		(CharType)0x31580000, (CharType)0x20000000, (CharType)0x23000000, (CharType)0xed300000, (CharType)0xa4300000,
		(CharType)0xbf300000, (CharType)0xfc300000, (CharType)0x20000000, (CharType)0x23000000, (CharType)0xb9300000,
		(CharType)0xaf300000, (CharType)0xfc300000, (CharType)0xd7300000, (CharType)0x1f900000, (CharType)0x31580000,
		(CharType)0x20000000, (CharType)0x23000000, (CharType)0x31900000, (CharType)0x0a520000, (CharType)0x87650000,
		(CharType)0x25660000, (CharType)0x20000000, (CharType)0x5c000000, (CharType)0x22000000, (CharType)0x46000000,
		(CharType)0x61000000, (CharType)0x65000000, (CharType)0x6e000000, (CharType)0x5c000000, (CharType)0x22000000,
		(CharType)0x20000000, (CharType)0x6f000000, (CharType)0x67000000, (CharType)0x20000000, (CharType)0x5c000000,
		(CharType)0x22000000, (CharType)0x68000000, (CharType)0x65000000, (CharType)0x72000000, (CharType)0x72000000,
		(CharType)0x65000000, (CharType)0x67000000, (CharType)0x75000000, (CharType)0x64000000, (CharType)0x5c000000,
		(CharType)0x22000000, (CharType)0x20000000, (CharType)0x73000000, (CharType)0x61000000, (CharType)0x20000000,
		(CharType)0x64000000, (CharType)0x65000000, (CharType)0x20000000, (CharType)0x69000000, (CharType)0x20000000,
		(CharType)0x67000000, (CharType)0x61000000, (CharType)0x6d000000, (CharType)0x6c000000, (CharType)0x65000000,
		(CharType)0x20000000, (CharType)0x64000000, (CharType)0x61000000, (CharType)0x67000000, (CharType)0x65000000,
		(CharType)0x72000000, (CharType)0x2e000000, (CharType)0x20000000, (CharType)0x49000000, (CharType)0x74000000,
		(CharType)0x27000000, (CharType)0x73000000, (CharType)0x20000000, (CharType)0x6e000000, (CharType)0x65000000,
		(CharType)0x76000000, (CharType)0x65000000, (CharType)0x72000000, (CharType)0x20000000, (CharType)0x74000000,
		(CharType)0x6f000000, (CharType)0x6f000000, (CharType)0x20000000, (CharType)0x65000000, (CharType)0x61000000,
		(CharType)0x72000000, (CharType)0x6c000000, (CharType)0x79000000, (CharType)0x20000000, (CharType)0x74000000,
		(CharType)0x6f000000, (CharType)0x20000000, (CharType)0x6c000000, (CharType)0x65000000, (CharType)0x61000000,
		(CharType)0x72000000, (CharType)0x6e000000, (CharType)0x20000000, (CharType)0x61000000, (CharType)0x20000000,
		(CharType)0x6c000000, (CharType)0x61000000, (CharType)0x6e000000, (CharType)0x67000000, (CharType)0x75000000,
		(CharType)0x61000000, (CharType)0x67000000, (CharType)0x65000000, (CharType)0x2e000000, (CharType)0x2e000000,
		(CharType)0x2e000000, (CharType)0x20000000, (CharType)0x41000000, (CharType)0x75000000, (CharType)0x72000000,
		(CharType)0xe9000000, (CharType)0x6c000000, (CharType)0x69000000, (CharType)0x65000000, (CharType)0x2e000000,
		(CharType)0x00000000 };

	template <typename CharType>
	inline constexpr const CharType x_u16_unicode_sequence_truth_native_endian_storage[] = { (CharType)0x6b66,
		(CharType)0x4fa6, (CharType)0x5baa, (CharType)0x7ae0, (CharType)0x7b2c, (CharType)0x0039, (CharType)0x6761,
		(CharType)0x2014, (CharType)0x2014, (CharType)0x5e94, (CharType)0x5c55, (CharType)0x7fc5, (CharType)0x4e16,
		(CharType)0x754c, (CharType)0x3002, (CharType)0x4e0d, (CharType)0x5206, (CharType)0x4eba, (CharType)0x79cd,
		(CharType)0x3001, (CharType)0x56fd, (CharType)0x7c4d, (CharType)0x5171, (CharType)0x540c, (CharType)0x6218,
		(CharType)0x6597, (CharType)0x3002, (CharType)0x26c4, (CharType)0x26c4, (CharType)0x2728, (CharType)0x2728,
		(CharType)0x2705, (CharType)0xd83e, (CharType)0xdd80, (CharType)0xd83d, (CharType)0xde02, (CharType)0xd83d,
		(CharType)0xde2d, (CharType)0xd83d, (CharType)0xde2c, (CharType)0xd83d, (CharType)0xde2c, (CharType)0xd83d,
		(CharType)0xde14, (CharType)0xd83d, (CharType)0xde14, (CharType)0xd83d, (CharType)0xde14, (CharType)0xd83c,
		(CharType)0xdfa8, (CharType)0xd83c, (CharType)0xdfa8, (CharType)0xd83d, (CharType)0xdc36, (CharType)0xd83e,
		(CharType)0xdd37, (CharType)0x200d, (CharType)0x2640, (CharType)0xfe0f, (CharType)0xd83d, (CharType)0xdee0,
		(CharType)0xd83d, (CharType)0xdc4b, (CharType)0xd83d, (CharType)0xdca5, (CharType)0xd83d, (CharType)0xdca3,
		(CharType)0xd83d, (CharType)0xdca5, (CharType)0xd83d, (CharType)0xdca3, (CharType)0xd83c, (CharType)0xdf77,
		(CharType)0xd83c, (CharType)0xdf77, (CharType)0xd83c, (CharType)0xdf77, (CharType)0xd83c, (CharType)0xdf77,
		(CharType)0x007a, (CharType)0x2665, (CharType)0x4566, (CharType)0xfffd, (CharType)0xfffd, (CharType)0x79c1,
		(CharType)0x306f, (CharType)0x30ac, (CharType)0x30e9, (CharType)0x30b9, (CharType)0x3092, (CharType)0x98df,
		(CharType)0x3079, (CharType)0x3089, (CharType)0x308c, (CharType)0x307e, (CharType)0x3059, (CharType)0x3002,
		(CharType)0x305d, (CharType)0x308c, (CharType)0x306f, (CharType)0x79c1, (CharType)0x3092, (CharType)0x50b7,
		(CharType)0x3064, (CharType)0x3051, (CharType)0x307e, (CharType)0x305b, (CharType)0x3093, (CharType)0x3002,
		(CharType)0x0baf, (CharType)0x0bbe, (CharType)0x0bae, (CharType)0x0bb1, (CharType)0x0bbf, (CharType)0x0ba8,
		(CharType)0x0bcd, (CharType)0x0ba4, (CharType)0x0020, (CharType)0x0bae, (CharType)0x0bca, (CharType)0x0bb4,
		(CharType)0x0bbf, (CharType)0x0b95, (CharType)0x0bb3, (CharType)0x0bbf, (CharType)0x0bb2, (CharType)0x0bc7,
		(CharType)0x0020, (CharType)0x0ba4, (CharType)0x0bae, (CharType)0x0bbf, (CharType)0x0bb4, (CharType)0x0bcd,
		(CharType)0x0bae, (CharType)0x0bca, (CharType)0x0bb4, (CharType)0x0bbf, (CharType)0x0020, (CharType)0x0baa,
		(CharType)0x0bcb, (CharType)0x0bb2, (CharType)0x0bcd, (CharType)0x0020, (CharType)0x0b87, (CharType)0x0ba9,
		(CharType)0x0bbf, (CharType)0x0ba4, (CharType)0x0bbe, (CharType)0x0bb5, (CharType)0x0ba4, (CharType)0x0bc1,
		(CharType)0x0020, (CharType)0x0b8e, (CharType)0x0b99, (CharType)0x0bcd, (CharType)0x0b95, (CharType)0x0bc1,
		(CharType)0x0bae, (CharType)0x0bcd, (CharType)0x0020, (CharType)0x0b95, (CharType)0x0bbe, (CharType)0x0ba3,
		(CharType)0x0bcb, (CharType)0x0bae, (CharType)0x0bcd, (CharType)0x002c, (CharType)0x041d, (CharType)0x0430,
		(CharType)0x0020, (CharType)0x0431, (CharType)0x0435, (CharType)0x0440, (CharType)0x0435, (CharType)0x0433,
		(CharType)0x0443, (CharType)0x0020, (CharType)0x043f, (CharType)0x0443, (CharType)0x0441, (CharType)0x0442,
		(CharType)0x044b, (CharType)0x043d, (CharType)0x043d, (CharType)0x044b, (CharType)0x0445, (CharType)0x0020,
		(CharType)0x0432, (CharType)0x043e, (CharType)0x043b, (CharType)0x043d, (CharType)0x0020, (CharType)0x20ac,
		(CharType)0x0020, (CharType)0x0623, (CharType)0x0646, (CharType)0x0627, (CharType)0x0020, (CharType)0x0642,
		(CharType)0x0627, (CharType)0x062f, (CharType)0x0631, (CharType)0x0020, (CharType)0x0639, (CharType)0x0644,
		(CharType)0x0649, (CharType)0x0020, (CharType)0x0623, (CharType)0x0643, (CharType)0x0644, (CharType)0x0020,
		(CharType)0x0627, (CharType)0x0644, (CharType)0x0632, (CharType)0x062c, (CharType)0x0627, (CharType)0x062c,
		(CharType)0x0020, (CharType)0x0648, (CharType)0x0020, (CharType)0x0647, (CharType)0x0630, (CharType)0x0627,
		(CharType)0x0020, (CharType)0x0644, (CharType)0x0627, (CharType)0x0020, (CharType)0x064a, (CharType)0x0624,
		(CharType)0x0644, (CharType)0x0645, (CharType)0x0646, (CharType)0x064a, (CharType)0x002e, (CharType)0x0020,
		(CharType)0x004f, (CharType)0x006e, (CharType)0x0020, (CharType)0x0074, (CharType)0x0068, (CharType)0x0065,
		(CharType)0x0020, (CharType)0x006f, (CharType)0x0074, (CharType)0x0068, (CharType)0x0065, (CharType)0x0072,
		(CharType)0x0020, (CharType)0x0068, (CharType)0x0061, (CharType)0x006e, (CharType)0x0064, (CharType)0x002c,
		(CharType)0x0020, (CharType)0x0077, (CharType)0x0065, (CharType)0x0020, (CharType)0x0064, (CharType)0x0065,
		(CharType)0x006e, (CharType)0x006f, (CharType)0x0075, (CharType)0x006e, (CharType)0x0063, (CharType)0x0065,
		(CharType)0x0020, (CharType)0x0077, (CharType)0x0069, (CharType)0x0074, (CharType)0x0068, (CharType)0x0020,
		(CharType)0x0072, (CharType)0x0069, (CharType)0x0067, (CharType)0x0068, (CharType)0x0074, (CharType)0x0065,
		(CharType)0x006f, (CharType)0x0075, (CharType)0x0073, (CharType)0x0020, (CharType)0x0069, (CharType)0x006e,
		(CharType)0x0064, (CharType)0x0069, (CharType)0x0067, (CharType)0x006e, (CharType)0x0061, (CharType)0x0074,
		(CharType)0x0069, (CharType)0x006f, (CharType)0x006e, (CharType)0x0020, (CharType)0x0061, (CharType)0x006e,
		(CharType)0x0064, (CharType)0x0020, (CharType)0x0064, (CharType)0x0069, (CharType)0x0073, (CharType)0x006c,
		(CharType)0x0069, (CharType)0x006b, (CharType)0x0065, (CharType)0x0020, (CharType)0x006d, (CharType)0x0065,
		(CharType)0x006e, (CharType)0x0020, (CharType)0x0077, (CharType)0x0068, (CharType)0x006f, (CharType)0x0020,
		(CharType)0x0061, (CharType)0x0072, (CharType)0x0065, (CharType)0x0020, (CharType)0x0073, (CharType)0x006f,
		(CharType)0x0020, (CharType)0x0062, (CharType)0x0065, (CharType)0x0067, (CharType)0x0075, (CharType)0x0069,
		(CharType)0x006c, (CharType)0x0065, (CharType)0x0064, (CharType)0x0020, (CharType)0x0061, (CharType)0x006e,
		(CharType)0x0064, (CharType)0x0020, (CharType)0x0064, (CharType)0x0065, (CharType)0x006d, (CharType)0x006f,
		(CharType)0x0072, (CharType)0x0061, (CharType)0x006c, (CharType)0x0069, (CharType)0x007a, (CharType)0x0065,
		(CharType)0x0064, (CharType)0x0020, (CharType)0x0062, (CharType)0x0079, (CharType)0x0020, (CharType)0x0074,
		(CharType)0x0068, (CharType)0x0065, (CharType)0x0020, (CharType)0x0063, (CharType)0x0068, (CharType)0x0061,
		(CharType)0x0072, (CharType)0x006d, (CharType)0x0073, (CharType)0x0020, (CharType)0x006f, (CharType)0x0066,
		(CharType)0x0020, (CharType)0x0070, (CharType)0x006c, (CharType)0x0065, (CharType)0x0061, (CharType)0x0073,
		(CharType)0x0075, (CharType)0x0072, (CharType)0x0065, (CharType)0x0020, (CharType)0x006f, (CharType)0x0066,
		(CharType)0x0020, (CharType)0x0074, (CharType)0x0068, (CharType)0x0065, (CharType)0x0020, (CharType)0x006d,
		(CharType)0x006f, (CharType)0x006d, (CharType)0x0065, (CharType)0x006e, (CharType)0x0074, (CharType)0x002c,
		(CharType)0x0020, (CharType)0x0073, (CharType)0x006f, (CharType)0x0020, (CharType)0x0062, (CharType)0x006c,
		(CharType)0x0069, (CharType)0x006e, (CharType)0x0064, (CharType)0x0065, (CharType)0x0064, (CharType)0x0020,
		(CharType)0x0062, (CharType)0x0079, (CharType)0x0020, (CharType)0x0064, (CharType)0x0065, (CharType)0x0073,
		(CharType)0x0069, (CharType)0x0072, (CharType)0x0065, (CharType)0x002c, (CharType)0x0020, (CharType)0x0074,
		(CharType)0x0068, (CharType)0x0061, (CharType)0x0074, (CharType)0x0020, (CharType)0x0074, (CharType)0x0068,
		(CharType)0x0065, (CharType)0x0079, (CharType)0x0020, (CharType)0x0063, (CharType)0x0061, (CharType)0x006e,
		(CharType)0x006e, (CharType)0x006f, (CharType)0x0074, (CharType)0x0020, (CharType)0x0066, (CharType)0x006f,
		(CharType)0x0072, (CharType)0x0065, (CharType)0x0073, (CharType)0x0065, (CharType)0x0065, (CharType)0x0020,
		(CharType)0x0074, (CharType)0x0068, (CharType)0x0065, (CharType)0x0020, (CharType)0x0070, (CharType)0x0061,
		(CharType)0x0069, (CharType)0x006e, (CharType)0x0020, (CharType)0x0061, (CharType)0x006e, (CharType)0x0064,
		(CharType)0x0020, (CharType)0x0074, (CharType)0x0072, (CharType)0x006f, (CharType)0x0075, (CharType)0x0062,
		(CharType)0x006c, (CharType)0x0065, (CharType)0x0020, (CharType)0x0074, (CharType)0x0068, (CharType)0x0061,
		(CharType)0x0074, (CharType)0x0020, (CharType)0x0061, (CharType)0x0072, (CharType)0x0065, (CharType)0x0020,
		(CharType)0x0062, (CharType)0x006f, (CharType)0x0075, (CharType)0x006e, (CharType)0x0064, (CharType)0x0020,
		(CharType)0x0074, (CharType)0x006f, (CharType)0x0020, (CharType)0x0065, (CharType)0x006e, (CharType)0x0073,
		(CharType)0x0075, (CharType)0x0065, (CharType)0x003b, (CharType)0x0020, (CharType)0x0061, (CharType)0x006e,
		(CharType)0x0064, (CharType)0x0020, (CharType)0x0065, (CharType)0x0071, (CharType)0x0075, (CharType)0x0061,
		(CharType)0x006c, (CharType)0x0020, (CharType)0x0062, (CharType)0x006c, (CharType)0x0061, (CharType)0x006d,
		(CharType)0x0065, (CharType)0x0020, (CharType)0x0062, (CharType)0x0065, (CharType)0x006c, (CharType)0x006f,
		(CharType)0x006e, (CharType)0x0067, (CharType)0x0073, (CharType)0x0020, (CharType)0x0074, (CharType)0x006f,
		(CharType)0x0020, (CharType)0x0074, (CharType)0x0068, (CharType)0x006f, (CharType)0x0073, (CharType)0x0065,
		(CharType)0x0020, (CharType)0x0077, (CharType)0x0068, (CharType)0x006f, (CharType)0x0020, (CharType)0x0066,
		(CharType)0x0061, (CharType)0x0069, (CharType)0x006c, (CharType)0x0020, (CharType)0x0069, (CharType)0x006e,
		(CharType)0x0020, (CharType)0x0074, (CharType)0x0068, (CharType)0x0065, (CharType)0x0069, (CharType)0x0072,
		(CharType)0x0020, (CharType)0x0064, (CharType)0x0075, (CharType)0x0074, (CharType)0x0079, (CharType)0x0020,
		(CharType)0x0074, (CharType)0x0068, (CharType)0x0072, (CharType)0x006f, (CharType)0x0075, (CharType)0x0067,
		(CharType)0x0068, (CharType)0x0020, (CharType)0x0077, (CharType)0x0065, (CharType)0x0061, (CharType)0x006b,
		(CharType)0x006e, (CharType)0x0065, (CharType)0x0073, (CharType)0x0073, (CharType)0x0020, (CharType)0x006f,
		(CharType)0x0066, (CharType)0x0020, (CharType)0x0077, (CharType)0x0069, (CharType)0x006c, (CharType)0x006c,
		(CharType)0x002c, (CharType)0x0020, (CharType)0x0077, (CharType)0x0068, (CharType)0x0069, (CharType)0x0063,
		(CharType)0x0068, (CharType)0x0020, (CharType)0x0069, (CharType)0x0073, (CharType)0x0020, (CharType)0x0074,
		(CharType)0x0068, (CharType)0x0065, (CharType)0x0020, (CharType)0x0073, (CharType)0x0061, (CharType)0x006d,
		(CharType)0x0065, (CharType)0x0020, (CharType)0x0061, (CharType)0x0073, (CharType)0x0020, (CharType)0x0073,
		(CharType)0x0061, (CharType)0x0079, (CharType)0x0069, (CharType)0x006e, (CharType)0x0067, (CharType)0x0020,
		(CharType)0x0074, (CharType)0x0068, (CharType)0x0072, (CharType)0x006f, (CharType)0x0075, (CharType)0x0067,
		(CharType)0x0068, (CharType)0x0020, (CharType)0x0073, (CharType)0x0068, (CharType)0x0072, (CharType)0x0069,
		(CharType)0x006e, (CharType)0x006b, (CharType)0x0069, (CharType)0x006e, (CharType)0x0067, (CharType)0x0020,
		(CharType)0x0066, (CharType)0x0072, (CharType)0x006f, (CharType)0x006d, (CharType)0x0020, (CharType)0x0074,
		(CharType)0x006f, (CharType)0x0069, (CharType)0x006c, (CharType)0x0020, (CharType)0x0061, (CharType)0x006e,
		(CharType)0x0064, (CharType)0x0020, (CharType)0x0070, (CharType)0x0061, (CharType)0x0069, (CharType)0x006e,
		(CharType)0x002e, (CharType)0x0020, (CharType)0x0054, (CharType)0x0068, (CharType)0x0065, (CharType)0x0073,
		(CharType)0x0065, (CharType)0x0020, (CharType)0x0063, (CharType)0x0061, (CharType)0x0073, (CharType)0x0065,
		(CharType)0x0073, (CharType)0x0020, (CharType)0x0061, (CharType)0x0072, (CharType)0x0065, (CharType)0x0020,
		(CharType)0x0070, (CharType)0x0065, (CharType)0x0072, (CharType)0x0066, (CharType)0x0065, (CharType)0x0063,
		(CharType)0x0074, (CharType)0x006c, (CharType)0x0079, (CharType)0x0020, (CharType)0x0073, (CharType)0x0069,
		(CharType)0x006d, (CharType)0x0070, (CharType)0x006c, (CharType)0x0065, (CharType)0x0020, (CharType)0x0061,
		(CharType)0x006e, (CharType)0x0064, (CharType)0x0020, (CharType)0x0065, (CharType)0x0061, (CharType)0x0073,
		(CharType)0x0079, (CharType)0x0020, (CharType)0x0074, (CharType)0x006f, (CharType)0x0020, (CharType)0x0064,
		(CharType)0x0069, (CharType)0x0073, (CharType)0x0074, (CharType)0x0069, (CharType)0x006e, (CharType)0x0067,
		(CharType)0x0075, (CharType)0x0069, (CharType)0x0073, (CharType)0x0068, (CharType)0x002e, (CharType)0x0020,
		(CharType)0x0049, (CharType)0x006e, (CharType)0x0020, (CharType)0x0061, (CharType)0x0020, (CharType)0x0066,
		(CharType)0x0072, (CharType)0x0065, (CharType)0x0065, (CharType)0x0020, (CharType)0x0068, (CharType)0x006f,
		(CharType)0x0075, (CharType)0x0072, (CharType)0x002c, (CharType)0x0020, (CharType)0x0077, (CharType)0x0068,
		(CharType)0x0065, (CharType)0x006e, (CharType)0x0020, (CharType)0x006f, (CharType)0x0075, (CharType)0x0072,
		(CharType)0x0020, (CharType)0x0070, (CharType)0x006f, (CharType)0x0077, (CharType)0x0065, (CharType)0x0072,
		(CharType)0x0020, (CharType)0x006f, (CharType)0x0066, (CharType)0x0020, (CharType)0x0063, (CharType)0x0068,
		(CharType)0x006f, (CharType)0x0069, (CharType)0x0063, (CharType)0x0065, (CharType)0x0020, (CharType)0x0069,
		(CharType)0x0073, (CharType)0x0020, (CharType)0x0075, (CharType)0x006e, (CharType)0x0074, (CharType)0x0072,
		(CharType)0x0061, (CharType)0x006d, (CharType)0x006d, (CharType)0x0065, (CharType)0x006c, (CharType)0x006c,
		(CharType)0x0065, (CharType)0x0064, (CharType)0x0020, (CharType)0x0061, (CharType)0x006e, (CharType)0x0064,
		(CharType)0x0020, (CharType)0x0077, (CharType)0x0068, (CharType)0x0065, (CharType)0x006e, (CharType)0x0020,
		(CharType)0x006e, (CharType)0x006f, (CharType)0x0074, (CharType)0x0068, (CharType)0x0069, (CharType)0x006e,
		(CharType)0x0067, (CharType)0x0020, (CharType)0x0070, (CharType)0x0072, (CharType)0x0065, (CharType)0x0076,
		(CharType)0x0065, (CharType)0x006e, (CharType)0x0074, (CharType)0x0073, (CharType)0x0020, (CharType)0x006f,
		(CharType)0x0075, (CharType)0x0072, (CharType)0x0020, (CharType)0x0062, (CharType)0x0065, (CharType)0x0069,
		(CharType)0x006e, (CharType)0x0067, (CharType)0x0020, (CharType)0x0061, (CharType)0x0062, (CharType)0x006c,
		(CharType)0x0065, (CharType)0x0020, (CharType)0x0074, (CharType)0x006f, (CharType)0x0020, (CharType)0x0064,
		(CharType)0x006f, (CharType)0x0020, (CharType)0x0077, (CharType)0x0068, (CharType)0x0061, (CharType)0x0074,
		(CharType)0x0020, (CharType)0x0077, (CharType)0x0065, (CharType)0x0020, (CharType)0x006c, (CharType)0x0069,
		(CharType)0x006b, (CharType)0x0065, (CharType)0x0020, (CharType)0x0062, (CharType)0x0065, (CharType)0x0073,
		(CharType)0x0074, (CharType)0x002c, (CharType)0x0020, (CharType)0x0065, (CharType)0x0076, (CharType)0x0065,
		(CharType)0x0072, (CharType)0x0079, (CharType)0x0020, (CharType)0x0070, (CharType)0x006c, (CharType)0x0065,
		(CharType)0x0061, (CharType)0x0073, (CharType)0x0075, (CharType)0x0072, (CharType)0x0065, (CharType)0x0020,
		(CharType)0x0069, (CharType)0x0073, (CharType)0x0020, (CharType)0x0074, (CharType)0x006f, (CharType)0x0020,
		(CharType)0x0062, (CharType)0x0065, (CharType)0x0020, (CharType)0x0077, (CharType)0x0065, (CharType)0x006c,
		(CharType)0x0063, (CharType)0x006f, (CharType)0x006d, (CharType)0x0065, (CharType)0x0064, (CharType)0x0020,
		(CharType)0x0061, (CharType)0x006e, (CharType)0x0064, (CharType)0x0020, (CharType)0x0065, (CharType)0x0076,
		(CharType)0x0065, (CharType)0x0072, (CharType)0x0079, (CharType)0x0020, (CharType)0x0070, (CharType)0x0061,
		(CharType)0x0069, (CharType)0x006e, (CharType)0x0020, (CharType)0x0061, (CharType)0x0076, (CharType)0x006f,
		(CharType)0x0069, (CharType)0x0064, (CharType)0x0065, (CharType)0x0064, (CharType)0x002e, (CharType)0x0020,
		(CharType)0x0042, (CharType)0x0075, (CharType)0x0074, (CharType)0x0020, (CharType)0x0069, (CharType)0x006e,
		(CharType)0x0020, (CharType)0x0063, (CharType)0x0065, (CharType)0x0072, (CharType)0x0074, (CharType)0x0061,
		(CharType)0x0069, (CharType)0x006e, (CharType)0x0020, (CharType)0x0063, (CharType)0x0069, (CharType)0x0072,
		(CharType)0x0063, (CharType)0x0075, (CharType)0x006d, (CharType)0x0073, (CharType)0x0074, (CharType)0x0061,
		(CharType)0x006e, (CharType)0x0063, (CharType)0x0065, (CharType)0x0073, (CharType)0x0020, (CharType)0x0061,
		(CharType)0x006e, (CharType)0x0064, (CharType)0x0020, (CharType)0x006f, (CharType)0x0077, (CharType)0x0069,
		(CharType)0x006e, (CharType)0x0067, (CharType)0x0020, (CharType)0x0074, (CharType)0x006f, (CharType)0x0020,
		(CharType)0x0074, (CharType)0x0068, (CharType)0x0065, (CharType)0x0020, (CharType)0x0063, (CharType)0x006c,
		(CharType)0x0061, (CharType)0x0069, (CharType)0x006d, (CharType)0x0073, (CharType)0x0020, (CharType)0x006f,
		(CharType)0x0066, (CharType)0x0020, (CharType)0x0064, (CharType)0x0075, (CharType)0x0074, (CharType)0x0079,
		(CharType)0x0020, (CharType)0x006f, (CharType)0x0072, (CharType)0x0020, (CharType)0x0074, (CharType)0x0068,
		(CharType)0x0065, (CharType)0x0020, (CharType)0x006f, (CharType)0x0062, (CharType)0x006c, (CharType)0x0069,
		(CharType)0x0067, (CharType)0x0061, (CharType)0x0074, (CharType)0x0069, (CharType)0x006f, (CharType)0x006e,
		(CharType)0x0073, (CharType)0x0020, (CharType)0x006f, (CharType)0x0066, (CharType)0x0020, (CharType)0x0062,
		(CharType)0x0075, (CharType)0x0073, (CharType)0x0069, (CharType)0x006e, (CharType)0x0065, (CharType)0x0073,
		(CharType)0x0073, (CharType)0x0020, (CharType)0x0069, (CharType)0x0074, (CharType)0x0020, (CharType)0x0077,
		(CharType)0x0069, (CharType)0x006c, (CharType)0x006c, (CharType)0x0020, (CharType)0x0066, (CharType)0x0072,
		(CharType)0x0065, (CharType)0x0071, (CharType)0x0075, (CharType)0x0065, (CharType)0x006e, (CharType)0x0074,
		(CharType)0x006c, (CharType)0x0079, (CharType)0x0020, (CharType)0x006f, (CharType)0x0063, (CharType)0x0063,
		(CharType)0x0075, (CharType)0x0072, (CharType)0x0020, (CharType)0x0074, (CharType)0x0068, (CharType)0x0061,
		(CharType)0x0074, (CharType)0x0020, (CharType)0x0070, (CharType)0x006c, (CharType)0x0065, (CharType)0x0061,
		(CharType)0x0073, (CharType)0x0075, (CharType)0x0072, (CharType)0x0065, (CharType)0x0073, (CharType)0x0020,
		(CharType)0x0068, (CharType)0x0061, (CharType)0x0076, (CharType)0x0065, (CharType)0x0020, (CharType)0x0074,
		(CharType)0x006f, (CharType)0x0020, (CharType)0x0062, (CharType)0x0065, (CharType)0x0020, (CharType)0x0072,
		(CharType)0x0065, (CharType)0x0070, (CharType)0x0075, (CharType)0x0064, (CharType)0x0069, (CharType)0x0061,
		(CharType)0x0074, (CharType)0x0065, (CharType)0x0064, (CharType)0x0020, (CharType)0x0061, (CharType)0x006e,
		(CharType)0x0064, (CharType)0x0020, (CharType)0x0061, (CharType)0x006e, (CharType)0x006e, (CharType)0x006f,
		(CharType)0x0079, (CharType)0x0061, (CharType)0x006e, (CharType)0x0063, (CharType)0x0065, (CharType)0x0073,
		(CharType)0x0020, (CharType)0x0061, (CharType)0x0063, (CharType)0x0063, (CharType)0x0065, (CharType)0x0070,
		(CharType)0x0074, (CharType)0x0065, (CharType)0x0064, (CharType)0x002e, (CharType)0x0020, (CharType)0x0054,
		(CharType)0x0068, (CharType)0x0065, (CharType)0x0020, (CharType)0x0077, (CharType)0x0069, (CharType)0x0073,
		(CharType)0x0065, (CharType)0x0020, (CharType)0x006d, (CharType)0x0061, (CharType)0x006e, (CharType)0x0020,
		(CharType)0x0074, (CharType)0x0068, (CharType)0x0065, (CharType)0x0072, (CharType)0x0065, (CharType)0x0066,
		(CharType)0x006f, (CharType)0x0072, (CharType)0x0065, (CharType)0x0020, (CharType)0x0061, (CharType)0x006c,
		(CharType)0x0077, (CharType)0x0061, (CharType)0x0079, (CharType)0x0073, (CharType)0x0020, (CharType)0x0068,
		(CharType)0x006f, (CharType)0x006c, (CharType)0x0064, (CharType)0x0073, (CharType)0x0020, (CharType)0x0069,
		(CharType)0x006e, (CharType)0x0020, (CharType)0x0074, (CharType)0x0068, (CharType)0x0065, (CharType)0x0073,
		(CharType)0x0065, (CharType)0x0020, (CharType)0x006d, (CharType)0x0061, (CharType)0x0074, (CharType)0x0074,
		(CharType)0x0065, (CharType)0x0072, (CharType)0x0073, (CharType)0x0020, (CharType)0x0074, (CharType)0x006f,
		(CharType)0x0020, (CharType)0x0074, (CharType)0x0068, (CharType)0x0069, (CharType)0x0073, (CharType)0x0020,
		(CharType)0x0070, (CharType)0x0072, (CharType)0x0069, (CharType)0x006e, (CharType)0x0063, (CharType)0x0069,
		(CharType)0x0070, (CharType)0x006c, (CharType)0x0065, (CharType)0x0020, (CharType)0x006f, (CharType)0x0066,
		(CharType)0x0020, (CharType)0x0073, (CharType)0x0065, (CharType)0x006c, (CharType)0x0065, (CharType)0x0063,
		(CharType)0x0074, (CharType)0x0069, (CharType)0x006f, (CharType)0x006e, (CharType)0x003a, (CharType)0x0020,
		(CharType)0x0068, (CharType)0x0065, (CharType)0x0020, (CharType)0x0072, (CharType)0x0065, (CharType)0x006a,
		(CharType)0x0065, (CharType)0x0063, (CharType)0x0074, (CharType)0x0073, (CharType)0x0020, (CharType)0x0070,
		(CharType)0x006c, (CharType)0x0065, (CharType)0x0061, (CharType)0x0073, (CharType)0x0075, (CharType)0x0072,
		(CharType)0x0065, (CharType)0x0073, (CharType)0x0020, (CharType)0x0074, (CharType)0x006f, (CharType)0x0020,
		(CharType)0x0073, (CharType)0x0065, (CharType)0x0063, (CharType)0x0075, (CharType)0x0072, (CharType)0x0065,
		(CharType)0x0020, (CharType)0x006f, (CharType)0x0074, (CharType)0x0068, (CharType)0x0065, (CharType)0x0072,
		(CharType)0x0020, (CharType)0x0067, (CharType)0x0072, (CharType)0x0065, (CharType)0x0061, (CharType)0x0074,
		(CharType)0x0065, (CharType)0x0072, (CharType)0x0020, (CharType)0x0070, (CharType)0x006c, (CharType)0x0065,
		(CharType)0x0061, (CharType)0x0073, (CharType)0x0075, (CharType)0x0072, (CharType)0x0065, (CharType)0x0073,
		(CharType)0x002c, (CharType)0x0020, (CharType)0x006f, (CharType)0x0072, (CharType)0x0020, (CharType)0x0065,
		(CharType)0x006c, (CharType)0x0073, (CharType)0x0065, (CharType)0x0020, (CharType)0x0068, (CharType)0x0065,
		(CharType)0x0020, (CharType)0x0065, (CharType)0x006e, (CharType)0x0064, (CharType)0x0075, (CharType)0x0072,
		(CharType)0x0065, (CharType)0x0073, (CharType)0x0020, (CharType)0x0070, (CharType)0x0061, (CharType)0x0069,
		(CharType)0x006e, (CharType)0x0073, (CharType)0x0020, (CharType)0x0074, (CharType)0x006f, (CharType)0x0020,
		(CharType)0x0061, (CharType)0x0076, (CharType)0x006f, (CharType)0x0069, (CharType)0x0064, (CharType)0x0020,
		(CharType)0x0077, (CharType)0x006f, (CharType)0x0072, (CharType)0x0073, (CharType)0x0065, (CharType)0x0020,
		(CharType)0x0070, (CharType)0x0061, (CharType)0x0069, (CharType)0x006e, (CharType)0x0073, (CharType)0x002e,
		(CharType)0x0020, (CharType)0xc624, (CharType)0xb298, (CharType)0xc774, (CharType)0x0020, (CharType)0xc624,
		(CharType)0xb298, (CharType)0xc774, (CharType)0xc18c, (CharType)0xc11c, (CharType)0x0020, (CharType)0xb9e4,
		(CharType)0xc77c, (CharType)0xc774, (CharType)0x0020, (CharType)0xc624, (CharType)0xb298, (CharType)0xc774,
		(CharType)0xc18c, (CharType)0xc11c, (CharType)0x0020, (CharType)0xc800, (CharType)0xbb3c, (CharType)0xc9c0,
		(CharType)0xb3c4, (CharType)0x0020, (CharType)0xc0c8, (CharType)0xc9c0, (CharType)0xb3c4, (CharType)0x0020,
		(CharType)0xb9d0, (CharType)0xc73c, (CharType)0xc2dc, (CharType)0xace0, (CharType)0x0020, (CharType)0xc0c8,
		(CharType)0xb824, (CharType)0xba74, (CharType)0x0020, (CharType)0xb298, (CharType)0x0020, (CharType)0xc5b8,
		(CharType)0xc81c, (CharType)0xb098, (CharType)0x0020, (CharType)0xc624, (CharType)0xb298, (CharType)0xc774,
		(CharType)0xc18c, (CharType)0xc11c, (CharType)0x002e, (CharType)0x0020, (CharType)0x5230, (CharType)0x5e95,
		(CharType)0x662f, (CharType)0x6211, (CharType)0x773c, (CharType)0x795e, (CharType)0x592a, (CharType)0x597d,
		(CharType)0xff0c, (CharType)0x8fd8, (CharType)0x662f, (CharType)0x6211, (CharType)0x540c, (CharType)0x4e8b,
		(CharType)0x773c, (CharType)0x592a, (CharType)0x82b1, (CharType)0x3002, (CharType)0x6ca1, (CharType)0x6709,
		(CharType)0x4efb, (CharType)0x4f55, (CharType)0x4fdd, (CharType)0x8bc1, (CharType)0x7528, (CharType)0x4e86,
		(CharType)0x0020, (CharType)0x0070, (CharType)0x0069, (CharType)0x0070, (CharType)0x0065, (CharType)0x006e,
		(CharType)0x0076, (CharType)0x0020, (CharType)0x7684, (CharType)0x9879, (CharType)0x76ee, (CharType)0x80fd,
		(CharType)0x5728, (CharType)0x968f, (CharType)0x4fbf, (CharType)0x4e00, (CharType)0x4e2a, (CharType)0x0020,
		(CharType)0x0043, (CharType)0x006f, (CharType)0x006e, (CharType)0x0064, (CharType)0x0061, (CharType)0x0020,
		(CharType)0x0065, (CharType)0x006e, (CharType)0x0076, (CharType)0x0069, (CharType)0x0072, (CharType)0x006f,
		(CharType)0x006e, (CharType)0x006d, (CharType)0x0065, (CharType)0x006e, (CharType)0x0074, (CharType)0x0020,
		(CharType)0x91cc, (CharType)0x8dd1, (CharType)0x8d77, (CharType)0x6765, (CharType)0x5355, (CharType)0x5143,
		(CharType)0x6d4b, (CharType)0x8bd5, (CharType)0xff01, (CharType)0x30ed, (CharType)0x30a4, (CharType)0x30bf,
		(CharType)0x30fc, (CharType)0x8a18, (CharType)0x8005, (CharType)0x3001, (CharType)0x5f85, (CharType)0x6a5f,
		(CharType)0x671f, (CharType)0x9593, (CharType)0x306e, (CharType)0x30d1, (CharType)0x30fc, (CharType)0x30c6,
		(CharType)0x30a3, (CharType)0x30fc, (CharType)0x53c2, (CharType)0x52a0, (CharType)0x3067, (CharType)0x30b3,
		(CharType)0x30ed, (CharType)0x30ca, (CharType)0x5909, (CharType)0x7570, (CharType)0x682a, (CharType)0x304c,
		(CharType)0x611f, (CharType)0x67d3, (CharType)0x62e1, (CharType)0x5927, (CharType)0x0020, (CharType)0x007c,
		(CharType)0x0020, (CharType)0x30b9, (CharType)0x30af, (CharType)0x30fc, (CharType)0x30d7, (CharType)0x901f,
		(CharType)0x5831, (CharType)0x0020, (CharType)0x0023, (CharType)0x30ed, (CharType)0x30a4, (CharType)0x30bf,
		(CharType)0x30fc, (CharType)0x0020, (CharType)0x0023, (CharType)0x30b9, (CharType)0x30af, (CharType)0x30fc,
		(CharType)0x30d7, (CharType)0x901f, (CharType)0x5831, (CharType)0x0020, (CharType)0x0023, (CharType)0x9031,
		(CharType)0x520a, (CharType)0x6587, (CharType)0x6625, (CharType)0x0020, (CharType)0x005c, (CharType)0x0022,
		(CharType)0x0046, (CharType)0x0061, (CharType)0x0065, (CharType)0x006e, (CharType)0x005c, (CharType)0x0022,
		(CharType)0x0020, (CharType)0x006f, (CharType)0x0067, (CharType)0x0020, (CharType)0x005c, (CharType)0x0022,
		(CharType)0x0068, (CharType)0x0065, (CharType)0x0072, (CharType)0x0072, (CharType)0x0065, (CharType)0x0067,
		(CharType)0x0075, (CharType)0x0064, (CharType)0x005c, (CharType)0x0022, (CharType)0x0020, (CharType)0x0073,
		(CharType)0x0061, (CharType)0x0020, (CharType)0x0064, (CharType)0x0065, (CharType)0x0020, (CharType)0x0069,
		(CharType)0x0020, (CharType)0x0067, (CharType)0x0061, (CharType)0x006d, (CharType)0x006c, (CharType)0x0065,
		(CharType)0x0020, (CharType)0x0064, (CharType)0x0061, (CharType)0x0067, (CharType)0x0065, (CharType)0x0072,
		(CharType)0x002e, (CharType)0x0020, (CharType)0x0049, (CharType)0x0074, (CharType)0x0027, (CharType)0x0073,
		(CharType)0x0020, (CharType)0x006e, (CharType)0x0065, (CharType)0x0076, (CharType)0x0065, (CharType)0x0072,
		(CharType)0x0020, (CharType)0x0074, (CharType)0x006f, (CharType)0x006f, (CharType)0x0020, (CharType)0x0065,
		(CharType)0x0061, (CharType)0x0072, (CharType)0x006c, (CharType)0x0079, (CharType)0x0020, (CharType)0x0074,
		(CharType)0x006f, (CharType)0x0020, (CharType)0x006c, (CharType)0x0065, (CharType)0x0061, (CharType)0x0072,
		(CharType)0x006e, (CharType)0x0020, (CharType)0x0061, (CharType)0x0020, (CharType)0x006c, (CharType)0x0061,
		(CharType)0x006e, (CharType)0x0067, (CharType)0x0075, (CharType)0x0061, (CharType)0x0067, (CharType)0x0065,
		(CharType)0x002e, (CharType)0x002e, (CharType)0x002e, (CharType)0x0020, (CharType)0x0041, (CharType)0x0075,
		(CharType)0x0072, (CharType)0x00e9, (CharType)0x006c, (CharType)0x0069, (CharType)0x0065, (CharType)0x002e,
		(CharType)0x0000 };
	template <typename CharType>
	inline constexpr const CharType x_u16_unicode_sequence_truth_reverse_endian_storage[] = { (CharType)0x666b,
		(CharType)0xa64f, (CharType)0xaa5b, (CharType)0xe07a, (CharType)0x2c7b, (CharType)0x3900, (CharType)0x6167,
		(CharType)0x1420, (CharType)0x1420, (CharType)0x945e, (CharType)0x555c, (CharType)0xc57f, (CharType)0x164e,
		(CharType)0x4c75, (CharType)0x0230, (CharType)0x0d4e, (CharType)0x0652, (CharType)0xba4e, (CharType)0xcd79,
		(CharType)0x0130, (CharType)0xfd56, (CharType)0x4d7c, (CharType)0x7151, (CharType)0x0c54, (CharType)0x1862,
		(CharType)0x9765, (CharType)0x0230, (CharType)0xc426, (CharType)0xc426, (CharType)0x2827, (CharType)0x2827,
		(CharType)0x0527, (CharType)0x3ed8, (CharType)0x80dd, (CharType)0x3dd8, (CharType)0x02de, (CharType)0x3dd8,
		(CharType)0x2dde, (CharType)0x3dd8, (CharType)0x2cde, (CharType)0x3dd8, (CharType)0x2cde, (CharType)0x3dd8,
		(CharType)0x14de, (CharType)0x3dd8, (CharType)0x14de, (CharType)0x3dd8, (CharType)0x14de, (CharType)0x3cd8,
		(CharType)0xa8df, (CharType)0x3cd8, (CharType)0xa8df, (CharType)0x3dd8, (CharType)0x36dc, (CharType)0x3ed8,
		(CharType)0x37dd, (CharType)0x0d20, (CharType)0x4026, (CharType)0x0ffe, (CharType)0x3dd8, (CharType)0xe0de,
		(CharType)0x3dd8, (CharType)0x4bdc, (CharType)0x3dd8, (CharType)0xa5dc, (CharType)0x3dd8, (CharType)0xa3dc,
		(CharType)0x3dd8, (CharType)0xa5dc, (CharType)0x3dd8, (CharType)0xa3dc, (CharType)0x3cd8, (CharType)0x77df,
		(CharType)0x3cd8, (CharType)0x77df, (CharType)0x3cd8, (CharType)0x77df, (CharType)0x3cd8, (CharType)0x77df,
		(CharType)0x7a00, (CharType)0x6526, (CharType)0x6645, (CharType)0xfdff, (CharType)0xfdff, (CharType)0xc179,
		(CharType)0x6f30, (CharType)0xac30, (CharType)0xe930, (CharType)0xb930, (CharType)0x9230, (CharType)0xdf98,
		(CharType)0x7930, (CharType)0x8930, (CharType)0x8c30, (CharType)0x7e30, (CharType)0x5930, (CharType)0x0230,
		(CharType)0x5d30, (CharType)0x8c30, (CharType)0x6f30, (CharType)0xc179, (CharType)0x9230, (CharType)0xb750,
		(CharType)0x6430, (CharType)0x5130, (CharType)0x7e30, (CharType)0x5b30, (CharType)0x9330, (CharType)0x0230,
		(CharType)0xaf0b, (CharType)0xbe0b, (CharType)0xae0b, (CharType)0xb10b, (CharType)0xbf0b, (CharType)0xa80b,
		(CharType)0xcd0b, (CharType)0xa40b, (CharType)0x2000, (CharType)0xae0b, (CharType)0xca0b, (CharType)0xb40b,
		(CharType)0xbf0b, (CharType)0x950b, (CharType)0xb30b, (CharType)0xbf0b, (CharType)0xb20b, (CharType)0xc70b,
		(CharType)0x2000, (CharType)0xa40b, (CharType)0xae0b, (CharType)0xbf0b, (CharType)0xb40b, (CharType)0xcd0b,
		(CharType)0xae0b, (CharType)0xca0b, (CharType)0xb40b, (CharType)0xbf0b, (CharType)0x2000, (CharType)0xaa0b,
		(CharType)0xcb0b, (CharType)0xb20b, (CharType)0xcd0b, (CharType)0x2000, (CharType)0x870b, (CharType)0xa90b,
		(CharType)0xbf0b, (CharType)0xa40b, (CharType)0xbe0b, (CharType)0xb50b, (CharType)0xa40b, (CharType)0xc10b,
		(CharType)0x2000, (CharType)0x8e0b, (CharType)0x990b, (CharType)0xcd0b, (CharType)0x950b, (CharType)0xc10b,
		(CharType)0xae0b, (CharType)0xcd0b, (CharType)0x2000, (CharType)0x950b, (CharType)0xbe0b, (CharType)0xa30b,
		(CharType)0xcb0b, (CharType)0xae0b, (CharType)0xcd0b, (CharType)0x2c00, (CharType)0x1d04, (CharType)0x3004,
		(CharType)0x2000, (CharType)0x3104, (CharType)0x3504, (CharType)0x4004, (CharType)0x3504, (CharType)0x3304,
		(CharType)0x4304, (CharType)0x2000, (CharType)0x3f04, (CharType)0x4304, (CharType)0x4104, (CharType)0x4204,
		(CharType)0x4b04, (CharType)0x3d04, (CharType)0x3d04, (CharType)0x4b04, (CharType)0x4504, (CharType)0x2000,
		(CharType)0x3204, (CharType)0x3e04, (CharType)0x3b04, (CharType)0x3d04, (CharType)0x2000, (CharType)0xac20,
		(CharType)0x2000, (CharType)0x2306, (CharType)0x4606, (CharType)0x2706, (CharType)0x2000, (CharType)0x4206,
		(CharType)0x2706, (CharType)0x2f06, (CharType)0x3106, (CharType)0x2000, (CharType)0x3906, (CharType)0x4406,
		(CharType)0x4906, (CharType)0x2000, (CharType)0x2306, (CharType)0x4306, (CharType)0x4406, (CharType)0x2000,
		(CharType)0x2706, (CharType)0x4406, (CharType)0x3206, (CharType)0x2c06, (CharType)0x2706, (CharType)0x2c06,
		(CharType)0x2000, (CharType)0x4806, (CharType)0x2000, (CharType)0x4706, (CharType)0x3006, (CharType)0x2706,
		(CharType)0x2000, (CharType)0x4406, (CharType)0x2706, (CharType)0x2000, (CharType)0x4a06, (CharType)0x2406,
		(CharType)0x4406, (CharType)0x4506, (CharType)0x4606, (CharType)0x4a06, (CharType)0x2e00, (CharType)0x2000,
		(CharType)0x4f00, (CharType)0x6e00, (CharType)0x2000, (CharType)0x7400, (CharType)0x6800, (CharType)0x6500,
		(CharType)0x2000, (CharType)0x6f00, (CharType)0x7400, (CharType)0x6800, (CharType)0x6500, (CharType)0x7200,
		(CharType)0x2000, (CharType)0x6800, (CharType)0x6100, (CharType)0x6e00, (CharType)0x6400, (CharType)0x2c00,
		(CharType)0x2000, (CharType)0x7700, (CharType)0x6500, (CharType)0x2000, (CharType)0x6400, (CharType)0x6500,
		(CharType)0x6e00, (CharType)0x6f00, (CharType)0x7500, (CharType)0x6e00, (CharType)0x6300, (CharType)0x6500,
		(CharType)0x2000, (CharType)0x7700, (CharType)0x6900, (CharType)0x7400, (CharType)0x6800, (CharType)0x2000,
		(CharType)0x7200, (CharType)0x6900, (CharType)0x6700, (CharType)0x6800, (CharType)0x7400, (CharType)0x6500,
		(CharType)0x6f00, (CharType)0x7500, (CharType)0x7300, (CharType)0x2000, (CharType)0x6900, (CharType)0x6e00,
		(CharType)0x6400, (CharType)0x6900, (CharType)0x6700, (CharType)0x6e00, (CharType)0x6100, (CharType)0x7400,
		(CharType)0x6900, (CharType)0x6f00, (CharType)0x6e00, (CharType)0x2000, (CharType)0x6100, (CharType)0x6e00,
		(CharType)0x6400, (CharType)0x2000, (CharType)0x6400, (CharType)0x6900, (CharType)0x7300, (CharType)0x6c00,
		(CharType)0x6900, (CharType)0x6b00, (CharType)0x6500, (CharType)0x2000, (CharType)0x6d00, (CharType)0x6500,
		(CharType)0x6e00, (CharType)0x2000, (CharType)0x7700, (CharType)0x6800, (CharType)0x6f00, (CharType)0x2000,
		(CharType)0x6100, (CharType)0x7200, (CharType)0x6500, (CharType)0x2000, (CharType)0x7300, (CharType)0x6f00,
		(CharType)0x2000, (CharType)0x6200, (CharType)0x6500, (CharType)0x6700, (CharType)0x7500, (CharType)0x6900,
		(CharType)0x6c00, (CharType)0x6500, (CharType)0x6400, (CharType)0x2000, (CharType)0x6100, (CharType)0x6e00,
		(CharType)0x6400, (CharType)0x2000, (CharType)0x6400, (CharType)0x6500, (CharType)0x6d00, (CharType)0x6f00,
		(CharType)0x7200, (CharType)0x6100, (CharType)0x6c00, (CharType)0x6900, (CharType)0x7a00, (CharType)0x6500,
		(CharType)0x6400, (CharType)0x2000, (CharType)0x6200, (CharType)0x7900, (CharType)0x2000, (CharType)0x7400,
		(CharType)0x6800, (CharType)0x6500, (CharType)0x2000, (CharType)0x6300, (CharType)0x6800, (CharType)0x6100,
		(CharType)0x7200, (CharType)0x6d00, (CharType)0x7300, (CharType)0x2000, (CharType)0x6f00, (CharType)0x6600,
		(CharType)0x2000, (CharType)0x7000, (CharType)0x6c00, (CharType)0x6500, (CharType)0x6100, (CharType)0x7300,
		(CharType)0x7500, (CharType)0x7200, (CharType)0x6500, (CharType)0x2000, (CharType)0x6f00, (CharType)0x6600,
		(CharType)0x2000, (CharType)0x7400, (CharType)0x6800, (CharType)0x6500, (CharType)0x2000, (CharType)0x6d00,
		(CharType)0x6f00, (CharType)0x6d00, (CharType)0x6500, (CharType)0x6e00, (CharType)0x7400, (CharType)0x2c00,
		(CharType)0x2000, (CharType)0x7300, (CharType)0x6f00, (CharType)0x2000, (CharType)0x6200, (CharType)0x6c00,
		(CharType)0x6900, (CharType)0x6e00, (CharType)0x6400, (CharType)0x6500, (CharType)0x6400, (CharType)0x2000,
		(CharType)0x6200, (CharType)0x7900, (CharType)0x2000, (CharType)0x6400, (CharType)0x6500, (CharType)0x7300,
		(CharType)0x6900, (CharType)0x7200, (CharType)0x6500, (CharType)0x2c00, (CharType)0x2000, (CharType)0x7400,
		(CharType)0x6800, (CharType)0x6100, (CharType)0x7400, (CharType)0x2000, (CharType)0x7400, (CharType)0x6800,
		(CharType)0x6500, (CharType)0x7900, (CharType)0x2000, (CharType)0x6300, (CharType)0x6100, (CharType)0x6e00,
		(CharType)0x6e00, (CharType)0x6f00, (CharType)0x7400, (CharType)0x2000, (CharType)0x6600, (CharType)0x6f00,
		(CharType)0x7200, (CharType)0x6500, (CharType)0x7300, (CharType)0x6500, (CharType)0x6500, (CharType)0x2000,
		(CharType)0x7400, (CharType)0x6800, (CharType)0x6500, (CharType)0x2000, (CharType)0x7000, (CharType)0x6100,
		(CharType)0x6900, (CharType)0x6e00, (CharType)0x2000, (CharType)0x6100, (CharType)0x6e00, (CharType)0x6400,
		(CharType)0x2000, (CharType)0x7400, (CharType)0x7200, (CharType)0x6f00, (CharType)0x7500, (CharType)0x6200,
		(CharType)0x6c00, (CharType)0x6500, (CharType)0x2000, (CharType)0x7400, (CharType)0x6800, (CharType)0x6100,
		(CharType)0x7400, (CharType)0x2000, (CharType)0x6100, (CharType)0x7200, (CharType)0x6500, (CharType)0x2000,
		(CharType)0x6200, (CharType)0x6f00, (CharType)0x7500, (CharType)0x6e00, (CharType)0x6400, (CharType)0x2000,
		(CharType)0x7400, (CharType)0x6f00, (CharType)0x2000, (CharType)0x6500, (CharType)0x6e00, (CharType)0x7300,
		(CharType)0x7500, (CharType)0x6500, (CharType)0x3b00, (CharType)0x2000, (CharType)0x6100, (CharType)0x6e00,
		(CharType)0x6400, (CharType)0x2000, (CharType)0x6500, (CharType)0x7100, (CharType)0x7500, (CharType)0x6100,
		(CharType)0x6c00, (CharType)0x2000, (CharType)0x6200, (CharType)0x6c00, (CharType)0x6100, (CharType)0x6d00,
		(CharType)0x6500, (CharType)0x2000, (CharType)0x6200, (CharType)0x6500, (CharType)0x6c00, (CharType)0x6f00,
		(CharType)0x6e00, (CharType)0x6700, (CharType)0x7300, (CharType)0x2000, (CharType)0x7400, (CharType)0x6f00,
		(CharType)0x2000, (CharType)0x7400, (CharType)0x6800, (CharType)0x6f00, (CharType)0x7300, (CharType)0x6500,
		(CharType)0x2000, (CharType)0x7700, (CharType)0x6800, (CharType)0x6f00, (CharType)0x2000, (CharType)0x6600,
		(CharType)0x6100, (CharType)0x6900, (CharType)0x6c00, (CharType)0x2000, (CharType)0x6900, (CharType)0x6e00,
		(CharType)0x2000, (CharType)0x7400, (CharType)0x6800, (CharType)0x6500, (CharType)0x6900, (CharType)0x7200,
		(CharType)0x2000, (CharType)0x6400, (CharType)0x7500, (CharType)0x7400, (CharType)0x7900, (CharType)0x2000,
		(CharType)0x7400, (CharType)0x6800, (CharType)0x7200, (CharType)0x6f00, (CharType)0x7500, (CharType)0x6700,
		(CharType)0x6800, (CharType)0x2000, (CharType)0x7700, (CharType)0x6500, (CharType)0x6100, (CharType)0x6b00,
		(CharType)0x6e00, (CharType)0x6500, (CharType)0x7300, (CharType)0x7300, (CharType)0x2000, (CharType)0x6f00,
		(CharType)0x6600, (CharType)0x2000, (CharType)0x7700, (CharType)0x6900, (CharType)0x6c00, (CharType)0x6c00,
		(CharType)0x2c00, (CharType)0x2000, (CharType)0x7700, (CharType)0x6800, (CharType)0x6900, (CharType)0x6300,
		(CharType)0x6800, (CharType)0x2000, (CharType)0x6900, (CharType)0x7300, (CharType)0x2000, (CharType)0x7400,
		(CharType)0x6800, (CharType)0x6500, (CharType)0x2000, (CharType)0x7300, (CharType)0x6100, (CharType)0x6d00,
		(CharType)0x6500, (CharType)0x2000, (CharType)0x6100, (CharType)0x7300, (CharType)0x2000, (CharType)0x7300,
		(CharType)0x6100, (CharType)0x7900, (CharType)0x6900, (CharType)0x6e00, (CharType)0x6700, (CharType)0x2000,
		(CharType)0x7400, (CharType)0x6800, (CharType)0x7200, (CharType)0x6f00, (CharType)0x7500, (CharType)0x6700,
		(CharType)0x6800, (CharType)0x2000, (CharType)0x7300, (CharType)0x6800, (CharType)0x7200, (CharType)0x6900,
		(CharType)0x6e00, (CharType)0x6b00, (CharType)0x6900, (CharType)0x6e00, (CharType)0x6700, (CharType)0x2000,
		(CharType)0x6600, (CharType)0x7200, (CharType)0x6f00, (CharType)0x6d00, (CharType)0x2000, (CharType)0x7400,
		(CharType)0x6f00, (CharType)0x6900, (CharType)0x6c00, (CharType)0x2000, (CharType)0x6100, (CharType)0x6e00,
		(CharType)0x6400, (CharType)0x2000, (CharType)0x7000, (CharType)0x6100, (CharType)0x6900, (CharType)0x6e00,
		(CharType)0x2e00, (CharType)0x2000, (CharType)0x5400, (CharType)0x6800, (CharType)0x6500, (CharType)0x7300,
		(CharType)0x6500, (CharType)0x2000, (CharType)0x6300, (CharType)0x6100, (CharType)0x7300, (CharType)0x6500,
		(CharType)0x7300, (CharType)0x2000, (CharType)0x6100, (CharType)0x7200, (CharType)0x6500, (CharType)0x2000,
		(CharType)0x7000, (CharType)0x6500, (CharType)0x7200, (CharType)0x6600, (CharType)0x6500, (CharType)0x6300,
		(CharType)0x7400, (CharType)0x6c00, (CharType)0x7900, (CharType)0x2000, (CharType)0x7300, (CharType)0x6900,
		(CharType)0x6d00, (CharType)0x7000, (CharType)0x6c00, (CharType)0x6500, (CharType)0x2000, (CharType)0x6100,
		(CharType)0x6e00, (CharType)0x6400, (CharType)0x2000, (CharType)0x6500, (CharType)0x6100, (CharType)0x7300,
		(CharType)0x7900, (CharType)0x2000, (CharType)0x7400, (CharType)0x6f00, (CharType)0x2000, (CharType)0x6400,
		(CharType)0x6900, (CharType)0x7300, (CharType)0x7400, (CharType)0x6900, (CharType)0x6e00, (CharType)0x6700,
		(CharType)0x7500, (CharType)0x6900, (CharType)0x7300, (CharType)0x6800, (CharType)0x2e00, (CharType)0x2000,
		(CharType)0x4900, (CharType)0x6e00, (CharType)0x2000, (CharType)0x6100, (CharType)0x2000, (CharType)0x6600,
		(CharType)0x7200, (CharType)0x6500, (CharType)0x6500, (CharType)0x2000, (CharType)0x6800, (CharType)0x6f00,
		(CharType)0x7500, (CharType)0x7200, (CharType)0x2c00, (CharType)0x2000, (CharType)0x7700, (CharType)0x6800,
		(CharType)0x6500, (CharType)0x6e00, (CharType)0x2000, (CharType)0x6f00, (CharType)0x7500, (CharType)0x7200,
		(CharType)0x2000, (CharType)0x7000, (CharType)0x6f00, (CharType)0x7700, (CharType)0x6500, (CharType)0x7200,
		(CharType)0x2000, (CharType)0x6f00, (CharType)0x6600, (CharType)0x2000, (CharType)0x6300, (CharType)0x6800,
		(CharType)0x6f00, (CharType)0x6900, (CharType)0x6300, (CharType)0x6500, (CharType)0x2000, (CharType)0x6900,
		(CharType)0x7300, (CharType)0x2000, (CharType)0x7500, (CharType)0x6e00, (CharType)0x7400, (CharType)0x7200,
		(CharType)0x6100, (CharType)0x6d00, (CharType)0x6d00, (CharType)0x6500, (CharType)0x6c00, (CharType)0x6c00,
		(CharType)0x6500, (CharType)0x6400, (CharType)0x2000, (CharType)0x6100, (CharType)0x6e00, (CharType)0x6400,
		(CharType)0x2000, (CharType)0x7700, (CharType)0x6800, (CharType)0x6500, (CharType)0x6e00, (CharType)0x2000,
		(CharType)0x6e00, (CharType)0x6f00, (CharType)0x7400, (CharType)0x6800, (CharType)0x6900, (CharType)0x6e00,
		(CharType)0x6700, (CharType)0x2000, (CharType)0x7000, (CharType)0x7200, (CharType)0x6500, (CharType)0x7600,
		(CharType)0x6500, (CharType)0x6e00, (CharType)0x7400, (CharType)0x7300, (CharType)0x2000, (CharType)0x6f00,
		(CharType)0x7500, (CharType)0x7200, (CharType)0x2000, (CharType)0x6200, (CharType)0x6500, (CharType)0x6900,
		(CharType)0x6e00, (CharType)0x6700, (CharType)0x2000, (CharType)0x6100, (CharType)0x6200, (CharType)0x6c00,
		(CharType)0x6500, (CharType)0x2000, (CharType)0x7400, (CharType)0x6f00, (CharType)0x2000, (CharType)0x6400,
		(CharType)0x6f00, (CharType)0x2000, (CharType)0x7700, (CharType)0x6800, (CharType)0x6100, (CharType)0x7400,
		(CharType)0x2000, (CharType)0x7700, (CharType)0x6500, (CharType)0x2000, (CharType)0x6c00, (CharType)0x6900,
		(CharType)0x6b00, (CharType)0x6500, (CharType)0x2000, (CharType)0x6200, (CharType)0x6500, (CharType)0x7300,
		(CharType)0x7400, (CharType)0x2c00, (CharType)0x2000, (CharType)0x6500, (CharType)0x7600, (CharType)0x6500,
		(CharType)0x7200, (CharType)0x7900, (CharType)0x2000, (CharType)0x7000, (CharType)0x6c00, (CharType)0x6500,
		(CharType)0x6100, (CharType)0x7300, (CharType)0x7500, (CharType)0x7200, (CharType)0x6500, (CharType)0x2000,
		(CharType)0x6900, (CharType)0x7300, (CharType)0x2000, (CharType)0x7400, (CharType)0x6f00, (CharType)0x2000,
		(CharType)0x6200, (CharType)0x6500, (CharType)0x2000, (CharType)0x7700, (CharType)0x6500, (CharType)0x6c00,
		(CharType)0x6300, (CharType)0x6f00, (CharType)0x6d00, (CharType)0x6500, (CharType)0x6400, (CharType)0x2000,
		(CharType)0x6100, (CharType)0x6e00, (CharType)0x6400, (CharType)0x2000, (CharType)0x6500, (CharType)0x7600,
		(CharType)0x6500, (CharType)0x7200, (CharType)0x7900, (CharType)0x2000, (CharType)0x7000, (CharType)0x6100,
		(CharType)0x6900, (CharType)0x6e00, (CharType)0x2000, (CharType)0x6100, (CharType)0x7600, (CharType)0x6f00,
		(CharType)0x6900, (CharType)0x6400, (CharType)0x6500, (CharType)0x6400, (CharType)0x2e00, (CharType)0x2000,
		(CharType)0x4200, (CharType)0x7500, (CharType)0x7400, (CharType)0x2000, (CharType)0x6900, (CharType)0x6e00,
		(CharType)0x2000, (CharType)0x6300, (CharType)0x6500, (CharType)0x7200, (CharType)0x7400, (CharType)0x6100,
		(CharType)0x6900, (CharType)0x6e00, (CharType)0x2000, (CharType)0x6300, (CharType)0x6900, (CharType)0x7200,
		(CharType)0x6300, (CharType)0x7500, (CharType)0x6d00, (CharType)0x7300, (CharType)0x7400, (CharType)0x6100,
		(CharType)0x6e00, (CharType)0x6300, (CharType)0x6500, (CharType)0x7300, (CharType)0x2000, (CharType)0x6100,
		(CharType)0x6e00, (CharType)0x6400, (CharType)0x2000, (CharType)0x6f00, (CharType)0x7700, (CharType)0x6900,
		(CharType)0x6e00, (CharType)0x6700, (CharType)0x2000, (CharType)0x7400, (CharType)0x6f00, (CharType)0x2000,
		(CharType)0x7400, (CharType)0x6800, (CharType)0x6500, (CharType)0x2000, (CharType)0x6300, (CharType)0x6c00,
		(CharType)0x6100, (CharType)0x6900, (CharType)0x6d00, (CharType)0x7300, (CharType)0x2000, (CharType)0x6f00,
		(CharType)0x6600, (CharType)0x2000, (CharType)0x6400, (CharType)0x7500, (CharType)0x7400, (CharType)0x7900,
		(CharType)0x2000, (CharType)0x6f00, (CharType)0x7200, (CharType)0x2000, (CharType)0x7400, (CharType)0x6800,
		(CharType)0x6500, (CharType)0x2000, (CharType)0x6f00, (CharType)0x6200, (CharType)0x6c00, (CharType)0x6900,
		(CharType)0x6700, (CharType)0x6100, (CharType)0x7400, (CharType)0x6900, (CharType)0x6f00, (CharType)0x6e00,
		(CharType)0x7300, (CharType)0x2000, (CharType)0x6f00, (CharType)0x6600, (CharType)0x2000, (CharType)0x6200,
		(CharType)0x7500, (CharType)0x7300, (CharType)0x6900, (CharType)0x6e00, (CharType)0x6500, (CharType)0x7300,
		(CharType)0x7300, (CharType)0x2000, (CharType)0x6900, (CharType)0x7400, (CharType)0x2000, (CharType)0x7700,
		(CharType)0x6900, (CharType)0x6c00, (CharType)0x6c00, (CharType)0x2000, (CharType)0x6600, (CharType)0x7200,
		(CharType)0x6500, (CharType)0x7100, (CharType)0x7500, (CharType)0x6500, (CharType)0x6e00, (CharType)0x7400,
		(CharType)0x6c00, (CharType)0x7900, (CharType)0x2000, (CharType)0x6f00, (CharType)0x6300, (CharType)0x6300,
		(CharType)0x7500, (CharType)0x7200, (CharType)0x2000, (CharType)0x7400, (CharType)0x6800, (CharType)0x6100,
		(CharType)0x7400, (CharType)0x2000, (CharType)0x7000, (CharType)0x6c00, (CharType)0x6500, (CharType)0x6100,
		(CharType)0x7300, (CharType)0x7500, (CharType)0x7200, (CharType)0x6500, (CharType)0x7300, (CharType)0x2000,
		(CharType)0x6800, (CharType)0x6100, (CharType)0x7600, (CharType)0x6500, (CharType)0x2000, (CharType)0x7400,
		(CharType)0x6f00, (CharType)0x2000, (CharType)0x6200, (CharType)0x6500, (CharType)0x2000, (CharType)0x7200,
		(CharType)0x6500, (CharType)0x7000, (CharType)0x7500, (CharType)0x6400, (CharType)0x6900, (CharType)0x6100,
		(CharType)0x7400, (CharType)0x6500, (CharType)0x6400, (CharType)0x2000, (CharType)0x6100, (CharType)0x6e00,
		(CharType)0x6400, (CharType)0x2000, (CharType)0x6100, (CharType)0x6e00, (CharType)0x6e00, (CharType)0x6f00,
		(CharType)0x7900, (CharType)0x6100, (CharType)0x6e00, (CharType)0x6300, (CharType)0x6500, (CharType)0x7300,
		(CharType)0x2000, (CharType)0x6100, (CharType)0x6300, (CharType)0x6300, (CharType)0x6500, (CharType)0x7000,
		(CharType)0x7400, (CharType)0x6500, (CharType)0x6400, (CharType)0x2e00, (CharType)0x2000, (CharType)0x5400,
		(CharType)0x6800, (CharType)0x6500, (CharType)0x2000, (CharType)0x7700, (CharType)0x6900, (CharType)0x7300,
		(CharType)0x6500, (CharType)0x2000, (CharType)0x6d00, (CharType)0x6100, (CharType)0x6e00, (CharType)0x2000,
		(CharType)0x7400, (CharType)0x6800, (CharType)0x6500, (CharType)0x7200, (CharType)0x6500, (CharType)0x6600,
		(CharType)0x6f00, (CharType)0x7200, (CharType)0x6500, (CharType)0x2000, (CharType)0x6100, (CharType)0x6c00,
		(CharType)0x7700, (CharType)0x6100, (CharType)0x7900, (CharType)0x7300, (CharType)0x2000, (CharType)0x6800,
		(CharType)0x6f00, (CharType)0x6c00, (CharType)0x6400, (CharType)0x7300, (CharType)0x2000, (CharType)0x6900,
		(CharType)0x6e00, (CharType)0x2000, (CharType)0x7400, (CharType)0x6800, (CharType)0x6500, (CharType)0x7300,
		(CharType)0x6500, (CharType)0x2000, (CharType)0x6d00, (CharType)0x6100, (CharType)0x7400, (CharType)0x7400,
		(CharType)0x6500, (CharType)0x7200, (CharType)0x7300, (CharType)0x2000, (CharType)0x7400, (CharType)0x6f00,
		(CharType)0x2000, (CharType)0x7400, (CharType)0x6800, (CharType)0x6900, (CharType)0x7300, (CharType)0x2000,
		(CharType)0x7000, (CharType)0x7200, (CharType)0x6900, (CharType)0x6e00, (CharType)0x6300, (CharType)0x6900,
		(CharType)0x7000, (CharType)0x6c00, (CharType)0x6500, (CharType)0x2000, (CharType)0x6f00, (CharType)0x6600,
		(CharType)0x2000, (CharType)0x7300, (CharType)0x6500, (CharType)0x6c00, (CharType)0x6500, (CharType)0x6300,
		(CharType)0x7400, (CharType)0x6900, (CharType)0x6f00, (CharType)0x6e00, (CharType)0x3a00, (CharType)0x2000,
		(CharType)0x6800, (CharType)0x6500, (CharType)0x2000, (CharType)0x7200, (CharType)0x6500, (CharType)0x6a00,
		(CharType)0x6500, (CharType)0x6300, (CharType)0x7400, (CharType)0x7300, (CharType)0x2000, (CharType)0x7000,
		(CharType)0x6c00, (CharType)0x6500, (CharType)0x6100, (CharType)0x7300, (CharType)0x7500, (CharType)0x7200,
		(CharType)0x6500, (CharType)0x7300, (CharType)0x2000, (CharType)0x7400, (CharType)0x6f00, (CharType)0x2000,
		(CharType)0x7300, (CharType)0x6500, (CharType)0x6300, (CharType)0x7500, (CharType)0x7200, (CharType)0x6500,
		(CharType)0x2000, (CharType)0x6f00, (CharType)0x7400, (CharType)0x6800, (CharType)0x6500, (CharType)0x7200,
		(CharType)0x2000, (CharType)0x6700, (CharType)0x7200, (CharType)0x6500, (CharType)0x6100, (CharType)0x7400,
		(CharType)0x6500, (CharType)0x7200, (CharType)0x2000, (CharType)0x7000, (CharType)0x6c00, (CharType)0x6500,
		(CharType)0x6100, (CharType)0x7300, (CharType)0x7500, (CharType)0x7200, (CharType)0x6500, (CharType)0x7300,
		(CharType)0x2c00, (CharType)0x2000, (CharType)0x6f00, (CharType)0x7200, (CharType)0x2000, (CharType)0x6500,
		(CharType)0x6c00, (CharType)0x7300, (CharType)0x6500, (CharType)0x2000, (CharType)0x6800, (CharType)0x6500,
		(CharType)0x2000, (CharType)0x6500, (CharType)0x6e00, (CharType)0x6400, (CharType)0x7500, (CharType)0x7200,
		(CharType)0x6500, (CharType)0x7300, (CharType)0x2000, (CharType)0x7000, (CharType)0x6100, (CharType)0x6900,
		(CharType)0x6e00, (CharType)0x7300, (CharType)0x2000, (CharType)0x7400, (CharType)0x6f00, (CharType)0x2000,
		(CharType)0x6100, (CharType)0x7600, (CharType)0x6f00, (CharType)0x6900, (CharType)0x6400, (CharType)0x2000,
		(CharType)0x7700, (CharType)0x6f00, (CharType)0x7200, (CharType)0x7300, (CharType)0x6500, (CharType)0x2000,
		(CharType)0x7000, (CharType)0x6100, (CharType)0x6900, (CharType)0x6e00, (CharType)0x7300, (CharType)0x2e00,
		(CharType)0x2000, (CharType)0x24c6, (CharType)0x98b2, (CharType)0x74c7, (CharType)0x2000, (CharType)0x24c6,
		(CharType)0x98b2, (CharType)0x74c7, (CharType)0x8cc1, (CharType)0x1cc1, (CharType)0x2000, (CharType)0xe4b9,
		(CharType)0x7cc7, (CharType)0x74c7, (CharType)0x2000, (CharType)0x24c6, (CharType)0x98b2, (CharType)0x74c7,
		(CharType)0x8cc1, (CharType)0x1cc1, (CharType)0x2000, (CharType)0x00c8, (CharType)0x3cbb, (CharType)0xc0c9,
		(CharType)0xc4b3, (CharType)0x2000, (CharType)0xc8c0, (CharType)0xc0c9, (CharType)0xc4b3, (CharType)0x2000,
		(CharType)0xd0b9, (CharType)0x3cc7, (CharType)0xdcc2, (CharType)0xe0ac, (CharType)0x2000, (CharType)0xc8c0,
		(CharType)0x24b8, (CharType)0x74ba, (CharType)0x2000, (CharType)0x98b2, (CharType)0x2000, (CharType)0xb8c5,
		(CharType)0x1cc8, (CharType)0x98b0, (CharType)0x2000, (CharType)0x24c6, (CharType)0x98b2, (CharType)0x74c7,
		(CharType)0x8cc1, (CharType)0x1cc1, (CharType)0x2e00, (CharType)0x2000, (CharType)0x3052, (CharType)0x955e,
		(CharType)0x2f66, (CharType)0x1162, (CharType)0x3c77, (CharType)0x5e79, (CharType)0x2a59, (CharType)0x7d59,
		(CharType)0x0cff, (CharType)0xd88f, (CharType)0x2f66, (CharType)0x1162, (CharType)0x0c54, (CharType)0x8b4e,
		(CharType)0x3c77, (CharType)0x2a59, (CharType)0xb182, (CharType)0x0230, (CharType)0xa16c, (CharType)0x0967,
		(CharType)0xfb4e, (CharType)0x554f, (CharType)0xdd4f, (CharType)0xc18b, (CharType)0x2875, (CharType)0x864e,
		(CharType)0x2000, (CharType)0x7000, (CharType)0x6900, (CharType)0x7000, (CharType)0x6500, (CharType)0x6e00,
		(CharType)0x7600, (CharType)0x2000, (CharType)0x8476, (CharType)0x7998, (CharType)0xee76, (CharType)0xfd80,
		(CharType)0x2857, (CharType)0x8f96, (CharType)0xbf4f, (CharType)0x004e, (CharType)0x2a4e, (CharType)0x2000,
		(CharType)0x4300, (CharType)0x6f00, (CharType)0x6e00, (CharType)0x6400, (CharType)0x6100, (CharType)0x2000,
		(CharType)0x6500, (CharType)0x6e00, (CharType)0x7600, (CharType)0x6900, (CharType)0x7200, (CharType)0x6f00,
		(CharType)0x6e00, (CharType)0x6d00, (CharType)0x6500, (CharType)0x6e00, (CharType)0x7400, (CharType)0x2000,
		(CharType)0xcc91, (CharType)0xd18d, (CharType)0x778d, (CharType)0x6567, (CharType)0x5553, (CharType)0x4351,
		(CharType)0x4b6d, (CharType)0xd58b, (CharType)0x01ff, (CharType)0xed30, (CharType)0xa430, (CharType)0xbf30,
		(CharType)0xfc30, (CharType)0x188a, (CharType)0x0580, (CharType)0x0130, (CharType)0x855f, (CharType)0x5f6a,
		(CharType)0x1f67, (CharType)0x9395, (CharType)0x6e30, (CharType)0xd130, (CharType)0xfc30, (CharType)0xc630,
		(CharType)0xa330, (CharType)0xfc30, (CharType)0xc253, (CharType)0xa052, (CharType)0x6730, (CharType)0xb330,
		(CharType)0xed30, (CharType)0xca30, (CharType)0x0959, (CharType)0x7075, (CharType)0x2a68, (CharType)0x4c30,
		(CharType)0x1f61, (CharType)0xd367, (CharType)0xe162, (CharType)0x2759, (CharType)0x2000, (CharType)0x7c00,
		(CharType)0x2000, (CharType)0xb930, (CharType)0xaf30, (CharType)0xfc30, (CharType)0xd730, (CharType)0x1f90,
		(CharType)0x3158, (CharType)0x2000, (CharType)0x2300, (CharType)0xed30, (CharType)0xa430, (CharType)0xbf30,
		(CharType)0xfc30, (CharType)0x2000, (CharType)0x2300, (CharType)0xb930, (CharType)0xaf30, (CharType)0xfc30,
		(CharType)0xd730, (CharType)0x1f90, (CharType)0x3158, (CharType)0x2000, (CharType)0x2300, (CharType)0x3190,
		(CharType)0x0a52, (CharType)0x8765, (CharType)0x2566, (CharType)0x2000, (CharType)0x5c00, (CharType)0x2200,
		(CharType)0x4600, (CharType)0x6100, (CharType)0x6500, (CharType)0x6e00, (CharType)0x5c00, (CharType)0x2200,
		(CharType)0x2000, (CharType)0x6f00, (CharType)0x6700, (CharType)0x2000, (CharType)0x5c00, (CharType)0x2200,
		(CharType)0x6800, (CharType)0x6500, (CharType)0x7200, (CharType)0x7200, (CharType)0x6500, (CharType)0x6700,
		(CharType)0x7500, (CharType)0x6400, (CharType)0x5c00, (CharType)0x2200, (CharType)0x2000, (CharType)0x7300,
		(CharType)0x6100, (CharType)0x2000, (CharType)0x6400, (CharType)0x6500, (CharType)0x2000, (CharType)0x6900,
		(CharType)0x2000, (CharType)0x6700, (CharType)0x6100, (CharType)0x6d00, (CharType)0x6c00, (CharType)0x6500,
		(CharType)0x2000, (CharType)0x6400, (CharType)0x6100, (CharType)0x6700, (CharType)0x6500, (CharType)0x7200,
		(CharType)0x2e00, (CharType)0x2000, (CharType)0x4900, (CharType)0x7400, (CharType)0x2700, (CharType)0x7300,
		(CharType)0x2000, (CharType)0x6e00, (CharType)0x6500, (CharType)0x7600, (CharType)0x6500, (CharType)0x7200,
		(CharType)0x2000, (CharType)0x7400, (CharType)0x6f00, (CharType)0x6f00, (CharType)0x2000, (CharType)0x6500,
		(CharType)0x6100, (CharType)0x7200, (CharType)0x6c00, (CharType)0x7900, (CharType)0x2000, (CharType)0x7400,
		(CharType)0x6f00, (CharType)0x2000, (CharType)0x6c00, (CharType)0x6500, (CharType)0x6100, (CharType)0x7200,
		(CharType)0x6e00, (CharType)0x2000, (CharType)0x6100, (CharType)0x2000, (CharType)0x6c00, (CharType)0x6100,
		(CharType)0x6e00, (CharType)0x6700, (CharType)0x7500, (CharType)0x6100, (CharType)0x6700, (CharType)0x6500,
		(CharType)0x2e00, (CharType)0x2e00, (CharType)0x2e00, (CharType)0x2000, (CharType)0x4100, (CharType)0x7500,
		(CharType)0x7200, (CharType)0xe900, (CharType)0x6c00, (CharType)0x6900, (CharType)0x6500, (CharType)0x2e00,
		(CharType)0x0000 };

	template <typename CharType>
	inline constexpr const CharType x_u8_unicode_sequence_truth_native_endian_storage[]
		= { (CharType)0xe6, (CharType)0xad, (CharType)0xa6, (CharType)0xe4, (CharType)0xbe, (CharType)0xa6,
			  (CharType)0xe5, (CharType)0xae, (CharType)0xaa, (CharType)0xe7, (CharType)0xab, (CharType)0xa0,
			  (CharType)0xe7, (CharType)0xac, (CharType)0xac, (CharType)0x39, (CharType)0xe6, (CharType)0x9d,
			  (CharType)0xa1, (CharType)0xe2, (CharType)0x80, (CharType)0x94, (CharType)0xe2, (CharType)0x80,
			  (CharType)0x94, (CharType)0xe5, (CharType)0xba, (CharType)0x94, (CharType)0xe5, (CharType)0xb1,
			  (CharType)0x95, (CharType)0xe7, (CharType)0xbf, (CharType)0x85, (CharType)0xe4, (CharType)0xb8,
			  (CharType)0x96, (CharType)0xe7, (CharType)0x95, (CharType)0x8c, (CharType)0xe3, (CharType)0x80,
			  (CharType)0x82, (CharType)0xe4, (CharType)0xb8, (CharType)0x8d, (CharType)0xe5, (CharType)0x88,
			  (CharType)0x86, (CharType)0xe4, (CharType)0xba, (CharType)0xba, (CharType)0xe7, (CharType)0xa7,
			  (CharType)0x8d, (CharType)0xe3, (CharType)0x80, (CharType)0x81, (CharType)0xe5, (CharType)0x9b,
			  (CharType)0xbd, (CharType)0xe7, (CharType)0xb1, (CharType)0x8d, (CharType)0xe5, (CharType)0x85,
			  (CharType)0xb1, (CharType)0xe5, (CharType)0x90, (CharType)0x8c, (CharType)0xe6, (CharType)0x88,
			  (CharType)0x98, (CharType)0xe6, (CharType)0x96, (CharType)0x97, (CharType)0xe3, (CharType)0x80,
			  (CharType)0x82, (CharType)0xe2, (CharType)0x9b, (CharType)0x84, (CharType)0xe2, (CharType)0x9b,
			  (CharType)0x84, (CharType)0xe2, (CharType)0x9c, (CharType)0xa8, (CharType)0xe2, (CharType)0x9c,
			  (CharType)0xa8, (CharType)0xe2, (CharType)0x9c, (CharType)0x85, (CharType)0xf0, (CharType)0x9f,
			  (CharType)0xa6, (CharType)0x80, (CharType)0xf0, (CharType)0x9f, (CharType)0x98, (CharType)0x82,
			  (CharType)0xf0, (CharType)0x9f, (CharType)0x98, (CharType)0xad, (CharType)0xf0, (CharType)0x9f,
			  (CharType)0x98, (CharType)0xac, (CharType)0xf0, (CharType)0x9f, (CharType)0x98, (CharType)0xac,
			  (CharType)0xf0, (CharType)0x9f, (CharType)0x98, (CharType)0x94, (CharType)0xf0, (CharType)0x9f,
			  (CharType)0x98, (CharType)0x94, (CharType)0xf0, (CharType)0x9f, (CharType)0x98, (CharType)0x94,
			  (CharType)0xf0, (CharType)0x9f, (CharType)0x8e, (CharType)0xa8, (CharType)0xf0, (CharType)0x9f,
			  (CharType)0x8e, (CharType)0xa8, (CharType)0xf0, (CharType)0x9f, (CharType)0x90, (CharType)0xb6,
			  (CharType)0xf0, (CharType)0x9f, (CharType)0xa4, (CharType)0xb7, (CharType)0xe2, (CharType)0x80,
			  (CharType)0x8d, (CharType)0xe2, (CharType)0x99, (CharType)0x80, (CharType)0xef, (CharType)0xb8,
			  (CharType)0x8f, (CharType)0xf0, (CharType)0x9f, (CharType)0x9b, (CharType)0xa0, (CharType)0xf0,
			  (CharType)0x9f, (CharType)0x91, (CharType)0x8b, (CharType)0xf0, (CharType)0x9f, (CharType)0x92,
			  (CharType)0xa5, (CharType)0xf0, (CharType)0x9f, (CharType)0x92, (CharType)0xa3, (CharType)0xf0,
			  (CharType)0x9f, (CharType)0x92, (CharType)0xa5, (CharType)0xf0, (CharType)0x9f, (CharType)0x92,
			  (CharType)0xa3, (CharType)0xf0, (CharType)0x9f, (CharType)0x8d, (CharType)0xb7, (CharType)0xf0,
			  (CharType)0x9f, (CharType)0x8d, (CharType)0xb7, (CharType)0xf0, (CharType)0x9f, (CharType)0x8d,
			  (CharType)0xb7, (CharType)0xf0, (CharType)0x9f, (CharType)0x8d, (CharType)0xb7, (CharType)0x7a,
			  (CharType)0xe2, (CharType)0x99, (CharType)0xa5, (CharType)0xe4, (CharType)0x95, (CharType)0xa6,
			  (CharType)0xef, (CharType)0xbf, (CharType)0xbd, (CharType)0xef, (CharType)0xbf, (CharType)0xbd,
			  (CharType)0xe7, (CharType)0xa7, (CharType)0x81, (CharType)0xe3, (CharType)0x81, (CharType)0xaf,
			  (CharType)0xe3, (CharType)0x82, (CharType)0xac, (CharType)0xe3, (CharType)0x83, (CharType)0xa9,
			  (CharType)0xe3, (CharType)0x82, (CharType)0xb9, (CharType)0xe3, (CharType)0x82, (CharType)0x92,
			  (CharType)0xe9, (CharType)0xa3, (CharType)0x9f, (CharType)0xe3, (CharType)0x81, (CharType)0xb9,
			  (CharType)0xe3, (CharType)0x82, (CharType)0x89, (CharType)0xe3, (CharType)0x82, (CharType)0x8c,
			  (CharType)0xe3, (CharType)0x81, (CharType)0xbe, (CharType)0xe3, (CharType)0x81, (CharType)0x99,
			  (CharType)0xe3, (CharType)0x80, (CharType)0x82, (CharType)0xe3, (CharType)0x81, (CharType)0x9d,
			  (CharType)0xe3, (CharType)0x82, (CharType)0x8c, (CharType)0xe3, (CharType)0x81, (CharType)0xaf,
			  (CharType)0xe7, (CharType)0xa7, (CharType)0x81, (CharType)0xe3, (CharType)0x82, (CharType)0x92,
			  (CharType)0xe5, (CharType)0x82, (CharType)0xb7, (CharType)0xe3, (CharType)0x81, (CharType)0xa4,
			  (CharType)0xe3, (CharType)0x81, (CharType)0x91, (CharType)0xe3, (CharType)0x81, (CharType)0xbe,
			  (CharType)0xe3, (CharType)0x81, (CharType)0x9b, (CharType)0xe3, (CharType)0x82, (CharType)0x93,
			  (CharType)0xe3, (CharType)0x80, (CharType)0x82, (CharType)0xe0, (CharType)0xae, (CharType)0xaf,
			  (CharType)0xe0, (CharType)0xae, (CharType)0xbe, (CharType)0xe0, (CharType)0xae, (CharType)0xae,
			  (CharType)0xe0, (CharType)0xae, (CharType)0xb1, (CharType)0xe0, (CharType)0xae, (CharType)0xbf,
			  (CharType)0xe0, (CharType)0xae, (CharType)0xa8, (CharType)0xe0, (CharType)0xaf, (CharType)0x8d,
			  (CharType)0xe0, (CharType)0xae, (CharType)0xa4, (CharType)0x20, (CharType)0xe0, (CharType)0xae,
			  (CharType)0xae, (CharType)0xe0, (CharType)0xaf, (CharType)0x8a, (CharType)0xe0, (CharType)0xae,
			  (CharType)0xb4, (CharType)0xe0, (CharType)0xae, (CharType)0xbf, (CharType)0xe0, (CharType)0xae,
			  (CharType)0x95, (CharType)0xe0, (CharType)0xae, (CharType)0xb3, (CharType)0xe0, (CharType)0xae,
			  (CharType)0xbf, (CharType)0xe0, (CharType)0xae, (CharType)0xb2, (CharType)0xe0, (CharType)0xaf,
			  (CharType)0x87, (CharType)0x20, (CharType)0xe0, (CharType)0xae, (CharType)0xa4, (CharType)0xe0,
			  (CharType)0xae, (CharType)0xae, (CharType)0xe0, (CharType)0xae, (CharType)0xbf, (CharType)0xe0,
			  (CharType)0xae, (CharType)0xb4, (CharType)0xe0, (CharType)0xaf, (CharType)0x8d, (CharType)0xe0,
			  (CharType)0xae, (CharType)0xae, (CharType)0xe0, (CharType)0xaf, (CharType)0x8a, (CharType)0xe0,
			  (CharType)0xae, (CharType)0xb4, (CharType)0xe0, (CharType)0xae, (CharType)0xbf, (CharType)0x20,
			  (CharType)0xe0, (CharType)0xae, (CharType)0xaa, (CharType)0xe0, (CharType)0xaf, (CharType)0x8b,
			  (CharType)0xe0, (CharType)0xae, (CharType)0xb2, (CharType)0xe0, (CharType)0xaf, (CharType)0x8d,
			  (CharType)0x20, (CharType)0xe0, (CharType)0xae, (CharType)0x87, (CharType)0xe0, (CharType)0xae,
			  (CharType)0xa9, (CharType)0xe0, (CharType)0xae, (CharType)0xbf, (CharType)0xe0, (CharType)0xae,
			  (CharType)0xa4, (CharType)0xe0, (CharType)0xae, (CharType)0xbe, (CharType)0xe0, (CharType)0xae,
			  (CharType)0xb5, (CharType)0xe0, (CharType)0xae, (CharType)0xa4, (CharType)0xe0, (CharType)0xaf,
			  (CharType)0x81, (CharType)0x20, (CharType)0xe0, (CharType)0xae, (CharType)0x8e, (CharType)0xe0,
			  (CharType)0xae, (CharType)0x99, (CharType)0xe0, (CharType)0xaf, (CharType)0x8d, (CharType)0xe0,
			  (CharType)0xae, (CharType)0x95, (CharType)0xe0, (CharType)0xaf, (CharType)0x81, (CharType)0xe0,
			  (CharType)0xae, (CharType)0xae, (CharType)0xe0, (CharType)0xaf, (CharType)0x8d, (CharType)0x20,
			  (CharType)0xe0, (CharType)0xae, (CharType)0x95, (CharType)0xe0, (CharType)0xae, (CharType)0xbe,
			  (CharType)0xe0, (CharType)0xae, (CharType)0xa3, (CharType)0xe0, (CharType)0xaf, (CharType)0x8b,
			  (CharType)0xe0, (CharType)0xae, (CharType)0xae, (CharType)0xe0, (CharType)0xaf, (CharType)0x8d,
			  (CharType)0x2c, (CharType)0xd0, (CharType)0x9d, (CharType)0xd0, (CharType)0xb0, (CharType)0x20,
			  (CharType)0xd0, (CharType)0xb1, (CharType)0xd0, (CharType)0xb5, (CharType)0xd1, (CharType)0x80,
			  (CharType)0xd0, (CharType)0xb5, (CharType)0xd0, (CharType)0xb3, (CharType)0xd1, (CharType)0x83,
			  (CharType)0x20, (CharType)0xd0, (CharType)0xbf, (CharType)0xd1, (CharType)0x83, (CharType)0xd1,
			  (CharType)0x81, (CharType)0xd1, (CharType)0x82, (CharType)0xd1, (CharType)0x8b, (CharType)0xd0,
			  (CharType)0xbd, (CharType)0xd0, (CharType)0xbd, (CharType)0xd1, (CharType)0x8b, (CharType)0xd1,
			  (CharType)0x85, (CharType)0x20, (CharType)0xd0, (CharType)0xb2, (CharType)0xd0, (CharType)0xbe,
			  (CharType)0xd0, (CharType)0xbb, (CharType)0xd0, (CharType)0xbd, (CharType)0x20, (CharType)0xe2,
			  (CharType)0x82, (CharType)0xac, (CharType)0x20, (CharType)0xd8, (CharType)0xa3, (CharType)0xd9,
			  (CharType)0x86, (CharType)0xd8, (CharType)0xa7, (CharType)0x20, (CharType)0xd9, (CharType)0x82,
			  (CharType)0xd8, (CharType)0xa7, (CharType)0xd8, (CharType)0xaf, (CharType)0xd8, (CharType)0xb1,
			  (CharType)0x20, (CharType)0xd8, (CharType)0xb9, (CharType)0xd9, (CharType)0x84, (CharType)0xd9,
			  (CharType)0x89, (CharType)0x20, (CharType)0xd8, (CharType)0xa3, (CharType)0xd9, (CharType)0x83,
			  (CharType)0xd9, (CharType)0x84, (CharType)0x20, (CharType)0xd8, (CharType)0xa7, (CharType)0xd9,
			  (CharType)0x84, (CharType)0xd8, (CharType)0xb2, (CharType)0xd8, (CharType)0xac, (CharType)0xd8,
			  (CharType)0xa7, (CharType)0xd8, (CharType)0xac, (CharType)0x20, (CharType)0xd9, (CharType)0x88,
			  (CharType)0x20, (CharType)0xd9, (CharType)0x87, (CharType)0xd8, (CharType)0xb0, (CharType)0xd8,
			  (CharType)0xa7, (CharType)0x20, (CharType)0xd9, (CharType)0x84, (CharType)0xd8, (CharType)0xa7,
			  (CharType)0x20, (CharType)0xd9, (CharType)0x8a, (CharType)0xd8, (CharType)0xa4, (CharType)0xd9,
			  (CharType)0x84, (CharType)0xd9, (CharType)0x85, (CharType)0xd9, (CharType)0x86, (CharType)0xd9,
			  (CharType)0x8a, (CharType)0x2e, (CharType)0x20, (CharType)0x4f, (CharType)0x6e, (CharType)0x20,
			  (CharType)0x74, (CharType)0x68, (CharType)0x65, (CharType)0x20, (CharType)0x6f, (CharType)0x74,
			  (CharType)0x68, (CharType)0x65, (CharType)0x72, (CharType)0x20, (CharType)0x68, (CharType)0x61,
			  (CharType)0x6e, (CharType)0x64, (CharType)0x2c, (CharType)0x20, (CharType)0x77, (CharType)0x65,
			  (CharType)0x20, (CharType)0x64, (CharType)0x65, (CharType)0x6e, (CharType)0x6f, (CharType)0x75,
			  (CharType)0x6e, (CharType)0x63, (CharType)0x65, (CharType)0x20, (CharType)0x77, (CharType)0x69,
			  (CharType)0x74, (CharType)0x68, (CharType)0x20, (CharType)0x72, (CharType)0x69, (CharType)0x67,
			  (CharType)0x68, (CharType)0x74, (CharType)0x65, (CharType)0x6f, (CharType)0x75, (CharType)0x73,
			  (CharType)0x20, (CharType)0x69, (CharType)0x6e, (CharType)0x64, (CharType)0x69, (CharType)0x67,
			  (CharType)0x6e, (CharType)0x61, (CharType)0x74, (CharType)0x69, (CharType)0x6f, (CharType)0x6e,
			  (CharType)0x20, (CharType)0x61, (CharType)0x6e, (CharType)0x64, (CharType)0x20, (CharType)0x64,
			  (CharType)0x69, (CharType)0x73, (CharType)0x6c, (CharType)0x69, (CharType)0x6b, (CharType)0x65,
			  (CharType)0x20, (CharType)0x6d, (CharType)0x65, (CharType)0x6e, (CharType)0x20, (CharType)0x77,
			  (CharType)0x68, (CharType)0x6f, (CharType)0x20, (CharType)0x61, (CharType)0x72, (CharType)0x65,
			  (CharType)0x20, (CharType)0x73, (CharType)0x6f, (CharType)0x20, (CharType)0x62, (CharType)0x65,
			  (CharType)0x67, (CharType)0x75, (CharType)0x69, (CharType)0x6c, (CharType)0x65, (CharType)0x64,
			  (CharType)0x20, (CharType)0x61, (CharType)0x6e, (CharType)0x64, (CharType)0x20, (CharType)0x64,
			  (CharType)0x65, (CharType)0x6d, (CharType)0x6f, (CharType)0x72, (CharType)0x61, (CharType)0x6c,
			  (CharType)0x69, (CharType)0x7a, (CharType)0x65, (CharType)0x64, (CharType)0x20, (CharType)0x62,
			  (CharType)0x79, (CharType)0x20, (CharType)0x74, (CharType)0x68, (CharType)0x65, (CharType)0x20,
			  (CharType)0x63, (CharType)0x68, (CharType)0x61, (CharType)0x72, (CharType)0x6d, (CharType)0x73,
			  (CharType)0x20, (CharType)0x6f, (CharType)0x66, (CharType)0x20, (CharType)0x70, (CharType)0x6c,
			  (CharType)0x65, (CharType)0x61, (CharType)0x73, (CharType)0x75, (CharType)0x72, (CharType)0x65,
			  (CharType)0x20, (CharType)0x6f, (CharType)0x66, (CharType)0x20, (CharType)0x74, (CharType)0x68,
			  (CharType)0x65, (CharType)0x20, (CharType)0x6d, (CharType)0x6f, (CharType)0x6d, (CharType)0x65,
			  (CharType)0x6e, (CharType)0x74, (CharType)0x2c, (CharType)0x20, (CharType)0x73, (CharType)0x6f,
			  (CharType)0x20, (CharType)0x62, (CharType)0x6c, (CharType)0x69, (CharType)0x6e, (CharType)0x64,
			  (CharType)0x65, (CharType)0x64, (CharType)0x20, (CharType)0x62, (CharType)0x79, (CharType)0x20,
			  (CharType)0x64, (CharType)0x65, (CharType)0x73, (CharType)0x69, (CharType)0x72, (CharType)0x65,
			  (CharType)0x2c, (CharType)0x20, (CharType)0x74, (CharType)0x68, (CharType)0x61, (CharType)0x74,
			  (CharType)0x20, (CharType)0x74, (CharType)0x68, (CharType)0x65, (CharType)0x79, (CharType)0x20,
			  (CharType)0x63, (CharType)0x61, (CharType)0x6e, (CharType)0x6e, (CharType)0x6f, (CharType)0x74,
			  (CharType)0x20, (CharType)0x66, (CharType)0x6f, (CharType)0x72, (CharType)0x65, (CharType)0x73,
			  (CharType)0x65, (CharType)0x65, (CharType)0x20, (CharType)0x74, (CharType)0x68, (CharType)0x65,
			  (CharType)0x20, (CharType)0x70, (CharType)0x61, (CharType)0x69, (CharType)0x6e, (CharType)0x20,
			  (CharType)0x61, (CharType)0x6e, (CharType)0x64, (CharType)0x20, (CharType)0x74, (CharType)0x72,
			  (CharType)0x6f, (CharType)0x75, (CharType)0x62, (CharType)0x6c, (CharType)0x65, (CharType)0x20,
			  (CharType)0x74, (CharType)0x68, (CharType)0x61, (CharType)0x74, (CharType)0x20, (CharType)0x61,
			  (CharType)0x72, (CharType)0x65, (CharType)0x20, (CharType)0x62, (CharType)0x6f, (CharType)0x75,
			  (CharType)0x6e, (CharType)0x64, (CharType)0x20, (CharType)0x74, (CharType)0x6f, (CharType)0x20,
			  (CharType)0x65, (CharType)0x6e, (CharType)0x73, (CharType)0x75, (CharType)0x65, (CharType)0x3b,
			  (CharType)0x20, (CharType)0x61, (CharType)0x6e, (CharType)0x64, (CharType)0x20, (CharType)0x65,
			  (CharType)0x71, (CharType)0x75, (CharType)0x61, (CharType)0x6c, (CharType)0x20, (CharType)0x62,
			  (CharType)0x6c, (CharType)0x61, (CharType)0x6d, (CharType)0x65, (CharType)0x20, (CharType)0x62,
			  (CharType)0x65, (CharType)0x6c, (CharType)0x6f, (CharType)0x6e, (CharType)0x67, (CharType)0x73,
			  (CharType)0x20, (CharType)0x74, (CharType)0x6f, (CharType)0x20, (CharType)0x74, (CharType)0x68,
			  (CharType)0x6f, (CharType)0x73, (CharType)0x65, (CharType)0x20, (CharType)0x77, (CharType)0x68,
			  (CharType)0x6f, (CharType)0x20, (CharType)0x66, (CharType)0x61, (CharType)0x69, (CharType)0x6c,
			  (CharType)0x20, (CharType)0x69, (CharType)0x6e, (CharType)0x20, (CharType)0x74, (CharType)0x68,
			  (CharType)0x65, (CharType)0x69, (CharType)0x72, (CharType)0x20, (CharType)0x64, (CharType)0x75,
			  (CharType)0x74, (CharType)0x79, (CharType)0x20, (CharType)0x74, (CharType)0x68, (CharType)0x72,
			  (CharType)0x6f, (CharType)0x75, (CharType)0x67, (CharType)0x68, (CharType)0x20, (CharType)0x77,
			  (CharType)0x65, (CharType)0x61, (CharType)0x6b, (CharType)0x6e, (CharType)0x65, (CharType)0x73,
			  (CharType)0x73, (CharType)0x20, (CharType)0x6f, (CharType)0x66, (CharType)0x20, (CharType)0x77,
			  (CharType)0x69, (CharType)0x6c, (CharType)0x6c, (CharType)0x2c, (CharType)0x20, (CharType)0x77,
			  (CharType)0x68, (CharType)0x69, (CharType)0x63, (CharType)0x68, (CharType)0x20, (CharType)0x69,
			  (CharType)0x73, (CharType)0x20, (CharType)0x74, (CharType)0x68, (CharType)0x65, (CharType)0x20,
			  (CharType)0x73, (CharType)0x61, (CharType)0x6d, (CharType)0x65, (CharType)0x20, (CharType)0x61,
			  (CharType)0x73, (CharType)0x20, (CharType)0x73, (CharType)0x61, (CharType)0x79, (CharType)0x69,
			  (CharType)0x6e, (CharType)0x67, (CharType)0x20, (CharType)0x74, (CharType)0x68, (CharType)0x72,
			  (CharType)0x6f, (CharType)0x75, (CharType)0x67, (CharType)0x68, (CharType)0x20, (CharType)0x73,
			  (CharType)0x68, (CharType)0x72, (CharType)0x69, (CharType)0x6e, (CharType)0x6b, (CharType)0x69,
			  (CharType)0x6e, (CharType)0x67, (CharType)0x20, (CharType)0x66, (CharType)0x72, (CharType)0x6f,
			  (CharType)0x6d, (CharType)0x20, (CharType)0x74, (CharType)0x6f, (CharType)0x69, (CharType)0x6c,
			  (CharType)0x20, (CharType)0x61, (CharType)0x6e, (CharType)0x64, (CharType)0x20, (CharType)0x70,
			  (CharType)0x61, (CharType)0x69, (CharType)0x6e, (CharType)0x2e, (CharType)0x20, (CharType)0x54,
			  (CharType)0x68, (CharType)0x65, (CharType)0x73, (CharType)0x65, (CharType)0x20, (CharType)0x63,
			  (CharType)0x61, (CharType)0x73, (CharType)0x65, (CharType)0x73, (CharType)0x20, (CharType)0x61,
			  (CharType)0x72, (CharType)0x65, (CharType)0x20, (CharType)0x70, (CharType)0x65, (CharType)0x72,
			  (CharType)0x66, (CharType)0x65, (CharType)0x63, (CharType)0x74, (CharType)0x6c, (CharType)0x79,
			  (CharType)0x20, (CharType)0x73, (CharType)0x69, (CharType)0x6d, (CharType)0x70, (CharType)0x6c,
			  (CharType)0x65, (CharType)0x20, (CharType)0x61, (CharType)0x6e, (CharType)0x64, (CharType)0x20,
			  (CharType)0x65, (CharType)0x61, (CharType)0x73, (CharType)0x79, (CharType)0x20, (CharType)0x74,
			  (CharType)0x6f, (CharType)0x20, (CharType)0x64, (CharType)0x69, (CharType)0x73, (CharType)0x74,
			  (CharType)0x69, (CharType)0x6e, (CharType)0x67, (CharType)0x75, (CharType)0x69, (CharType)0x73,
			  (CharType)0x68, (CharType)0x2e, (CharType)0x20, (CharType)0x49, (CharType)0x6e, (CharType)0x20,
			  (CharType)0x61, (CharType)0x20, (CharType)0x66, (CharType)0x72, (CharType)0x65, (CharType)0x65,
			  (CharType)0x20, (CharType)0x68, (CharType)0x6f, (CharType)0x75, (CharType)0x72, (CharType)0x2c,
			  (CharType)0x20, (CharType)0x77, (CharType)0x68, (CharType)0x65, (CharType)0x6e, (CharType)0x20,
			  (CharType)0x6f, (CharType)0x75, (CharType)0x72, (CharType)0x20, (CharType)0x70, (CharType)0x6f,
			  (CharType)0x77, (CharType)0x65, (CharType)0x72, (CharType)0x20, (CharType)0x6f, (CharType)0x66,
			  (CharType)0x20, (CharType)0x63, (CharType)0x68, (CharType)0x6f, (CharType)0x69, (CharType)0x63,
			  (CharType)0x65, (CharType)0x20, (CharType)0x69, (CharType)0x73, (CharType)0x20, (CharType)0x75,
			  (CharType)0x6e, (CharType)0x74, (CharType)0x72, (CharType)0x61, (CharType)0x6d, (CharType)0x6d,
			  (CharType)0x65, (CharType)0x6c, (CharType)0x6c, (CharType)0x65, (CharType)0x64, (CharType)0x20,
			  (CharType)0x61, (CharType)0x6e, (CharType)0x64, (CharType)0x20, (CharType)0x77, (CharType)0x68,
			  (CharType)0x65, (CharType)0x6e, (CharType)0x20, (CharType)0x6e, (CharType)0x6f, (CharType)0x74,
			  (CharType)0x68, (CharType)0x69, (CharType)0x6e, (CharType)0x67, (CharType)0x20, (CharType)0x70,
			  (CharType)0x72, (CharType)0x65, (CharType)0x76, (CharType)0x65, (CharType)0x6e, (CharType)0x74,
			  (CharType)0x73, (CharType)0x20, (CharType)0x6f, (CharType)0x75, (CharType)0x72, (CharType)0x20,
			  (CharType)0x62, (CharType)0x65, (CharType)0x69, (CharType)0x6e, (CharType)0x67, (CharType)0x20,
			  (CharType)0x61, (CharType)0x62, (CharType)0x6c, (CharType)0x65, (CharType)0x20, (CharType)0x74,
			  (CharType)0x6f, (CharType)0x20, (CharType)0x64, (CharType)0x6f, (CharType)0x20, (CharType)0x77,
			  (CharType)0x68, (CharType)0x61, (CharType)0x74, (CharType)0x20, (CharType)0x77, (CharType)0x65,
			  (CharType)0x20, (CharType)0x6c, (CharType)0x69, (CharType)0x6b, (CharType)0x65, (CharType)0x20,
			  (CharType)0x62, (CharType)0x65, (CharType)0x73, (CharType)0x74, (CharType)0x2c, (CharType)0x20,
			  (CharType)0x65, (CharType)0x76, (CharType)0x65, (CharType)0x72, (CharType)0x79, (CharType)0x20,
			  (CharType)0x70, (CharType)0x6c, (CharType)0x65, (CharType)0x61, (CharType)0x73, (CharType)0x75,
			  (CharType)0x72, (CharType)0x65, (CharType)0x20, (CharType)0x69, (CharType)0x73, (CharType)0x20,
			  (CharType)0x74, (CharType)0x6f, (CharType)0x20, (CharType)0x62, (CharType)0x65, (CharType)0x20,
			  (CharType)0x77, (CharType)0x65, (CharType)0x6c, (CharType)0x63, (CharType)0x6f, (CharType)0x6d,
			  (CharType)0x65, (CharType)0x64, (CharType)0x20, (CharType)0x61, (CharType)0x6e, (CharType)0x64,
			  (CharType)0x20, (CharType)0x65, (CharType)0x76, (CharType)0x65, (CharType)0x72, (CharType)0x79,
			  (CharType)0x20, (CharType)0x70, (CharType)0x61, (CharType)0x69, (CharType)0x6e, (CharType)0x20,
			  (CharType)0x61, (CharType)0x76, (CharType)0x6f, (CharType)0x69, (CharType)0x64, (CharType)0x65,
			  (CharType)0x64, (CharType)0x2e, (CharType)0x20, (CharType)0x42, (CharType)0x75, (CharType)0x74,
			  (CharType)0x20, (CharType)0x69, (CharType)0x6e, (CharType)0x20, (CharType)0x63, (CharType)0x65,
			  (CharType)0x72, (CharType)0x74, (CharType)0x61, (CharType)0x69, (CharType)0x6e, (CharType)0x20,
			  (CharType)0x63, (CharType)0x69, (CharType)0x72, (CharType)0x63, (CharType)0x75, (CharType)0x6d,
			  (CharType)0x73, (CharType)0x74, (CharType)0x61, (CharType)0x6e, (CharType)0x63, (CharType)0x65,
			  (CharType)0x73, (CharType)0x20, (CharType)0x61, (CharType)0x6e, (CharType)0x64, (CharType)0x20,
			  (CharType)0x6f, (CharType)0x77, (CharType)0x69, (CharType)0x6e, (CharType)0x67, (CharType)0x20,
			  (CharType)0x74, (CharType)0x6f, (CharType)0x20, (CharType)0x74, (CharType)0x68, (CharType)0x65,
			  (CharType)0x20, (CharType)0x63, (CharType)0x6c, (CharType)0x61, (CharType)0x69, (CharType)0x6d,
			  (CharType)0x73, (CharType)0x20, (CharType)0x6f, (CharType)0x66, (CharType)0x20, (CharType)0x64,
			  (CharType)0x75, (CharType)0x74, (CharType)0x79, (CharType)0x20, (CharType)0x6f, (CharType)0x72,
			  (CharType)0x20, (CharType)0x74, (CharType)0x68, (CharType)0x65, (CharType)0x20, (CharType)0x6f,
			  (CharType)0x62, (CharType)0x6c, (CharType)0x69, (CharType)0x67, (CharType)0x61, (CharType)0x74,
			  (CharType)0x69, (CharType)0x6f, (CharType)0x6e, (CharType)0x73, (CharType)0x20, (CharType)0x6f,
			  (CharType)0x66, (CharType)0x20, (CharType)0x62, (CharType)0x75, (CharType)0x73, (CharType)0x69,
			  (CharType)0x6e, (CharType)0x65, (CharType)0x73, (CharType)0x73, (CharType)0x20, (CharType)0x69,
			  (CharType)0x74, (CharType)0x20, (CharType)0x77, (CharType)0x69, (CharType)0x6c, (CharType)0x6c,
			  (CharType)0x20, (CharType)0x66, (CharType)0x72, (CharType)0x65, (CharType)0x71, (CharType)0x75,
			  (CharType)0x65, (CharType)0x6e, (CharType)0x74, (CharType)0x6c, (CharType)0x79, (CharType)0x20,
			  (CharType)0x6f, (CharType)0x63, (CharType)0x63, (CharType)0x75, (CharType)0x72, (CharType)0x20,
			  (CharType)0x74, (CharType)0x68, (CharType)0x61, (CharType)0x74, (CharType)0x20, (CharType)0x70,
			  (CharType)0x6c, (CharType)0x65, (CharType)0x61, (CharType)0x73, (CharType)0x75, (CharType)0x72,
			  (CharType)0x65, (CharType)0x73, (CharType)0x20, (CharType)0x68, (CharType)0x61, (CharType)0x76,
			  (CharType)0x65, (CharType)0x20, (CharType)0x74, (CharType)0x6f, (CharType)0x20, (CharType)0x62,
			  (CharType)0x65, (CharType)0x20, (CharType)0x72, (CharType)0x65, (CharType)0x70, (CharType)0x75,
			  (CharType)0x64, (CharType)0x69, (CharType)0x61, (CharType)0x74, (CharType)0x65, (CharType)0x64,
			  (CharType)0x20, (CharType)0x61, (CharType)0x6e, (CharType)0x64, (CharType)0x20, (CharType)0x61,
			  (CharType)0x6e, (CharType)0x6e, (CharType)0x6f, (CharType)0x79, (CharType)0x61, (CharType)0x6e,
			  (CharType)0x63, (CharType)0x65, (CharType)0x73, (CharType)0x20, (CharType)0x61, (CharType)0x63,
			  (CharType)0x63, (CharType)0x65, (CharType)0x70, (CharType)0x74, (CharType)0x65, (CharType)0x64,
			  (CharType)0x2e, (CharType)0x20, (CharType)0x54, (CharType)0x68, (CharType)0x65, (CharType)0x20,
			  (CharType)0x77, (CharType)0x69, (CharType)0x73, (CharType)0x65, (CharType)0x20, (CharType)0x6d,
			  (CharType)0x61, (CharType)0x6e, (CharType)0x20, (CharType)0x74, (CharType)0x68, (CharType)0x65,
			  (CharType)0x72, (CharType)0x65, (CharType)0x66, (CharType)0x6f, (CharType)0x72, (CharType)0x65,
			  (CharType)0x20, (CharType)0x61, (CharType)0x6c, (CharType)0x77, (CharType)0x61, (CharType)0x79,
			  (CharType)0x73, (CharType)0x20, (CharType)0x68, (CharType)0x6f, (CharType)0x6c, (CharType)0x64,
			  (CharType)0x73, (CharType)0x20, (CharType)0x69, (CharType)0x6e, (CharType)0x20, (CharType)0x74,
			  (CharType)0x68, (CharType)0x65, (CharType)0x73, (CharType)0x65, (CharType)0x20, (CharType)0x6d,
			  (CharType)0x61, (CharType)0x74, (CharType)0x74, (CharType)0x65, (CharType)0x72, (CharType)0x73,
			  (CharType)0x20, (CharType)0x74, (CharType)0x6f, (CharType)0x20, (CharType)0x74, (CharType)0x68,
			  (CharType)0x69, (CharType)0x73, (CharType)0x20, (CharType)0x70, (CharType)0x72, (CharType)0x69,
			  (CharType)0x6e, (CharType)0x63, (CharType)0x69, (CharType)0x70, (CharType)0x6c, (CharType)0x65,
			  (CharType)0x20, (CharType)0x6f, (CharType)0x66, (CharType)0x20, (CharType)0x73, (CharType)0x65,
			  (CharType)0x6c, (CharType)0x65, (CharType)0x63, (CharType)0x74, (CharType)0x69, (CharType)0x6f,
			  (CharType)0x6e, (CharType)0x3a, (CharType)0x20, (CharType)0x68, (CharType)0x65, (CharType)0x20,
			  (CharType)0x72, (CharType)0x65, (CharType)0x6a, (CharType)0x65, (CharType)0x63, (CharType)0x74,
			  (CharType)0x73, (CharType)0x20, (CharType)0x70, (CharType)0x6c, (CharType)0x65, (CharType)0x61,
			  (CharType)0x73, (CharType)0x75, (CharType)0x72, (CharType)0x65, (CharType)0x73, (CharType)0x20,
			  (CharType)0x74, (CharType)0x6f, (CharType)0x20, (CharType)0x73, (CharType)0x65, (CharType)0x63,
			  (CharType)0x75, (CharType)0x72, (CharType)0x65, (CharType)0x20, (CharType)0x6f, (CharType)0x74,
			  (CharType)0x68, (CharType)0x65, (CharType)0x72, (CharType)0x20, (CharType)0x67, (CharType)0x72,
			  (CharType)0x65, (CharType)0x61, (CharType)0x74, (CharType)0x65, (CharType)0x72, (CharType)0x20,
			  (CharType)0x70, (CharType)0x6c, (CharType)0x65, (CharType)0x61, (CharType)0x73, (CharType)0x75,
			  (CharType)0x72, (CharType)0x65, (CharType)0x73, (CharType)0x2c, (CharType)0x20, (CharType)0x6f,
			  (CharType)0x72, (CharType)0x20, (CharType)0x65, (CharType)0x6c, (CharType)0x73, (CharType)0x65,
			  (CharType)0x20, (CharType)0x68, (CharType)0x65, (CharType)0x20, (CharType)0x65, (CharType)0x6e,
			  (CharType)0x64, (CharType)0x75, (CharType)0x72, (CharType)0x65, (CharType)0x73, (CharType)0x20,
			  (CharType)0x70, (CharType)0x61, (CharType)0x69, (CharType)0x6e, (CharType)0x73, (CharType)0x20,
			  (CharType)0x74, (CharType)0x6f, (CharType)0x20, (CharType)0x61, (CharType)0x76, (CharType)0x6f,
			  (CharType)0x69, (CharType)0x64, (CharType)0x20, (CharType)0x77, (CharType)0x6f, (CharType)0x72,
			  (CharType)0x73, (CharType)0x65, (CharType)0x20, (CharType)0x70, (CharType)0x61, (CharType)0x69,
			  (CharType)0x6e, (CharType)0x73, (CharType)0x2e, (CharType)0x20, (CharType)0xec, (CharType)0x98,
			  (CharType)0xa4, (CharType)0xeb, (CharType)0x8a, (CharType)0x98, (CharType)0xec, (CharType)0x9d,
			  (CharType)0xb4, (CharType)0x20, (CharType)0xec, (CharType)0x98, (CharType)0xa4, (CharType)0xeb,
			  (CharType)0x8a, (CharType)0x98, (CharType)0xec, (CharType)0x9d, (CharType)0xb4, (CharType)0xec,
			  (CharType)0x86, (CharType)0x8c, (CharType)0xec, (CharType)0x84, (CharType)0x9c, (CharType)0x20,
			  (CharType)0xeb, (CharType)0xa7, (CharType)0xa4, (CharType)0xec, (CharType)0x9d, (CharType)0xbc,
			  (CharType)0xec, (CharType)0x9d, (CharType)0xb4, (CharType)0x20, (CharType)0xec, (CharType)0x98,
			  (CharType)0xa4, (CharType)0xeb, (CharType)0x8a, (CharType)0x98, (CharType)0xec, (CharType)0x9d,
			  (CharType)0xb4, (CharType)0xec, (CharType)0x86, (CharType)0x8c, (CharType)0xec, (CharType)0x84,
			  (CharType)0x9c, (CharType)0x20, (CharType)0xec, (CharType)0xa0, (CharType)0x80, (CharType)0xeb,
			  (CharType)0xac, (CharType)0xbc, (CharType)0xec, (CharType)0xa7, (CharType)0x80, (CharType)0xeb,
			  (CharType)0x8f, (CharType)0x84, (CharType)0x20, (CharType)0xec, (CharType)0x83, (CharType)0x88,
			  (CharType)0xec, (CharType)0xa7, (CharType)0x80, (CharType)0xeb, (CharType)0x8f, (CharType)0x84,
			  (CharType)0x20, (CharType)0xeb, (CharType)0xa7, (CharType)0x90, (CharType)0xec, (CharType)0x9c,
			  (CharType)0xbc, (CharType)0xec, (CharType)0x8b, (CharType)0x9c, (CharType)0xea, (CharType)0xb3,
			  (CharType)0xa0, (CharType)0x20, (CharType)0xec, (CharType)0x83, (CharType)0x88, (CharType)0xeb,
			  (CharType)0xa0, (CharType)0xa4, (CharType)0xeb, (CharType)0xa9, (CharType)0xb4, (CharType)0x20,
			  (CharType)0xeb, (CharType)0x8a, (CharType)0x98, (CharType)0x20, (CharType)0xec, (CharType)0x96,
			  (CharType)0xb8, (CharType)0xec, (CharType)0xa0, (CharType)0x9c, (CharType)0xeb, (CharType)0x82,
			  (CharType)0x98, (CharType)0x20, (CharType)0xec, (CharType)0x98, (CharType)0xa4, (CharType)0xeb,
			  (CharType)0x8a, (CharType)0x98, (CharType)0xec, (CharType)0x9d, (CharType)0xb4, (CharType)0xec,
			  (CharType)0x86, (CharType)0x8c, (CharType)0xec, (CharType)0x84, (CharType)0x9c, (CharType)0x2e,
			  (CharType)0x20, (CharType)0xe5, (CharType)0x88, (CharType)0xb0, (CharType)0xe5, (CharType)0xba,
			  (CharType)0x95, (CharType)0xe6, (CharType)0x98, (CharType)0xaf, (CharType)0xe6, (CharType)0x88,
			  (CharType)0x91, (CharType)0xe7, (CharType)0x9c, (CharType)0xbc, (CharType)0xe7, (CharType)0xa5,
			  (CharType)0x9e, (CharType)0xe5, (CharType)0xa4, (CharType)0xaa, (CharType)0xe5, (CharType)0xa5,
			  (CharType)0xbd, (CharType)0xef, (CharType)0xbc, (CharType)0x8c, (CharType)0xe8, (CharType)0xbf,
			  (CharType)0x98, (CharType)0xe6, (CharType)0x98, (CharType)0xaf, (CharType)0xe6, (CharType)0x88,
			  (CharType)0x91, (CharType)0xe5, (CharType)0x90, (CharType)0x8c, (CharType)0xe4, (CharType)0xba,
			  (CharType)0x8b, (CharType)0xe7, (CharType)0x9c, (CharType)0xbc, (CharType)0xe5, (CharType)0xa4,
			  (CharType)0xaa, (CharType)0xe8, (CharType)0x8a, (CharType)0xb1, (CharType)0xe3, (CharType)0x80,
			  (CharType)0x82, (CharType)0xe6, (CharType)0xb2, (CharType)0xa1, (CharType)0xe6, (CharType)0x9c,
			  (CharType)0x89, (CharType)0xe4, (CharType)0xbb, (CharType)0xbb, (CharType)0xe4, (CharType)0xbd,
			  (CharType)0x95, (CharType)0xe4, (CharType)0xbf, (CharType)0x9d, (CharType)0xe8, (CharType)0xaf,
			  (CharType)0x81, (CharType)0xe7, (CharType)0x94, (CharType)0xa8, (CharType)0xe4, (CharType)0xba,
			  (CharType)0x86, (CharType)0x20, (CharType)0x70, (CharType)0x69, (CharType)0x70, (CharType)0x65,
			  (CharType)0x6e, (CharType)0x76, (CharType)0x20, (CharType)0xe7, (CharType)0x9a, (CharType)0x84,
			  (CharType)0xe9, (CharType)0xa1, (CharType)0xb9, (CharType)0xe7, (CharType)0x9b, (CharType)0xae,
			  (CharType)0xe8, (CharType)0x83, (CharType)0xbd, (CharType)0xe5, (CharType)0x9c, (CharType)0xa8,
			  (CharType)0xe9, (CharType)0x9a, (CharType)0x8f, (CharType)0xe4, (CharType)0xbe, (CharType)0xbf,
			  (CharType)0xe4, (CharType)0xb8, (CharType)0x80, (CharType)0xe4, (CharType)0xb8, (CharType)0xaa,
			  (CharType)0x20, (CharType)0x43, (CharType)0x6f, (CharType)0x6e, (CharType)0x64, (CharType)0x61,
			  (CharType)0x20, (CharType)0x65, (CharType)0x6e, (CharType)0x76, (CharType)0x69, (CharType)0x72,
			  (CharType)0x6f, (CharType)0x6e, (CharType)0x6d, (CharType)0x65, (CharType)0x6e, (CharType)0x74,
			  (CharType)0x20, (CharType)0xe9, (CharType)0x87, (CharType)0x8c, (CharType)0xe8, (CharType)0xb7,
			  (CharType)0x91, (CharType)0xe8, (CharType)0xb5, (CharType)0xb7, (CharType)0xe6, (CharType)0x9d,
			  (CharType)0xa5, (CharType)0xe5, (CharType)0x8d, (CharType)0x95, (CharType)0xe5, (CharType)0x85,
			  (CharType)0x83, (CharType)0xe6, (CharType)0xb5, (CharType)0x8b, (CharType)0xe8, (CharType)0xaf,
			  (CharType)0x95, (CharType)0xef, (CharType)0xbc, (CharType)0x81, (CharType)0xe3, (CharType)0x83,
			  (CharType)0xad, (CharType)0xe3, (CharType)0x82, (CharType)0xa4, (CharType)0xe3, (CharType)0x82,
			  (CharType)0xbf, (CharType)0xe3, (CharType)0x83, (CharType)0xbc, (CharType)0xe8, (CharType)0xa8,
			  (CharType)0x98, (CharType)0xe8, (CharType)0x80, (CharType)0x85, (CharType)0xe3, (CharType)0x80,
			  (CharType)0x81, (CharType)0xe5, (CharType)0xbe, (CharType)0x85, (CharType)0xe6, (CharType)0xa9,
			  (CharType)0x9f, (CharType)0xe6, (CharType)0x9c, (CharType)0x9f, (CharType)0xe9, (CharType)0x96,
			  (CharType)0x93, (CharType)0xe3, (CharType)0x81, (CharType)0xae, (CharType)0xe3, (CharType)0x83,
			  (CharType)0x91, (CharType)0xe3, (CharType)0x83, (CharType)0xbc, (CharType)0xe3, (CharType)0x83,
			  (CharType)0x86, (CharType)0xe3, (CharType)0x82, (CharType)0xa3, (CharType)0xe3, (CharType)0x83,
			  (CharType)0xbc, (CharType)0xe5, (CharType)0x8f, (CharType)0x82, (CharType)0xe5, (CharType)0x8a,
			  (CharType)0xa0, (CharType)0xe3, (CharType)0x81, (CharType)0xa7, (CharType)0xe3, (CharType)0x82,
			  (CharType)0xb3, (CharType)0xe3, (CharType)0x83, (CharType)0xad, (CharType)0xe3, (CharType)0x83,
			  (CharType)0x8a, (CharType)0xe5, (CharType)0xa4, (CharType)0x89, (CharType)0xe7, (CharType)0x95,
			  (CharType)0xb0, (CharType)0xe6, (CharType)0xa0, (CharType)0xaa, (CharType)0xe3, (CharType)0x81,
			  (CharType)0x8c, (CharType)0xe6, (CharType)0x84, (CharType)0x9f, (CharType)0xe6, (CharType)0x9f,
			  (CharType)0x93, (CharType)0xe6, (CharType)0x8b, (CharType)0xa1, (CharType)0xe5, (CharType)0xa4,
			  (CharType)0xa7, (CharType)0x20, (CharType)0x7c, (CharType)0x20, (CharType)0xe3, (CharType)0x82,
			  (CharType)0xb9, (CharType)0xe3, (CharType)0x82, (CharType)0xaf, (CharType)0xe3, (CharType)0x83,
			  (CharType)0xbc, (CharType)0xe3, (CharType)0x83, (CharType)0x97, (CharType)0xe9, (CharType)0x80,
			  (CharType)0x9f, (CharType)0xe5, (CharType)0xa0, (CharType)0xb1, (CharType)0x20, (CharType)0x23,
			  (CharType)0xe3, (CharType)0x83, (CharType)0xad, (CharType)0xe3, (CharType)0x82, (CharType)0xa4,
			  (CharType)0xe3, (CharType)0x82, (CharType)0xbf, (CharType)0xe3, (CharType)0x83, (CharType)0xbc,
			  (CharType)0x20, (CharType)0x23, (CharType)0xe3, (CharType)0x82, (CharType)0xb9, (CharType)0xe3,
			  (CharType)0x82, (CharType)0xaf, (CharType)0xe3, (CharType)0x83, (CharType)0xbc, (CharType)0xe3,
			  (CharType)0x83, (CharType)0x97, (CharType)0xe9, (CharType)0x80, (CharType)0x9f, (CharType)0xe5,
			  (CharType)0xa0, (CharType)0xb1, (CharType)0x20, (CharType)0x23, (CharType)0xe9, (CharType)0x80,
			  (CharType)0xb1, (CharType)0xe5, (CharType)0x88, (CharType)0x8a, (CharType)0xe6, (CharType)0x96,
			  (CharType)0x87, (CharType)0xe6, (CharType)0x98, (CharType)0xa5, (CharType)0x20, (CharType)0x5c,
			  (CharType)0x22, (CharType)0x46, (CharType)0x61, (CharType)0x65, (CharType)0x6e, (CharType)0x5c,
			  (CharType)0x22, (CharType)0x20, (CharType)0x6f, (CharType)0x67, (CharType)0x20, (CharType)0x5c,
			  (CharType)0x22, (CharType)0x68, (CharType)0x65, (CharType)0x72, (CharType)0x72, (CharType)0x65,
			  (CharType)0x67, (CharType)0x75, (CharType)0x64, (CharType)0x5c, (CharType)0x22, (CharType)0x20,
			  (CharType)0x73, (CharType)0x61, (CharType)0x20, (CharType)0x64, (CharType)0x65, (CharType)0x20,
			  (CharType)0x69, (CharType)0x20, (CharType)0x67, (CharType)0x61, (CharType)0x6d, (CharType)0x6c,
			  (CharType)0x65, (CharType)0x20, (CharType)0x64, (CharType)0x61, (CharType)0x67, (CharType)0x65,
			  (CharType)0x72, (CharType)0x2e, (CharType)0x20, (CharType)0x49, (CharType)0x74, (CharType)0x27,
			  (CharType)0x73, (CharType)0x20, (CharType)0x6e, (CharType)0x65, (CharType)0x76, (CharType)0x65,
			  (CharType)0x72, (CharType)0x20, (CharType)0x74, (CharType)0x6f, (CharType)0x6f, (CharType)0x20,
			  (CharType)0x65, (CharType)0x61, (CharType)0x72, (CharType)0x6c, (CharType)0x79, (CharType)0x20,
			  (CharType)0x74, (CharType)0x6f, (CharType)0x20, (CharType)0x6c, (CharType)0x65, (CharType)0x61,
			  (CharType)0x72, (CharType)0x6e, (CharType)0x20, (CharType)0x61, (CharType)0x20, (CharType)0x6c,
			  (CharType)0x61, (CharType)0x6e, (CharType)0x67, (CharType)0x75, (CharType)0x61, (CharType)0x67,
			  (CharType)0x65, (CharType)0x2e, (CharType)0x2e, (CharType)0x2e, (CharType)0x20, (CharType)0x41,
			  (CharType)0x75, (CharType)0x72, (CharType)0xc3, (CharType)0xa9, (CharType)0x6c, (CharType)0x69,
			  (CharType)0x65, (CharType)0x2e, (CharType)0x00 };
	inline constexpr std::size_t x_u8_unicode_sequence_truth_native_endian_storage_size
		= sizeof(x_u8_unicode_sequence_truth_native_endian_storage<char>);


	inline constexpr const std::basic_string_view<char32_t> u32_unicode_sequence_truth_native_endian
		= x_u32_unicode_sequence_truth_native_endian_storage<char32_t>;
	inline constexpr const std::basic_string_view<char32_t> u32_unicode_sequence_truth_big_endian
		= ztd::text::endian::native == ztd::text::endian::big
		? x_u32_unicode_sequence_truth_native_endian_storage<char32_t>
		: x_u32_unicode_sequence_truth_reverse_endian_storage<char32_t>;
	inline constexpr const std::basic_string_view<char32_t> u32_unicode_sequence_truth_little_endian
		= ztd::text::endian::native == ztd::text::endian::little
		? x_u32_unicode_sequence_truth_native_endian_storage<char32_t>
		: x_u32_unicode_sequence_truth_reverse_endian_storage<char32_t>;

	inline constexpr const std::basic_string_view<char16_t> u16_unicode_sequence_truth_native_endian
		= x_u16_unicode_sequence_truth_native_endian_storage<char16_t>;
	inline constexpr const std::basic_string_view<char16_t> u16_unicode_sequence_truth_big_endian
		= ztd::text::endian::native == ztd::text::endian::big
		? x_u16_unicode_sequence_truth_native_endian_storage<char16_t>
		: x_u16_unicode_sequence_truth_reverse_endian_storage<char16_t>;
	inline constexpr const std::basic_string_view<char16_t> u16_unicode_sequence_truth_little_endian
		= ztd::text::endian::native == ztd::text::endian::little
		? x_u16_unicode_sequence_truth_native_endian_storage<char16_t>
		: x_u16_unicode_sequence_truth_reverse_endian_storage<char16_t>;

	inline constexpr const std::basic_string_view<ztd::text::uchar8_t> u8_unicode_sequence_truth_native_endian
		= x_u8_unicode_sequence_truth_native_endian_storage<ztd::text::uchar8_t>;
	inline constexpr const std::basic_string_view<ztd::text::uchar8_t> u8_unicode_sequence_truth_big_endian
		= u8_unicode_sequence_truth_native_endian;
	inline constexpr const std::basic_string_view<ztd::text::uchar8_t> u8_unicode_sequence_truth_little_endian
		= u8_unicode_sequence_truth_native_endian;

	inline constexpr const std::basic_string_view<wchar_t> w_unicode_sequence_truth_native_endian
		= ((sizeof(wchar_t) * CHAR_BIT) >= 32)
		? x_u32_unicode_sequence_truth_native_endian_storage<wchar_t>
		: ((sizeof(wchar_t) * CHAR_BIT >= 16) ? x_u16_unicode_sequence_truth_native_endian_storage<wchar_t>
			                                 : x_u8_unicode_sequence_truth_native_endian_storage<wchar_t>);
	inline constexpr const std::basic_string_view<wchar_t> w_unicode_sequence_truth_big_endian
		= ((sizeof(wchar_t) * CHAR_BIT) >= 32)
		? (ztd::text::endian::native == ztd::text::endian::big
			     ? x_u32_unicode_sequence_truth_native_endian_storage<wchar_t>
			     : x_u32_unicode_sequence_truth_reverse_endian_storage<wchar_t>)
		: ((sizeof(wchar_t) * CHAR_BIT >= 16) ? (ztd::text::endian::native == ztd::text::endian::big
			        ? x_u16_unicode_sequence_truth_native_endian_storage<wchar_t>
			        : x_u16_unicode_sequence_truth_reverse_endian_storage<wchar_t>)
			                                 : x_u8_unicode_sequence_truth_native_endian_storage<wchar_t>);
	inline constexpr const std::basic_string_view<wchar_t> w_unicode_sequence_truth_little_endian
		= ((sizeof(wchar_t) * CHAR_BIT) >= 32)
		? (ztd::text::endian::native == ztd::text::endian::little
			     ? x_u32_unicode_sequence_truth_native_endian_storage<wchar_t>
			     : x_u32_unicode_sequence_truth_reverse_endian_storage<wchar_t>)
		: ((sizeof(wchar_t) * CHAR_BIT >= 16) ? (ztd::text::endian::native == ztd::text::endian::little
			        ? x_u16_unicode_sequence_truth_native_endian_storage<wchar_t>
			        : x_u16_unicode_sequence_truth_reverse_endian_storage<wchar_t>)
			                                 : x_u8_unicode_sequence_truth_native_endian_storage<wchar_t>);

	inline constexpr const std::basic_string_view<char> unicode_sequence_truth_native_endian
		= x_u8_unicode_sequence_truth_native_endian_storage<char>;
	inline constexpr const std::basic_string_view<char> unicode_sequence_truth_big_endian
		= unicode_sequence_truth_native_endian;
	inline constexpr const std::basic_string_view<char> unicode_sequence_truth_little_endian
		= unicode_sequence_truth_native_endian;

	inline const ztd::text::span<const std::byte> u32_unicode_sequence_bytes_truth_native_endian
		= ztd::text::tests::as_bytes(ztd::text::tests::u32_unicode_sequence_truth_native_endian);
	inline const ztd::text::span<const std::byte> u16_unicode_sequence_bytes_truth_native_endian
		= ztd::text::tests::as_bytes(ztd::text::tests::u16_unicode_sequence_truth_native_endian);
	inline const ztd::text::span<const std::byte> u8_unicode_sequence_bytes_truth_native_endian
		= ztd::text::tests::as_bytes(ztd::text::tests::u8_unicode_sequence_truth_native_endian);
	inline const ztd::text::span<const std::byte> w_unicode_sequence_bytes_truth_native_endian
		= ztd::text::tests::as_bytes(ztd::text::tests::w_unicode_sequence_truth_native_endian);
	inline constexpr ztd::text::span<const std::byte> unicode_sequence_bytes_truth_native_endian(
		x_u8_unicode_sequence_truth_native_endian_storage<std::byte>,
		x_u8_unicode_sequence_truth_native_endian_storage_size - 1);

	inline const ztd::text::span<const std::byte> u32_unicode_sequence_bytes_truth_big_endian
		= ztd::text::tests::as_bytes(ztd::text::tests::u32_unicode_sequence_truth_big_endian);
	inline const ztd::text::span<const std::byte> u16_unicode_sequence_bytes_truth_big_endian
		= ztd::text::tests::as_bytes(ztd::text::tests::u16_unicode_sequence_truth_big_endian);
	inline const ztd::text::span<const std::byte> u8_unicode_sequence_bytes_truth_big_endian
		= ztd::text::tests::as_bytes(ztd::text::tests::u8_unicode_sequence_truth_big_endian);
	inline const ztd::text::span<const std::byte> w_unicode_sequence_bytes_truth_big_endian
		= ztd::text::tests::as_bytes(ztd::text::tests::w_unicode_sequence_truth_big_endian);
	inline constexpr ztd::text::span<const std::byte> unicode_sequence_bytes_truth_big_endian(
		x_u8_unicode_sequence_truth_native_endian_storage<std::byte>,
		x_u8_unicode_sequence_truth_native_endian_storage_size - 1);

	inline const ztd::text::span<const std::byte> u32_unicode_sequence_bytes_truth_little_endian
		= ztd::text::tests::as_bytes(ztd::text::tests::u32_unicode_sequence_truth_little_endian);
	inline const ztd::text::span<const std::byte> u16_unicode_sequence_bytes_truth_little_endian
		= ztd::text::tests::as_bytes(ztd::text::tests::u16_unicode_sequence_truth_little_endian);
	inline const ztd::text::span<const std::byte> u8_unicode_sequence_bytes_truth_little_endian
		= ztd::text::tests::as_bytes(ztd::text::tests::u8_unicode_sequence_truth_little_endian);
	inline const ztd::text::span<const std::byte> w_unicode_sequence_bytes_truth_little_endian
		= ztd::text::tests::as_bytes(ztd::text::tests::w_unicode_sequence_truth_little_endian);
	inline constexpr ztd::text::span<const std::byte> unicode_sequence_bytes_truth_little_endian(
		x_u8_unicode_sequence_truth_native_endian_storage<std::byte>,
		x_u8_unicode_sequence_truth_native_endian_storage_size - 1);

	inline constexpr const char32_t u32_unicode_invalid_input_arr[]                   = { 0xFFFFFFFF, 0 };
	inline constexpr const char16_t u16_unicode_invalid_input_arr[]                   = { 0xD801, 0xFFFF, 0 };
	inline constexpr const uchar8_t u8_unicode_invalid_input_arr[]                    = { 0xC0, 0 };
	inline constexpr const std::basic_string_view<char32_t> u32_unicode_invalid_input = u32_unicode_invalid_input_arr;
	inline constexpr const std::basic_string_view<char16_t> u16_unicode_invalid_input = u16_unicode_invalid_input_arr;
	inline constexpr const std::basic_string_view<ztd::text::uchar8_t> u8_unicode_invalid_input
		= u8_unicode_invalid_input_arr;

	inline constexpr const std::basic_string_view<char32_t> u32_unicode_replacement_truth = U"\uFFFD";
	inline constexpr const std::basic_string_view<char16_t> u16_unicode_replacement_truth = u"\uFFFD";
	inline constexpr const std::basic_string_view<ztd::text::uchar8_t> u8_unicode_replacement_truth
		= (const ztd::text::uchar8_t*)u8"\uFFFD";
	inline constexpr const std::basic_string_view<wchar_t> w_unicode_replacement_truth = L"?";
	inline constexpr const std::basic_string_view<char> unicode_replacement_truth      = "?";

	template <typename Char>
	constexpr auto make_basic_source_character_set_reverse_storage_for() noexcept {
		auto make_array = []() {
			if constexpr (std::is_same_v<Char, char>) {
				const auto& bscs
					= "\f\v\t "
					  "\nabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_{}[]#()<>%:;.?*+-/"
					  "^&|~!=,\\\"'\0";
				std::array<Char, 97> arr;
				std::copy(std::begin(bscs), std::end(bscs) - 1, arr.begin());
				return arr;
			}
			else if constexpr (std::is_same_v<Char, wchar_t>) {
				const auto& bscs
					= L"\f\v\t "
					  "\nabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_{}[]#()<>%:;.?*+-/"
					  "^&|~!=,\\\"'\0";
				std::array<Char, 97> arr;
				std::copy(std::begin(bscs), std::end(bscs) - 1, arr.begin());
				return arr;
			}
			else if constexpr (std::is_same_v<Char, char8_t>) {
				const auto& bscs
					= u8"\f\v\t "
					  "\nabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_{}[]#()<>%:;.?*+-/"
					  "^&|~!=,\\\"'\0";
				std::array<Char, 97> arr;
				std::copy(std::begin(bscs), std::end(bscs) - 1, arr.begin());
				return arr;
			}
			else if constexpr (std::is_same_v<Char, ztd::text::uchar8_t>) {
				const auto& bscs
					= u8"\f\v\t "
					  "\nabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_{}[]#()<>%:;.?*+-/"
					  "^&|~!=,\\\"'\0";
				std::array<Char, 97> arr;
				std::copy(std::begin(bscs), std::end(bscs) - 1, arr.begin());
				return arr;
			}
			else if constexpr (std::is_same_v<Char, char16_t>) {
				const auto& bscs
					= u"\f\v\t "
					  "\nabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_{}[]#()<>%:;.?*+-/"
					  "^&|~!=,\\\"'\0";
				std::array<Char, 97> arr;
				std::copy(std::begin(bscs), std::end(bscs) - 1, arr.begin());
				return arr;
			}
			else if constexpr (std::is_same_v<Char, char32_t>) {
				const auto& bscs
					= U"\f\v\t "
					  "\nabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_{}[]#()<>%:;.?*+-/"
					  "^&|~!=,\\\"'\0";
				std::array<Char, 97> arr;
				std::copy(std::begin(bscs), std::end(bscs) - 1, arr.begin());
				return arr;
			}
			else {
				static_assert(ztd::text::__txt_detail::__always_false_v<Char>, "no");
			}
		};
		auto arr = make_array();
		if constexpr (sizeof(Char) > 1) {
			unsigned char* aliased_data      = reinterpret_cast<unsigned char*>(arr.data());
			unsigned char* aliased_data_last = reinterpret_cast<unsigned char*>(arr.data() + arr.size());
			for (; aliased_data != aliased_data_last; aliased_data += sizeof(Char)) {
				std::reverse(aliased_data, aliased_data + sizeof(Char));
			}
		}
		return arr;
	}

	template <typename Char>
	const auto& basic_source_character_set_reverse_storage() noexcept {
		static const auto arr = make_basic_source_character_set_reverse_storage_for<Char>();
		return arr;
	}

	inline constexpr const std::size_t u32_basic_source_character_set_size = 97;
	inline constexpr const std::basic_string_view<char32_t> u32_basic_source_character_set(
		U"\f\v\t "
		U"\nabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_{}[]#()<>%:;.?*+-/^&|~!=,\\\"'\0",
		u32_basic_source_character_set_size);
	inline constexpr const std::size_t u16_basic_source_character_set_size = 97;
	inline constexpr const std::basic_string_view<char16_t> u16_basic_source_character_set(
		u"\f\v\t "
		u"\nabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_{}[]#()<>%:;.?*+-/^&|~!=,\\\"'\0",
		u16_basic_source_character_set_size);
	inline constexpr const std::size_t u8_basic_source_character_set_size = 97;
	inline constexpr const std::basic_string_view<ztd::text::uchar8_t> u8_basic_source_character_set(
		u8"\f\v\t "
		u8"\nabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_{}[]#()<>%:;.?*+-/^&|~!=,\\\"'\0",
		u8_basic_source_character_set_size);
	inline constexpr const std::size_t w_basic_source_character_set_size = 97;
	inline constexpr const std::basic_string_view<wchar_t> w_basic_source_character_set(
		L"\f\v\t "
		L"\nabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_{}[]#()<>%:;.?*+-/^&|~!=,\\\"'\0",
		w_basic_source_character_set_size);
	inline constexpr const std::size_t basic_source_character_set_size = 97;
	inline constexpr const std::basic_string_view<char> basic_source_character_set(
		"\f\v\t "
		"\nabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_{}[]#()<>%:;.?*+-/^&|~!=,\\\"'\0",
		basic_source_character_set_size);

	inline const std::basic_string_view<char32_t> u32_basic_source_character_set_reverse(
		basic_source_character_set_reverse_storage<char32_t>().data(),
		basic_source_character_set_reverse_storage<char32_t>().size());
	inline const std::basic_string_view<char16_t> u16_basic_source_character_set_reverse(
		basic_source_character_set_reverse_storage<char16_t>().data(),
		basic_source_character_set_reverse_storage<char16_t>().size());
	inline const std::basic_string_view<ztd::text::uchar8_t> u8_basic_source_character_set_reverse(
		basic_source_character_set_reverse_storage<ztd::text::uchar8_t>().data(),
		basic_source_character_set_reverse_storage<ztd::text::uchar8_t>().size());
	inline const std::basic_string_view<wchar_t> w_basic_source_character_set_reverse(
		basic_source_character_set_reverse_storage<wchar_t>().data(),
		basic_source_character_set_reverse_storage<wchar_t>().size());
	inline const std::basic_string_view<char> basic_source_character_set_reverse(
		basic_source_character_set_reverse_storage<char>().data(),
		basic_source_character_set_reverse_storage<char>().size());

	inline const ztd::text::span<const std::byte> u32_basic_source_character_set_bytes_native_endian
		= ztd::text::tests::as_bytes(ztd::text::tests::u32_basic_source_character_set);
	inline const ztd::text::span<const std::byte> u16_basic_source_character_set_bytes_native_endian
		= ztd::text::tests::as_bytes(ztd::text::tests::u16_basic_source_character_set);
	inline const ztd::text::span<const std::byte> u8_basic_source_character_set_bytes_native_endian
		= ztd::text::tests::as_bytes(ztd::text::tests::u8_basic_source_character_set);
	inline const ztd::text::span<const std::byte> w_basic_source_character_set_bytes_native_endian
		= ztd::text::tests::as_bytes(ztd::text::tests::w_basic_source_character_set);
	inline const ztd::text::span<const std::byte> basic_source_character_set_bytes_native_endian
		= ztd::text::tests::as_bytes(ztd::text::tests::basic_source_character_set);

	inline const ztd::text::span<const std::byte> u32_basic_source_character_set_bytes_little_endian
		= ztd::text::tests::as_bytes(ztd::text::endian::native == ztd::text::endian::little
			     ? u32_basic_source_character_set
			     : u32_basic_source_character_set_reverse);
	inline const ztd::text::span<const std::byte> u16_basic_source_character_set_bytes_little_endian
		= ztd::text::tests::as_bytes(ztd::text::endian::native == ztd::text::endian::little
			     ? u16_basic_source_character_set
			     : u16_basic_source_character_set_reverse);
	inline const ztd::text::span<const std::byte> u8_basic_source_character_set_bytes_little_endian
		= ztd::text::tests::as_bytes(ztd::text::endian::native == ztd::text::endian::little
			     ? u8_basic_source_character_set
			     : u8_basic_source_character_set_reverse);
	inline const ztd::text::span<const std::byte> w_basic_source_character_set_bytes_little_endian
		= ztd::text::tests::as_bytes(ztd::text::endian::native == ztd::text::endian::little
			     ? w_basic_source_character_set
			     : w_basic_source_character_set_reverse);
	inline const ztd::text::span<const std::byte> basic_source_character_set_bytes_little_endian
		= ztd::text::tests::as_bytes(ztd::text::endian::native == ztd::text::endian::little
			     ? basic_source_character_set
			     : basic_source_character_set_reverse);

	inline const ztd::text::span<const std::byte> u32_basic_source_character_set_bytes_big_endian
		= ztd::text::tests::as_bytes(ztd::text::endian::native == ztd::text::endian::big
			     ? u32_basic_source_character_set
			     : u32_basic_source_character_set_reverse);
	inline const ztd::text::span<const std::byte> u16_basic_source_character_set_bytes_big_endian
		= ztd::text::tests::as_bytes(ztd::text::endian::native == ztd::text::endian::big
			     ? u16_basic_source_character_set
			     : u16_basic_source_character_set_reverse);
	inline const ztd::text::span<const std::byte> u8_basic_source_character_set_bytes_big_endian
		= ztd::text::tests::as_bytes(ztd::text::endian::native == ztd::text::endian::big
			     ? u8_basic_source_character_set
			     : u8_basic_source_character_set_reverse);
	inline const ztd::text::span<const std::byte> w_basic_source_character_set_bytes_big_endian
		= ztd::text::tests::as_bytes(ztd::text::endian::native == ztd::text::endian::big
			     ? w_basic_source_character_set
			     : w_basic_source_character_set_reverse);
	inline const ztd::text::span<const std::byte> basic_source_character_set_bytes_big_endian
		= ztd::text::tests::as_bytes(ztd::text::endian::native == ztd::text::endian::big
			     ? basic_source_character_set
			     : basic_source_character_set_reverse);

	template <typename Encoding>
	constexpr auto basic_source_character_set_for() {
		using CodeUnit = ztd::text::code_unit_t<Encoding>;
		if constexpr (std::is_same_v<Encoding,
				         utf8> || std::is_same_v<Encoding, mutf8> || std::is_same_v<Encoding, wtf8>) {
			return u8_basic_source_character_set;
		}
		else {
			if constexpr (std::is_same_v<CodeUnit, char>) {
				return u8_basic_source_character_set;
			}
			else if constexpr (std::is_same_v<CodeUnit, wchar_t>) {
				return w_basic_source_character_set;
			}
			else if constexpr (std::is_same_v<CodeUnit, ztd::text::uchar8_t>) {
				return u8_basic_source_character_set;
			}
#if ZTD_TEXT_IS_ON(ZTD_TEXT_NATIVE_CHAR8_T_I_)
			else if constexpr (std::is_same_v<CodeUnit, char8_t>) {
				return u8_basic_source_character_set;
			}
#endif
			else if constexpr (std::is_same_v<CodeUnit, char16_t>) {
				return u16_basic_source_character_set;
			}
			else if constexpr (std::is_same_v<CodeUnit, char32_t>) {
				return u32_basic_source_character_set;
			}
			else {
				static_assert(ztd::text::__txt_detail::__always_false_v<Encoding>,
					"Cannot pick basic_source_character_set object for this Encoding");
			}
		}
	}

	template <typename Encoding>
	constexpr auto unicode_sequence_for() {
		using CodeUnit = ztd::text::code_unit_t<Encoding>;
		if constexpr (std::is_same_v<Encoding, utf16_le>) {
			return u16_unicode_sequence_truth_little_endian;
		}
		else if constexpr (std::is_same_v<Encoding, utf16_be>) {
			return u16_unicode_sequence_truth_big_endian;
		}
		else if constexpr (std::is_same_v<Encoding, utf16_ne>) {
			return u16_unicode_sequence_truth_native_endian;
		}
		else if constexpr (std::is_same_v<Encoding, utf32_le>) {
			return u32_unicode_sequence_truth_little_endian;
		}
		else if constexpr (std::is_same_v<Encoding, utf32_be>) {
			return u32_unicode_sequence_truth_big_endian;
		}
		else if constexpr (std::is_same_v<Encoding, utf32_ne>) {
			return u32_unicode_sequence_truth_native_endian;
		}
		else {
			if constexpr (std::is_same_v<CodeUnit, char>) {
				if constexpr (std::is_same_v<Encoding,
						         ztd::text::literal> && !ztd::text::is_unicode_encoding_v<Encoding>) {
					static_assert(ztd::text::__txt_detail::__always_false_v<Encoding>,
						"The encoding ztd::text::literal is not a unicode encoding, and therefore doesn't "
						"work here!");
				}
				return unicode_sequence_truth_native_endian;
			}
			else if constexpr (std::is_same_v<CodeUnit, wchar_t>) {
				if constexpr (std::is_same_v<Encoding,
						         ztd::text::wide_literal> && !ztd::text::is_unicode_encoding_v<Encoding>) {
					static_assert(ztd::text::__txt_detail::__always_false_v<Encoding>,
						"The encoding ztd::text::literal is not a unicode encoding, and therefore doesn't "
						"work here!");
				}
				return w_unicode_sequence_truth_native_endian;
			}
			else if constexpr (std::is_same_v<CodeUnit, uchar8_t>) {
				return u8_unicode_sequence_truth_native_endian;
			}
#if ZTD_TEXT_IS_ON(ZTD_TEXT_NATIVE_CHAR8_T_I_)
			else if constexpr (std::is_same_v<CodeUnit, char8_t>) {
				return u8_unicode_sequence_truth_native_endian;
			}
#endif
			else if constexpr (std::is_same_v<CodeUnit, char16_t>) {
				return u16_unicode_sequence_truth_native_endian;
			}
			else if constexpr (std::is_same_v<CodeUnit, char32_t>) {
				return u32_unicode_sequence_truth_native_endian;
			}
			else {
				static_assert(ztd::text::__txt_detail::__always_false_v<Encoding>,
					"Cannot pick basic_source_character_set object for this Encoding");
			}
		}
	}
}}} // namespace ztd::text::tests

#if ZTD_TEXT_IS_ON(ZTD_TEXT_COMPILER_VCXX_I_)
#pragma warning(pop)
#endif

#endif // ZTD_TEXT_TESTS_BASIC_UNICODE_STRINGS_HPP
