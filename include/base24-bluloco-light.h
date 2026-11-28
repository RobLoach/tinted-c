/**
 * Base24 Bluloco Light 
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

#ifndef BASE24_bluloco_light_H__
#define BASE24_bluloco_light_H__

/**
 * The Base24 Bluloco Light scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const tinted_scheme base24_bluloco_light;

#endif  /* BASE24_bluloco_light_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE24_bluloco_light_IMPLEMENTATION_ONCE
#define BASE24_bluloco_light_IMPLEMENTATION_ONCE

const tinted_scheme base24_bluloco_light = {
    .name = "Bluloco Light",
    .slug = "bluloco-light",
    .base = {
        { .r = 247, .g = 247, .b = 247 },
        { .r = 203, .g = 204, .b = 212 },
        { .r = 221, .g = 222, .b = 232 },
        { .r = 166, .g = 167, .b = 174 },
        { .r = 111, .g = 111, .b = 116 },
        { .r = 56, .g = 56, .b = 58 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 28, .g = 29, .b = 33 },
        { .r = 200, .g = 13, .b = 65 },
        { .r = 212, .g = 77, .b = 22 },
        { .r = 16, .g = 133, .b = 217 },
        { .r = 32, .g = 136, .b = 57 },
        { .r = 30, .g = 77, .b = 122 },
        { .r = 29, .g = 68, .b = 221 },
        { .r = 109, .g = 27, .b = 237 },
        { .r = 100, .g = 6, .b = 32 },

        /* Base24 */
        { .r = 147, .g = 148, .b = 154 },
        { .r = 73, .g = 74, .b = 77 },
        { .r = 251, .g = 73, .b = 109 },
        { .r = 183, .g = 147, .b = 38 },
        { .r = 52, .g = 178, .b = 83 },
        { .r = 90, .g = 127, .b = 172 },
        { .r = 16, .g = 133, .b = 217 },
        { .r = 192, .g = 12, .b = 178 }
    },
    .system = 24,
    .variant = TINTED_VARIANT_LIGHT
};

#endif  /* BASE24_bluloco_light_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base24_bluloco_light,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
