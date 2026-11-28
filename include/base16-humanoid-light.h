/**
 * Base16 Humanoid light 
 *
 * @author Thomas (tasmo) Friese
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

#ifndef BASE16_humanoid_light_H__
#define BASE16_humanoid_light_H__

/**
 * The Base16 Humanoid light scheme.
 *
 * @author Thomas (tasmo) Friese
 */
extern const tinted_scheme base16_humanoid_light;

#endif  /* BASE16_humanoid_light_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_humanoid_light_IMPLEMENTATION_ONCE
#define BASE16_humanoid_light_IMPLEMENTATION_ONCE

const tinted_scheme base16_humanoid_light = {
    .name = "Humanoid light",
    .base = {
        { .r = 248, .g = 248, .b = 242 },
        { .r = 239, .g = 239, .b = 233 },
        { .r = 222, .g = 222, .b = 216 },
        { .r = 192, .g = 192, .b = 189 },
        { .r = 96, .g = 97, .b = 93 },
        { .r = 35, .g = 38, .b = 41 },
        { .r = 47, .g = 51, .b = 55 },
        { .r = 7, .g = 7, .b = 8 },
        { .r = 176, .g = 21, .b = 26 },
        { .r = 255, .g = 61, .b = 0 },
        { .r = 255, .g = 182, .b = 39 },
        { .r = 56, .g = 142, .b = 60 },
        { .r = 0, .g = 142, .b = 142 },
        { .r = 0, .g = 130, .b = 201 },
        { .r = 112, .g = 15, .b = 152 },
        { .r = 178, .g = 119, .b = 1 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 248, .g = 248, .b = 242 },
        { .r = 248, .g = 248, .b = 242 },
        { .r = 176, .g = 21, .b = 26 },
        { .r = 255, .g = 182, .b = 39 },
        { .r = 56, .g = 142, .b = 60 },
        { .r = 0, .g = 142, .b = 142 },
        { .r = 0, .g = 130, .b = 201 },
        { .r = 112, .g = 15, .b = 152 }
    },
    .system = 16
};

#endif  /* BASE16_humanoid_light_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_humanoid_light,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
