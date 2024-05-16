// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file mutableCdrAux.hpp
 * This source file contains some definitions of CDR related functions.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef _FAST_DDS_GENERATED_MUTABLECDRAUX_HPP_
#define _FAST_DDS_GENERATED_MUTABLECDRAUX_HPP_

#include "mutable.hpp"

constexpr uint32_t MutableUShortStruct_max_cdr_typesize {12UL};
constexpr uint32_t MutableUShortStruct_max_key_cdr_typesize {0UL};

constexpr uint32_t MutableUnionStruct_max_cdr_typesize {28UL};
constexpr uint32_t MutableUnionStruct_max_key_cdr_typesize {0UL};

constexpr uint32_t MutableExtensibilityInheritance_max_cdr_typesize {20UL};
constexpr uint32_t MutableExtensibilityInheritance_max_key_cdr_typesize {0UL};

constexpr uint32_t MutableInheritanceStruct_max_cdr_typesize {284UL};
constexpr uint32_t MutableInheritanceStruct_max_key_cdr_typesize {0UL};

constexpr uint32_t MutableCharStruct_max_cdr_typesize {12UL};
constexpr uint32_t MutableCharStruct_max_key_cdr_typesize {0UL};

constexpr uint32_t MutableLongDoubleStruct_max_cdr_typesize {32UL};
constexpr uint32_t MutableLongDoubleStruct_max_key_cdr_typesize {0UL};

constexpr uint32_t MutableLongLongStruct_max_cdr_typesize {24UL};
constexpr uint32_t MutableLongLongStruct_max_key_cdr_typesize {0UL};



constexpr uint32_t MutableWCharStruct_max_cdr_typesize {12UL};
constexpr uint32_t MutableWCharStruct_max_key_cdr_typesize {0UL};


constexpr uint32_t MutableULongStruct_max_cdr_typesize {12UL};
constexpr uint32_t MutableULongStruct_max_key_cdr_typesize {0UL};



constexpr uint32_t MutableEmptyInheritanceStruct_max_cdr_typesize {276UL};
constexpr uint32_t MutableEmptyInheritanceStruct_max_key_cdr_typesize {0UL};

constexpr uint32_t MutableBooleanStruct_max_cdr_typesize {12UL};
constexpr uint32_t MutableBooleanStruct_max_key_cdr_typesize {0UL};

constexpr uint32_t MutableEmptyStruct_max_cdr_typesize {4UL};
constexpr uint32_t MutableEmptyStruct_max_key_cdr_typesize {0UL};


constexpr uint32_t MutableLongStruct_max_cdr_typesize {12UL};
constexpr uint32_t MutableLongStruct_max_key_cdr_typesize {0UL};

constexpr uint32_t MutableInheritanceEmptyStruct_max_cdr_typesize {12UL};
constexpr uint32_t MutableInheritanceEmptyStruct_max_key_cdr_typesize {0UL};



constexpr uint32_t MutableShortStruct_max_cdr_typesize {12UL};
constexpr uint32_t MutableShortStruct_max_key_cdr_typesize {0UL};


constexpr uint32_t MutableFloatStruct_max_cdr_typesize {12UL};
constexpr uint32_t MutableFloatStruct_max_key_cdr_typesize {0UL};

constexpr uint32_t MutableULongLongStruct_max_cdr_typesize {24UL};
constexpr uint32_t MutableULongLongStruct_max_key_cdr_typesize {0UL};

constexpr uint32_t MutableDoubleStruct_max_cdr_typesize {24UL};
constexpr uint32_t MutableDoubleStruct_max_key_cdr_typesize {0UL};

constexpr uint32_t MutableOctetStruct_max_cdr_typesize {12UL};
constexpr uint32_t MutableOctetStruct_max_key_cdr_typesize {0UL};







namespace eprosima {
namespace fastcdr {

class Cdr;
class CdrSizeCalculator;

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const MutableShortStruct& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const MutableUShortStruct& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const MutableLongStruct& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const MutableULongStruct& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const MutableLongLongStruct& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const MutableULongLongStruct& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const MutableFloatStruct& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const MutableDoubleStruct& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const MutableLongDoubleStruct& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const MutableBooleanStruct& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const MutableOctetStruct& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const MutableCharStruct& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const MutableWCharStruct& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const MutableUnionStruct& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const MutableEmptyStruct& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const MutableEmptyInheritanceStruct& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const MutableInheritanceStruct& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const MutableInheritanceEmptyStruct& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const MutableExtensibilityInheritance& data);


} // namespace fastcdr
} // namespace eprosima

#endif // _FAST_DDS_GENERATED_MUTABLECDRAUX_HPP_
