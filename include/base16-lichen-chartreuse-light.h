/**
 * Base16 Lichen Chartreuse Light Low-glare chartreuse theme with green-gray neutrals; light compatibility palette.
 *
 * @author Aaron Colichia (https://aaron.colichia.org/)
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

#ifndef BASE16_lichen_chartreuse_light_H__
#define BASE16_lichen_chartreuse_light_H__

/**
 * The Base16 Lichen Chartreuse Light scheme.
 *
 * @author Aaron Colichia (https://aaron.colichia.org/)
 */
extern const tinted_scheme base16_lichen_chartreuse_light;

#endif  /* BASE16_lichen_chartreuse_light_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_lichen_chartreuse_light_IMPLEMENTATION_ONCE
#define BASE16_lichen_chartreuse_light_IMPLEMENTATION_ONCE

const tinted_scheme base16_lichen_chartreuse_light = {
    .name = "Lichen Chartreuse Light",
    .slug = "lichen-chartreuse-light",
    .base = {
        { .r = 245, .g = 247, .b = 242 },
        { .r = 236, .g = 239, .b = 231 },
        { .r = 207, .g = 228, .b = 174 },
        { .r = 104, .g = 113, .b = 97 },
        { .r = 78, .g = 81, .b = 73 },
        { .r = 45, .g = 48, .b = 43 },
        { .r = 35, .g = 36, .b = 32 },
        { .r = 21, .g = 22, .b = 19 },
        { .r = 163, .g = 71, .b = 64 },
        { .r = 139, .g = 93, .b = 39 },
        { .r = 80, .g = 107, .b = 41 },
        { .r = 47, .g = 116, .b = 98 },
        { .r = 53, .g = 101, .b = 105 },
        { .r = 53, .g = 110, .b = 138 },
        { .r = 110, .g = 86, .b = 137 },
        { .r = 138, .g = 79, .b = 103 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 245, .g = 247, .b = 242 },
        { .r = 245, .g = 247, .b = 242 },
        { .r = 163, .g = 71, .b = 64 },
        { .r = 80, .g = 107, .b = 41 },
        { .r = 47, .g = 116, .b = 98 },
        { .r = 53, .g = 101, .b = 105 },
        { .r = 53, .g = 110, .b = 138 },
        { .r = 110, .g = 86, .b = 137 }
    },
    .system = 16,
    .variant = TINTED_VARIANT_LIGHT
};

#endif  /* BASE16_lichen_chartreuse_light_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_lichen_chartreuse_light,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
