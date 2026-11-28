/**
 * Base24 Pnevma 
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

#ifndef BASE24_pnevma_H__
#define BASE24_pnevma_H__

/**
 * The Base24 Pnevma scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const tinted_scheme base24_pnevma;

#endif  /* BASE24_pnevma_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE24_pnevma_IMPLEMENTATION_ONCE
#define BASE24_pnevma_IMPLEMENTATION_ONCE

const tinted_scheme base24_pnevma = {
    .name = "Pnevma",
    .slug = "pnevma",
    .base = {
        { .r = 28, .g = 28, .b = 28 },
        { .r = 47, .g = 46, .b = 45 },
        { .r = 74, .g = 72, .b = 69 },
        { .r = 107, .g = 106, .b = 103 },
        { .r = 141, .g = 140, .b = 138 },
        { .r = 174, .g = 174, .b = 173 },
        { .r = 208, .g = 208, .b = 208 },
        { .r = 239, .g = 239, .b = 239 },
        { .r = 163, .g = 102, .b = 102 },
        { .r = 215, .g = 175, .b = 135 },
        { .r = 161, .g = 189, .b = 206 },
        { .r = 144, .g = 165, .b = 125 },
        { .r = 138, .g = 219, .b = 180 },
        { .r = 127, .g = 165, .b = 189 },
        { .r = 199, .g = 158, .b = 196 },
        { .r = 81, .g = 51, .b = 51 },

        /* Base24 */
        { .r = 49, .g = 48, .b = 46 },
        { .r = 24, .g = 24, .b = 23 },
        { .r = 215, .g = 135, .b = 135 },
        { .r = 228, .g = 201, .b = 175 },
        { .r = 175, .g = 190, .b = 162 },
        { .r = 177, .g = 231, .b = 221 },
        { .r = 161, .g = 189, .b = 206 },
        { .r = 215, .g = 190, .b = 218 }
    },
    .system = 24,
    .variant = TINTED_VARIANT_DARK
};

#endif  /* BASE24_pnevma_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base24_pnevma,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
