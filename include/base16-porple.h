/**
 * Base16 Porple 
 *
 * @author Niek den Breeje (https://github.com/AuditeMarlow)
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

#ifndef BASE16_porple_H__
#define BASE16_porple_H__

/**
 * The Base16 Porple scheme.
 *
 * @author Niek den Breeje (https://github.com/AuditeMarlow)
 */
extern const tinted_scheme base16_porple;

#endif  /* BASE16_porple_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_porple_IMPLEMENTATION_ONCE
#define BASE16_porple_IMPLEMENTATION_ONCE

const tinted_scheme base16_porple = {
    .name = "Porple",
    .slug = "porple",
    .base = {
        { .r = 41, .g = 44, .b = 54 },
        { .r = 51, .g = 51, .b = 68 },
        { .r = 71, .g = 65, .b = 96 },
        { .r = 101, .g = 86, .b = 138 },
        { .r = 184, .g = 184, .b = 184 },
        { .r = 216, .g = 216, .b = 216 },
        { .r = 232, .g = 232, .b = 232 },
        { .r = 248, .g = 248, .b = 248 },
        { .r = 248, .g = 69, .b = 71 },
        { .r = 210, .g = 142, .b = 93 },
        { .r = 239, .g = 161, .b = 107 },
        { .r = 149, .g = 199, .b = 111 },
        { .r = 100, .g = 135, .b = 143 },
        { .r = 132, .g = 133, .b = 206 },
        { .r = 183, .g = 73, .b = 137 },
        { .r = 152, .g = 104, .b = 65 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 41, .g = 44, .b = 54 },
        { .r = 41, .g = 44, .b = 54 },
        { .r = 248, .g = 69, .b = 71 },
        { .r = 239, .g = 161, .b = 107 },
        { .r = 149, .g = 199, .b = 111 },
        { .r = 100, .g = 135, .b = 143 },
        { .r = 132, .g = 133, .b = 206 },
        { .r = 183, .g = 73, .b = 137 }
    },
    .system = 16,
    .variant = TINTED_VARIANT_DARK
};

#endif  /* BASE16_porple_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_porple,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
