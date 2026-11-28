/**
 * Base16 Black Metal (Marduk) 
 *
 * @author metalelf0 (https://github.com/metalelf0)
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

#ifndef BASE16_black_metal_marduk_H__
#define BASE16_black_metal_marduk_H__

/**
 * The Base16 Black Metal (Marduk) scheme.
 *
 * @author metalelf0 (https://github.com/metalelf0)
 */
extern const tinted_scheme base16_black_metal_marduk;

#endif  /* BASE16_black_metal_marduk_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_black_metal_marduk_IMPLEMENTATION_ONCE
#define BASE16_black_metal_marduk_IMPLEMENTATION_ONCE

const tinted_scheme base16_black_metal_marduk = {
    .name = "Black Metal (Marduk)",
    .slug = "black-metal-marduk",
    .base = {
        { .r = 0, .g = 0, .b = 0 },
        { .r = 18, .g = 18, .b = 18 },
        { .r = 34, .g = 34, .b = 34 },
        { .r = 51, .g = 51, .b = 51 },
        { .r = 153, .g = 153, .b = 153 },
        { .r = 193, .g = 193, .b = 193 },
        { .r = 153, .g = 153, .b = 153 },
        { .r = 193, .g = 193, .b = 193 },
        { .r = 95, .g = 135, .b = 135 },
        { .r = 170, .g = 170, .b = 170 },
        { .r = 98, .g = 107, .b = 103 },
        { .r = 165, .g = 170, .b = 167 },
        { .r = 170, .g = 170, .b = 170 },
        { .r = 136, .g = 136, .b = 136 },
        { .r = 153, .g = 153, .b = 153 },
        { .r = 68, .g = 68, .b = 68 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 0, .g = 0, .b = 0 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 95, .g = 135, .b = 135 },
        { .r = 98, .g = 107, .b = 103 },
        { .r = 165, .g = 170, .b = 167 },
        { .r = 170, .g = 170, .b = 170 },
        { .r = 136, .g = 136, .b = 136 },
        { .r = 153, .g = 153, .b = 153 }
    },
    .system = 16,
    .variant = TINTED_VARIANT_DARK
};

#endif  /* BASE16_black_metal_marduk_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_black_metal_marduk,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
