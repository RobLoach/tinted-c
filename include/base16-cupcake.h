/**
 * Base16 Cupcake 
 *
 * @author Chris Kempson (http://chriskempson.com)
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

#ifndef BASE16_cupcake_H__
#define BASE16_cupcake_H__

/**
 * The Base16 Cupcake scheme.
 *
 * @author Chris Kempson (http://chriskempson.com)
 */
extern const tinted_scheme base16_cupcake;

#endif  /* BASE16_cupcake_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_cupcake_IMPLEMENTATION_ONCE
#define BASE16_cupcake_IMPLEMENTATION_ONCE

const tinted_scheme base16_cupcake = {
    .name = "Cupcake",
    .base = {
        { .r = 251, .g = 241, .b = 242 },
        { .r = 242, .g = 241, .b = 244 },
        { .r = 216, .g = 213, .b = 221 },
        { .r = 191, .g = 185, .b = 198 },
        { .r = 165, .g = 157, .b = 175 },
        { .r = 139, .g = 129, .b = 152 },
        { .r = 114, .g = 103, .b = 126 },
        { .r = 88, .g = 80, .b = 98 },
        { .r = 213, .g = 126, .b = 133 },
        { .r = 235, .g = 183, .b = 144 },
        { .r = 220, .g = 177, .b = 108 },
        { .r = 163, .g = 179, .b = 103 },
        { .r = 105, .g = 169, .b = 167 },
        { .r = 114, .g = 151, .b = 185 },
        { .r = 187, .g = 153, .b = 180 },
        { .r = 186, .g = 165, .b = 140 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 251, .g = 241, .b = 242 },
        { .r = 251, .g = 241, .b = 242 },
        { .r = 213, .g = 126, .b = 133 },
        { .r = 220, .g = 177, .b = 108 },
        { .r = 163, .g = 179, .b = 103 },
        { .r = 105, .g = 169, .b = 167 },
        { .r = 114, .g = 151, .b = 185 },
        { .r = 187, .g = 153, .b = 180 }
    },
    .system = 16,
    .variant = "light"
};

#endif  /* BASE16_cupcake_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_cupcake,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
