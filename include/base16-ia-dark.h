/**
 * Base16 iA Dark 
 *
 * @author iA Inc. (modified by aramisgithub)
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

#ifndef BASE16_ia_dark_H__
#define BASE16_ia_dark_H__

/**
 * The Base16 iA Dark scheme.
 *
 * @author iA Inc. (modified by aramisgithub)
 */
extern const tinted_scheme base16_ia_dark;

#endif  /* BASE16_ia_dark_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_ia_dark_IMPLEMENTATION_ONCE
#define BASE16_ia_dark_IMPLEMENTATION_ONCE

const tinted_scheme base16_ia_dark = {
    .name = "iA Dark",
    .base = {
        { .r = 26, .g = 26, .b = 26 },
        { .r = 34, .g = 34, .b = 34 },
        { .r = 29, .g = 65, .b = 77 },
        { .r = 118, .g = 118, .b = 118 },
        { .r = 184, .g = 184, .b = 184 },
        { .r = 204, .g = 204, .b = 204 },
        { .r = 232, .g = 232, .b = 232 },
        { .r = 248, .g = 248, .b = 248 },
        { .r = 216, .g = 133, .b = 104 },
        { .r = 216, .g = 104, .b = 104 },
        { .r = 185, .g = 147, .b = 83 },
        { .r = 131, .g = 164, .b = 113 },
        { .r = 124, .g = 156, .b = 174 },
        { .r = 142, .g = 204, .b = 221 },
        { .r = 185, .g = 142, .b = 178 },
        { .r = 139, .g = 108, .b = 55 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 26, .g = 26, .b = 26 },
        { .r = 26, .g = 26, .b = 26 },
        { .r = 216, .g = 133, .b = 104 },
        { .r = 185, .g = 147, .b = 83 },
        { .r = 131, .g = 164, .b = 113 },
        { .r = 124, .g = 156, .b = 174 },
        { .r = 142, .g = 204, .b = 221 },
        { .r = 185, .g = 142, .b = 178 }
    },
    .system = 16
};

#endif  /* BASE16_ia_dark_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_ia_dark,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
