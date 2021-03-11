/* Copyright 2021 Jan Stephan
 *
 * Licensed under the EUPL, Version 1.2 or - as soon they will be approved by
 * the European Commission - subsequent versions of the EUPL (the “Licence”).
 * You may not use this work except in compliance with the Licence.
 * You may obtain a copy of the Licence at:
 *
 *     http://ec.europa.eu/idabc/eupl.html
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the Licence is distributed on an “AS IS” basis, WITHOUT
 *  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 *  Licence permissions and limitations under the Licence.
 */

#ifndef BACTRIA_TAGS_HPP
#   define BACTRIA_TAGS_HPP

#   include <cstdint>

namespace bactria
{
    struct Generic
    {
        static constexpr auto id = 1u;
    };

    struct Function
    {
        static constexpr auto id = 2u;
    };

    struct Loop
    {
        static constexpr auto id = 3u;
    };

    struct Body
    {
        static constexpr auto id = 4u;
    };
}

#endif
