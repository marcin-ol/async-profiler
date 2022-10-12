/*
 * Copyright 2020 Andrei Pangin
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

#include "stringUtils.h"


bool StringUtils::endsWith(const std::string& s, const char* suffix, size_t suffixlen) {
    size_t len = s.length();
    return len >= suffixlen && s.compare(len - suffixlen, suffixlen, suffix) == 0;
}

void StringUtils::replace(std::string& s, char c, const char* replacement, size_t rlen) {
    for (size_t i = 0; (i = s.find(c, i)) != std::string::npos; i += rlen) {
        s.replace(i, 1, replacement, rlen);
    }
}
