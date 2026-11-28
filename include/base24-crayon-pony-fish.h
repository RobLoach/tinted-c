/**
 * Base24 Crayon Pony Fish 
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

#ifndef BASE24_crayon_pony_fish_H__
#define BASE24_crayon_pony_fish_H__

/**
 * The Base24 Crayon Pony Fish scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const tinted_scheme base24_crayon_pony_fish;

#endif  /* BASE24_crayon_pony_fish_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE24_crayon_pony_fish_IMPLEMENTATION_ONCE
#define BASE24_crayon_pony_fish_IMPLEMENTATION_ONCE

const tinted_scheme base24_crayon_pony_fish = {
    .name = "Crayon Pony Fish",
    .slug = "crayon-pony-fish",
    .base = {
        { .r = 20, .g = 6, .b = 7 },
        { .r = 42, .g = 26, .b = 28 },
        { .r = 60, .g = 42, .b = 46 },
        { .r = 71, .g = 52, .b = 56 },
        { .r = 82, .g = 62, .b = 67 },
        { .r = 93, .g = 72, .b = 78 },
        { .r = 104, .g = 82, .b = 89 },
        { .r = 175, .g = 148, .b = 157 },
        { .r = 144, .g = 0, .b = 42 },
        { .r = 170, .g = 48, .b = 27 },
        { .r = 207, .g = 201, .b = 255 },
        { .r = 87, .g = 149, .b = 35 },
        { .r = 232, .g = 167, .b = 102 },
        { .r = 139, .g = 135, .b = 175 },
        { .r = 104, .g = 46, .b = 80 },
        { .r = 72, .g = 0, .b = 21 },

        /* Base24 */
        { .r = 40, .g = 28, .b = 30 },
        { .r = 20, .g = 14, .b = 15 },
        { .r = 197, .g = 36, .b = 92 },
        { .r = 199, .g = 55, .b = 29 },
        { .r = 141, .g = 255, .b = 86 },
        { .r = 255, .g = 206, .b = 174 },
        { .r = 207, .g = 201, .b = 255 },
        { .r = 251, .g = 108, .b = 185 }
    },
    .system = 24,
    .variant = TINTED_VARIANT_DARK
};

#endif  /* BASE24_crayon_pony_fish_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base24_crayon_pony_fish,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
