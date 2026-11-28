/**
 * Base16 Atelier Seaside Light 
 *
 * @author Bram de Haan (http://atelierbramdehaan.nl)
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

#ifndef BASE16_atelier_seaside_light_H__
#define BASE16_atelier_seaside_light_H__

/**
 * The Base16 Atelier Seaside Light scheme.
 *
 * @author Bram de Haan (http://atelierbramdehaan.nl)
 */
extern const tinted_scheme base16_atelier_seaside_light;

#endif  /* BASE16_atelier_seaside_light_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_atelier_seaside_light_IMPLEMENTATION_ONCE
#define BASE16_atelier_seaside_light_IMPLEMENTATION_ONCE

const tinted_scheme base16_atelier_seaside_light = {
    .name = "Atelier Seaside Light",
    .slug = "atelier-seaside-light",
    .base = {
        { .r = 244, .g = 251, .b = 244 },
        { .r = 207, .g = 232, .b = 207 },
        { .r = 140, .g = 166, .b = 140 },
        { .r = 128, .g = 153, .b = 128 },
        { .r = 104, .g = 125, .b = 104 },
        { .r = 94, .g = 110, .b = 94 },
        { .r = 36, .g = 41, .b = 36 },
        { .r = 19, .g = 21, .b = 19 },
        { .r = 230, .g = 25, .b = 60 },
        { .r = 135, .g = 113, .b = 29 },
        { .r = 152, .g = 152, .b = 27 },
        { .r = 41, .g = 163, .b = 41 },
        { .r = 25, .g = 153, .b = 179 },
        { .r = 61, .g = 98, .b = 245 },
        { .r = 173, .g = 43, .b = 238 },
        { .r = 230, .g = 25, .b = 195 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 244, .g = 251, .b = 244 },
        { .r = 244, .g = 251, .b = 244 },
        { .r = 230, .g = 25, .b = 60 },
        { .r = 152, .g = 152, .b = 27 },
        { .r = 41, .g = 163, .b = 41 },
        { .r = 25, .g = 153, .b = 179 },
        { .r = 61, .g = 98, .b = 245 },
        { .r = 173, .g = 43, .b = 238 }
    },
    .system = 16,
    .variant = TINTED_VARIANT_LIGHT
};

#endif  /* BASE16_atelier_seaside_light_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_atelier_seaside_light,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
