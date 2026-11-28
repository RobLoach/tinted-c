/**
 * Base16 Terracotta Dark 
 *
 * @author Alexander Rossell Hayes (https://github.com/rossellhayes)
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

#ifndef BASE16_terracotta_dark_H__
#define BASE16_terracotta_dark_H__

/**
 * The Base16 Terracotta Dark scheme.
 *
 * @author Alexander Rossell Hayes (https://github.com/rossellhayes)
 */
extern const tinted_scheme base16_terracotta_dark;

#endif  /* BASE16_terracotta_dark_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_terracotta_dark_IMPLEMENTATION_ONCE
#define BASE16_terracotta_dark_IMPLEMENTATION_ONCE

const tinted_scheme base16_terracotta_dark = {
    .name = "Terracotta Dark",
    .slug = "terracotta-dark",
    .base = {
        { .r = 36, .g = 29, .b = 26 },
        { .r = 54, .g = 43, .b = 39 },
        { .r = 71, .g = 57, .b = 51 },
        { .r = 89, .g = 71, .b = 64 },
        { .r = 167, .g = 142, .b = 132 },
        { .r = 184, .g = 165, .b = 157 },
        { .r = 202, .g = 187, .b = 181 },
        { .r = 220, .g = 210, .b = 206 },
        { .r = 246, .g = 153, .b = 143 },
        { .r = 255, .g = 168, .b = 136 },
        { .r = 255, .g = 195, .b = 122 },
        { .r = 182, .g = 198, .b = 138 },
        { .r = 192, .g = 188, .b = 219 },
        { .r = 176, .g = 164, .b = 195 },
        { .r = 216, .g = 162, .b = 176 },
        { .r = 241, .g = 174, .b = 151 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 36, .g = 29, .b = 26 },
        { .r = 36, .g = 29, .b = 26 },
        { .r = 246, .g = 153, .b = 143 },
        { .r = 255, .g = 195, .b = 122 },
        { .r = 182, .g = 198, .b = 138 },
        { .r = 192, .g = 188, .b = 219 },
        { .r = 176, .g = 164, .b = 195 },
        { .r = 216, .g = 162, .b = 176 }
    },
    .system = 16,
    .variant = TINTED_VARIANT_DARK
};

#endif  /* BASE16_terracotta_dark_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_terracotta_dark,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
