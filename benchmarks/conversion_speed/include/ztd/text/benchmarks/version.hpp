// =============================================================================
//
// ztd.text
// Copyright © 2022 JeanHeyd "ThePhD" Meneide and Shepherd's Oasis, LLC
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
// ============================================================================ //

#pragma once

#ifndef ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_VERSION_HPP
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_VERSION_HPP

#include <ztd/version.hpp>

#if defined(ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_BOOST_TEXT_BENCHMARKS)
#if (ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_BOOST_TEXT_BENCHMARKS != 0)
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_BOOST_TEXT_BENCHMARKS_I_ ZTD_ON
#else
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_BOOST_TEXT_BENCHMARKS_I_ ZTD_OFF
#endif
#else
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_BOOST_TEXT_BENCHMARKS_I_ ZTD_DEFAULT_ON
#endif

#if defined(ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_CTRE_BENCHMARKS)
#if (ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_CTRE_BENCHMARKS != 0)
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_CTRE_BENCHMARKS_I_ ZTD_ON
#else
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_CTRE_BENCHMARKS_I_ ZTD_OFF
#endif
#else
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_CTRE_BENCHMARKS_I_ ZTD_DEFAULT_ON
#endif

#if defined(ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_CUNEICODE_BENCHMARKS)
#if (ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_CUNEICODE_BENCHMARKS != 0)
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_CUNEICODE_BENCHMARKS_I_ ZTD_ON
#else
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_CUNEICODE_BENCHMARKS_I_ ZTD_OFF
#endif
#else
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_CUNEICODE_BENCHMARKS_I_ ZTD_DEFAULT_ON
#endif

#if defined(ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_ENCODING_C_BENCHMARKS)
#if (ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_ENCODING_C_BENCHMARKS != 0)
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_ENCODING_C_BENCHMARKS_I_ ZTD_ON
#else
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_ENCODING_C_BENCHMARKS_I_ ZTD_OFF
#endif
#else
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_ENCODING_C_BENCHMARKS_I_ ZTD_DEFAULT_ON
#endif

#if defined(ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_ICONV_BENCHMARKS)
#if (ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_ICONV_BENCHMARKS != 0)
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_ICONV_BENCHMARKS_I_ ZTD_ON
#else
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_ICONV_BENCHMARKS_I_ ZTD_OFF
#endif
#else
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_ICONV_BENCHMARKS_I_ ZTD_DEFAULT_ON
#endif

#if defined(ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_ICU_BENCHMARKS)
#if (ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_ICU_BENCHMARKS != 0)
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_ICU_BENCHMARKS_I_ ZTD_ON
#else
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_ICU_BENCHMARKS_I_ ZTD_OFF
#endif
#else
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_ICU_BENCHMARKS_I_ ZTD_DEFAULT_ON
#endif

#if defined(ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_SIMDUTF_BENCHMARKS)
#if (ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_SIMDUTF_BENCHMARKS != 0)
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_SIMDUTF_BENCHMARKS_I_ ZTD_ON
#else
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_SIMDUTF_BENCHMARKS_I_ ZTD_OFF
#endif
#else
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_SIMDUTF_BENCHMARKS_I_ ZTD_DEFAULT_ON
#endif

#if defined(ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_STANDARD_C_BENCHMARKS)
#if (ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_STANDARD_C_BENCHMARKS != 0)
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_STANDARD_C_BENCHMARKS_I_ ZTD_ON
#else
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_STANDARD_C_BENCHMARKS_I_ ZTD_OFF
#endif
#else
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_STANDARD_C_BENCHMARKS_I_ ZTD_DEFAULT_ON
#endif

#if defined(ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_STANDARD_CPP_BENCHMARKS)
#if (ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_STANDARD_CPP_BENCHMARKS != 0)
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_STANDARD_CPP_BENCHMARKS_I_ ZTD_ON
#else
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_STANDARD_CPP_BENCHMARKS_I_ ZTD_OFF
#endif
#else
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_STANDARD_CPP_BENCHMARKS_I_ ZTD_DEFAULT_ON
#endif

#if defined(ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_UTF8CPP_BENCHMARKS)
#if (ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_UTF8CPP_BENCHMARKS != 0)
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_UTF8CPP_BENCHMARKS_I_ ZTD_ON
#else
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_UTF8CPP_BENCHMARKS_I_ ZTD_OFF
#endif
#else
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_UTF8CPP_BENCHMARKS_I_ ZTD_DEFAULT_ON
#endif

#if defined(ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_WINDOWS_BENCHMARKS)
#if (ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_WINDOWS_BENCHMARKS != 0)
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_WINDOWS_BENCHMARKS_I_ ZTD_ON
#else
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_WINDOWS_BENCHMARKS_I_ ZTD_OFF
#endif
#else
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_WINDOWS_BENCHMARKS_I_ ZTD_DEFAULT_ON
#endif

#if defined(ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_ZTD_TEXT_BENCHMARKS)
#if (ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_ZTD_TEXT_BENCHMARKS != 0)
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_ZTD_TEXT_BENCHMARKS_I_ ZTD_ON
#else
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_ZTD_TEXT_BENCHMARKS_I_ ZTD_OFF
#endif
#else
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_ZTD_TEXT_BENCHMARKS_I_ ZTD_DEFAULT_ON
#endif

#if defined(ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_ZTD_TEXT_UNCHECKED_BENCHMARKS)
#if (ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_ZTD_TEXT_UNCHECKED_BENCHMARKS != 0)
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_ZTD_TEXT_UNCHECKED_BENCHMARKS_I_ ZTD_ON
#else
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_ZTD_TEXT_UNCHECKED_BENCHMARKS_I_ ZTD_OFF
#endif
#else
#define ZTD_TEXT_BENCHMARKS_CONVERSION_SPEED_ZTD_TEXT_UNCHECKED_BENCHMARKS_I_ ZTD_DEFAULT_ON
#endif

#endif
