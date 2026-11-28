/**
 * Base16 summercamp 
 *
 * @author zoe firi (zoefiri.github.io)
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

#ifndef BASE16_summercamp_H__
#define BASE16_summercamp_H__

/**
 * The Base16 summercamp scheme.
 *
 * @author zoe firi (zoefiri.github.io)
 */
extern const tinted_scheme base16_summercamp;

#endif  /* BASE16_summercamp_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_summercamp_IMPLEMENTATION_ONCE
#define BASE16_summercamp_IMPLEMENTATION_ONCE

const tinted_scheme base16_summercamp = {
    .name = "summercamp",
    .slug = "summercamp",
    .base = {
        { .r = 28, .g = 24, .b = 16 },
        { .r = 42, .g = 38, .b = 28 },
        { .r = 58, .g = 53, .b = 39 },
        { .r = 80, .g = 75, .b = 56 },
        { .r = 95, .g = 91, .b = 69 },
        { .r = 115, .g = 110, .b = 85 },
        { .r = 186, .g = 182, .b = 150 },
        { .r = 248, .g = 245, .b = 222 },
        { .r = 227, .g = 81, .b = 66 },
        { .r = 251, .g = 161, .b = 27 },
        { .r = 242, .g = 255, .b = 39 },
        { .r = 92, .g = 235, .b = 90 },
        { .r = 90, .g = 235, .b = 188 },
        { .r = 72, .g = 155, .b = 240 },
        { .r = 255, .g = 128, .b = 128 },
        { .r = 246, .g = 155, .b = 231 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 28, .g = 24, .b = 16 },
        { .r = 28, .g = 24, .b = 16 },
        { .r = 227, .g = 81, .b = 66 },
        { .r = 242, .g = 255, .b = 39 },
        { .r = 92, .g = 235, .b = 90 },
        { .r = 90, .g = 235, .b = 188 },
        { .r = 72, .g = 155, .b = 240 },
        { .r = 255, .g = 128, .b = 128 }
    },
    .system = 16,
    .variant = TINTED_VARIANT_DARK
};

#endif  /* BASE16_summercamp_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_summercamp,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
