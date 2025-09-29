/*
 * Copyright 2024 SimpleDaemons
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <string>
#include <vector>
#include <cstdint>

namespace simple_snmpd {

class OIDUtils {
public:
    static std::vector<uint8_t> parseOID(const std::string& oid_string);
    static std::string formatOID(const std::vector<uint8_t>& oid);
    static bool isValidOID(const std::string& oid_string);
    static bool isOIDPrefix(const std::vector<uint8_t>& oid1, const std::vector<uint8_t>& oid2);
    static int compareOIDs(const std::vector<uint8_t>& oid1, const std::vector<uint8_t>& oid2);
};

} // namespace simple_snmpd
