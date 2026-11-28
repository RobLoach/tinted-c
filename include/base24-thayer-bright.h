/**
 * Base24 Thayer Bright 
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

#ifndef BASE24_thayer_bright_H__
#define BASE24_thayer_bright_H__

/**
 * The Base24 Thayer Bright scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const tinted_scheme base24_thayer_bright;

#endif  /* BASE24_thayer_bright_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE24_thayer_bright_IMPLEMENTATION_ONCE
#define BASE24_thayer_bright_IMPLEMENTATION_ONCE

const tinted_scheme base24_thayer_bright = {
    .name = "Thayer Bright",
    .slug = "thayer-bright",
    .base = {
        { .r = 27, .g = 29, .b = 30 },
        { .r = 27, .g = 29, .b = 30 },
        { .r = 80, .g = 83, .b = 84 },
        { .r = 111, .g = 113, .b = 112 },
        { .r = 142, .g = 143, .b = 141 },
        { .r = 173, .g = 173, .b = 169 },
        { .r = 204, .g = 204, .b = 198 },
        { .r = 248, .g = 248, .b = 242 },
        { .r = 249, .g = 38, .b = 114 },
        { .r = 243, .g = 253, .b = 33 },
        { .r = 63, .g = 120, .b = 255 },
        { .r = 77, .g = 247, .b = 64 },
        { .r = 55, .g = 200, .b = 180 },
        { .r = 38, .g = 86, .b = 214 },
        { .r = 140, .g = 84, .b = 254 },
        { .r = 124, .g = 19, .b = 57 },

        /* Base24 */
        { .r = 53, .g = 55, .b = 56 },
        { .r = 26, .g = 27, .b = 28 },
        { .r = 255, .g = 89, .b = 149 },
        { .r = 254, .g = 237, .b = 108 },
        { .r = 182, .g = 227, .b = 84 },
        { .r = 35, .g = 206, .b = 212 },
        { .r = 63, .g = 120, .b = 255 },
        { .r = 158, .g = 111, .b = 254 }
    },
    .system = 24,
    .variant = TINTED_VARIANT_DARK
};

#endif  /* BASE24_thayer_bright_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base24_thayer_bright,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
