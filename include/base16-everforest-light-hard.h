/**
 * Base16 Everforest Light (Hard) 
 *
 * @author Márcio Sobel (https://github.com/marciosobel)
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

#ifndef BASE16_everforest_light_hard_H__
#define BASE16_everforest_light_hard_H__

/**
 * The Base16 Everforest Light (Hard) scheme.
 *
 * @author Márcio Sobel (https://github.com/marciosobel)
 */
extern const tinted_scheme base16_everforest_light_hard;

#endif  /* BASE16_everforest_light_hard_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_everforest_light_hard_IMPLEMENTATION_ONCE
#define BASE16_everforest_light_hard_IMPLEMENTATION_ONCE

const tinted_scheme base16_everforest_light_hard = {
    .name = "Everforest Light (Hard)",
    .slug = "everforest-light-hard",
    .base = {
        { .r = 255, .g = 251, .b = 239 },
        { .r = 248, .g = 245, .b = 228 },
        { .r = 237, .g = 234, .b = 218 },
        { .r = 147, .g = 159, .b = 145 },
        { .r = 130, .g = 145, .b = 129 },
        { .r = 92, .g = 106, .b = 114 },
        { .r = 65, .g = 75, .b = 80 },
        { .r = 39, .g = 46, .b = 51 },
        { .r = 248, .g = 85, .b = 82 },
        { .r = 245, .g = 125, .b = 38 },
        { .r = 223, .g = 160, .b = 0 },
        { .r = 141, .g = 161, .b = 1 },
        { .r = 53, .g = 167, .b = 124 },
        { .r = 58, .g = 148, .b = 197 },
        { .r = 223, .g = 105, .b = 186 },
        { .r = 130, .g = 145, .b = 129 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 255, .g = 251, .b = 239 },
        { .r = 255, .g = 251, .b = 239 },
        { .r = 248, .g = 85, .b = 82 },
        { .r = 223, .g = 160, .b = 0 },
        { .r = 141, .g = 161, .b = 1 },
        { .r = 53, .g = 167, .b = 124 },
        { .r = 58, .g = 148, .b = 197 },
        { .r = 223, .g = 105, .b = 186 }
    },
    .system = 16,
    .variant = TINTED_VARIANT_LIGHT
};

#endif  /* BASE16_everforest_light_hard_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_everforest_light_hard,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
