/**
 * Base16 Vesper 
 *
 * @author FormalSnake (https://github.com/formalsnake)
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

#ifndef BASE16_vesper_H__
#define BASE16_vesper_H__

/**
 * The Base16 Vesper scheme.
 *
 * @author FormalSnake (https://github.com/formalsnake)
 */
extern const tinted_scheme base16_vesper;

#endif  /* BASE16_vesper_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_vesper_IMPLEMENTATION_ONCE
#define BASE16_vesper_IMPLEMENTATION_ONCE

const tinted_scheme base16_vesper = {
    .name = "Vesper",
    .slug = "vesper",
    .base = {
        { .r = 16, .g = 16, .b = 16 },
        { .r = 35, .g = 35, .b = 35 },
        { .r = 34, .g = 34, .b = 34 },
        { .r = 51, .g = 51, .b = 51 },
        { .r = 153, .g = 153, .b = 153 },
        { .r = 183, .g = 183, .b = 183 },
        { .r = 193, .g = 193, .b = 193 },
        { .r = 213, .g = 213, .b = 213 },
        { .r = 222, .g = 110, .b = 110 },
        { .r = 218, .g = 176, .b = 131 },
        { .r = 255, .g = 199, .b = 153 },
        { .r = 95, .g = 135, .b = 135 },
        { .r = 96, .g = 165, .b = 146 },
        { .r = 142, .g = 170, .b = 170 },
        { .r = 214, .g = 144, .b = 148 },
        { .r = 135, .g = 108, .b = 79 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 16, .g = 16, .b = 16 },
        { .r = 16, .g = 16, .b = 16 },
        { .r = 222, .g = 110, .b = 110 },
        { .r = 255, .g = 199, .b = 153 },
        { .r = 95, .g = 135, .b = 135 },
        { .r = 96, .g = 165, .b = 146 },
        { .r = 142, .g = 170, .b = 170 },
        { .r = 214, .g = 144, .b = 148 }
    },
    .system = 16,
    .variant = TINTED_VARIANT_DARK
};

#endif  /* BASE16_vesper_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_vesper,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
