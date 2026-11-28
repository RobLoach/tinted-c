/**
 * Base24 Github Dark Colorblind 
 *
 * @author Tinted Theming (https://github.com/tinted-theming)
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

#ifndef BASE24_github_dark_colorblind_H__
#define BASE24_github_dark_colorblind_H__

/**
 * The Base24 Github Dark Colorblind scheme.
 *
 * @author Tinted Theming (https://github.com/tinted-theming)
 */
extern const tinted_scheme base24_github_dark_colorblind;

#endif  /* BASE24_github_dark_colorblind_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE24_github_dark_colorblind_IMPLEMENTATION_ONCE
#define BASE24_github_dark_colorblind_IMPLEMENTATION_ONCE

const tinted_scheme base24_github_dark_colorblind = {
    .name = "Github Dark Colorblind",
    .base = {
        { .r = 13, .g = 17, .b = 23 },
        { .r = 22, .g = 27, .b = 34 },
        { .r = 72, .g = 79, .b = 88 },
        { .r = 110, .g = 118, .b = 129 },
        { .r = 139, .g = 148, .b = 158 },
        { .r = 201, .g = 209, .b = 217 },
        { .r = 240, .g = 246, .b = 252 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 253, .g = 172, .b = 84 },
        { .r = 121, .g = 192, .b = 255 },
        { .r = 187, .g = 128, .b = 9 },
        { .r = 165, .g = 214, .b = 255 },
        { .r = 165, .g = 214, .b = 255 },
        { .r = 210, .g = 168, .b = 255 },
        { .r = 236, .g = 142, .b = 44 },
        { .r = 253, .g = 172, .b = 84 },

        /* Base24 */
        { .r = 1, .g = 4, .b = 9 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 236, .g = 142, .b = 44 },
        { .r = 210, .g = 153, .b = 34 },
        { .r = 88, .g = 166, .b = 255 },
        { .r = 51, .g = 179, .b = 174 },
        { .r = 88, .g = 166, .b = 255 },
        { .r = 188, .g = 140, .b = 255 }
    },
    .system = 24,
    .variant = "dark"
};

#endif  /* BASE24_github_dark_colorblind_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base24_github_dark_colorblind,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
