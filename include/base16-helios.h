/**
 * Base16 Helios 
 *
 * @author Alex Meyer (https://github.com/reyemxela)
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

#ifndef BASE16_helios_H__
#define BASE16_helios_H__

/**
 * The Base16 Helios scheme.
 *
 * @author Alex Meyer (https://github.com/reyemxela)
 */
extern const tinted_scheme base16_helios;

#endif  /* BASE16_helios_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_helios_IMPLEMENTATION_ONCE
#define BASE16_helios_IMPLEMENTATION_ONCE

const tinted_scheme base16_helios = {
    .name = "Helios",
    .slug = "helios",
    .base = {
        { .r = 29, .g = 32, .b = 33 },
        { .r = 56, .g = 60, .b = 62 },
        { .r = 83, .g = 88, .b = 91 },
        { .r = 111, .g = 117, .b = 121 },
        { .r = 205, .g = 205, .b = 205 },
        { .r = 213, .g = 213, .b = 213 },
        { .r = 221, .g = 221, .b = 221 },
        { .r = 229, .g = 229, .b = 229 },
        { .r = 215, .g = 38, .b = 56 },
        { .r = 235, .g = 132, .b = 19 },
        { .r = 241, .g = 157, .b = 26 },
        { .r = 136, .g = 185, .b = 45 },
        { .r = 27, .g = 165, .b = 149 },
        { .r = 30, .g = 139, .b = 172 },
        { .r = 190, .g = 66, .b = 100 },
        { .r = 200, .g = 94, .b = 13 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 29, .g = 32, .b = 33 },
        { .r = 29, .g = 32, .b = 33 },
        { .r = 215, .g = 38, .b = 56 },
        { .r = 241, .g = 157, .b = 26 },
        { .r = 136, .g = 185, .b = 45 },
        { .r = 27, .g = 165, .b = 149 },
        { .r = 30, .g = 139, .b = 172 },
        { .r = 190, .g = 66, .b = 100 }
    },
    .system = 16,
    .variant = TINTED_VARIANT_DARK
};

#endif  /* BASE16_helios_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_helios,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
