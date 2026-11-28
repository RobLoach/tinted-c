/**
 * Base24 Operator Mono Dark 
 *
 * @author FredHappyface (https://github.com/fredHappyface)
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

#ifndef BASE24_operator_mono_dark_H__
#define BASE24_operator_mono_dark_H__

/**
 * The Base24 Operator Mono Dark scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const tinted_scheme base24_operator_mono_dark;

#endif  /* BASE24_operator_mono_dark_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE24_operator_mono_dark_IMPLEMENTATION_ONCE
#define BASE24_operator_mono_dark_IMPLEMENTATION_ONCE

const tinted_scheme base24_operator_mono_dark = {
    .name = "Operator Mono Dark",
    .slug = "operator-mono-dark",
    .base = {
        { .r = 25, .g = 25, .b = 25 },
        { .r = 90, .g = 90, .b = 90 },
        { .r = 154, .g = 154, .b = 153 },
        { .r = 166, .g = 168, .b = 166 },
        { .r = 179, .g = 182, .b = 179 },
        { .r = 192, .g = 196, .b = 192 },
        { .r = 205, .g = 211, .b = 205 },
        { .r = 253, .g = 253, .b = 246 },
        { .r = 202, .g = 55, .b = 45 },
        { .r = 212, .g = 214, .b = 151 },
        { .r = 137, .g = 211, .b = 246 },
        { .r = 77, .g = 123, .b = 58 },
        { .r = 114, .g = 212, .b = 198 },
        { .r = 67, .g = 135, .b = 207 },
        { .r = 184, .g = 108, .b = 180 },
        { .r = 101, .g = 27, .b = 22 },

        /* Base24 */
        { .r = 102, .g = 102, .b = 102 },
        { .r = 51, .g = 51, .b = 51 },
        { .r = 195, .g = 125, .b = 98 },
        { .r = 253, .g = 253, .b = 197 },
        { .r = 131, .g = 208, .b = 162 },
        { .r = 130, .g = 233, .b = 218 },
        { .r = 137, .g = 211, .b = 246 },
        { .r = 254, .g = 44, .b = 121 }
    },
    .system = 24,
    .variant = TINTED_VARIANT_DARK
};

#endif  /* BASE24_operator_mono_dark_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base24_operator_mono_dark,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
