/**
 * Base16 Brasa 
 *
 * @author Teshre
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

#ifndef BASE16_brasa_H__
#define BASE16_brasa_H__

/**
 * The Base16 Brasa scheme.
 *
 * @author Teshre
 */
extern const tinted_scheme base16_brasa;

#endif  /* BASE16_brasa_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_brasa_IMPLEMENTATION_ONCE
#define BASE16_brasa_IMPLEMENTATION_ONCE

const tinted_scheme base16_brasa = {
    .name = "Brasa",
    .base = {
        { .r = 26, .g = 15, .b = 10 },
        { .r = 43, .g = 28, .b = 20 },
        { .r = 69, .g = 38, .b = 26 },
        { .r = 122, .g = 97, .b = 80 },
        { .r = 181, .g = 157, .b = 136 },
        { .r = 240, .g = 216, .b = 192 },
        { .r = 246, .g = 225, .b = 204 },
        { .r = 251, .g = 234, .b = 216 },
        { .r = 242, .g = 104, .b = 90 },
        { .r = 255, .g = 122, .b = 77 },
        { .r = 240, .g = 178, .b = 58 },
        { .r = 184, .g = 194, .b = 74 },
        { .r = 107, .g = 200, .b = 184 },
        { .r = 154, .g = 166, .b = 224 },
        { .r = 230, .g = 138, .b = 162 },
        { .r = 90, .g = 58, .b = 40 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 26, .g = 15, .b = 10 },
        { .r = 26, .g = 15, .b = 10 },
        { .r = 242, .g = 104, .b = 90 },
        { .r = 240, .g = 178, .b = 58 },
        { .r = 184, .g = 194, .b = 74 },
        { .r = 107, .g = 200, .b = 184 },
        { .r = 154, .g = 166, .b = 224 },
        { .r = 230, .g = 138, .b = 162 }
    },
    .system = 16
};

#endif  /* BASE16_brasa_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_brasa,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
