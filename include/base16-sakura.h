/**
 * Base16 Sakura 
 *
 * @author Misterio77 (http://github.com/Misterio77)
 *
 * Template by Rob Loach (https://robloach.net)
 * tinted-c: https://github.com/RobLoach/tinted-c
 *
 * License: MIT
 *
 * Copyright (c) 2024 Rob Loach (https://robloach.net)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "tinted_types.h"

#ifndef BASE16_sakura_H__
#define BASE16_sakura_H__

/**
 * The Base16 Sakura scheme.
 *
 * @author Misterio77 (http://github.com/Misterio77)
 */
extern const tinted_scheme base16_sakura;

#endif  /* BASE16_sakura_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_sakura_IMPLEMENTATION_ONCE
#define BASE16_sakura_IMPLEMENTATION_ONCE

const tinted_scheme base16_sakura = {
    .name = "Sakura",
    .slug = "sakura",
    .base = {
        { .r = 254, .g = 237, .b = 243 },
        { .r = 248, .g = 226, .b = 231 },
        { .r = 224, .g = 204, .b = 209 },
        { .r = 117, .g = 95, .b = 100 },
        { .r = 102, .g = 80, .b = 85 },
        { .r = 86, .g = 68, .b = 72 },
        { .r = 66, .g = 56, .b = 58 },
        { .r = 51, .g = 41, .b = 43 },
        { .r = 223, .g = 45, .b = 82 },
        { .r = 246, .g = 102, .b = 30 },
        { .r = 194, .g = 148, .b = 97 },
        { .r = 46, .g = 145, .b = 109 },
        { .r = 29, .g = 137, .b = 145 },
        { .r = 0, .g = 110, .b = 147 },
        { .r = 94, .g = 33, .b = 128 },
        { .r = 186, .g = 13, .b = 53 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 254, .g = 237, .b = 243 },
        { .r = 254, .g = 237, .b = 243 },
        { .r = 223, .g = 45, .b = 82 },
        { .r = 194, .g = 148, .b = 97 },
        { .r = 46, .g = 145, .b = 109 },
        { .r = 29, .g = 137, .b = 145 },
        { .r = 0, .g = 110, .b = 147 },
        { .r = 94, .g = 33, .b = 128 }
    },
    .system = 16,
    .variant = TINTED_VARIANT_LIGHT
};

#endif  /* BASE16_sakura_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_sakura,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
