/**
 * Base16 PhD 
 *
 * @author Hennig Hasemann (http://leetless.de/vim.html)
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

#ifndef BASE16_phd_H__
#define BASE16_phd_H__

/**
 * The Base16 PhD scheme.
 *
 * @author Hennig Hasemann (http://leetless.de/vim.html)
 */
extern const tinted_scheme base16_phd;

#endif  /* BASE16_phd_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_phd_IMPLEMENTATION_ONCE
#define BASE16_phd_IMPLEMENTATION_ONCE

const tinted_scheme base16_phd = {
    .name = "PhD",
    .base = {
        { .r = 6, .g = 18, .b = 41 },
        { .r = 42, .g = 52, .b = 72 },
        { .r = 77, .g = 86, .b = 102 },
        { .r = 113, .g = 120, .b = 133 },
        { .r = 154, .g = 153, .b = 163 },
        { .r = 184, .g = 187, .b = 194 },
        { .r = 219, .g = 221, .b = 224 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 208, .g = 115, .b = 70 },
        { .r = 240, .g = 160, .b = 0 },
        { .r = 251, .g = 212, .b = 97 },
        { .r = 153, .g = 191, .b = 82 },
        { .r = 114, .g = 185, .b = 191 },
        { .r = 82, .g = 153, .b = 191 },
        { .r = 153, .g = 137, .b = 204 },
        { .r = 176, .g = 128, .b = 96 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 6, .g = 18, .b = 41 },
        { .r = 6, .g = 18, .b = 41 },
        { .r = 208, .g = 115, .b = 70 },
        { .r = 251, .g = 212, .b = 97 },
        { .r = 153, .g = 191, .b = 82 },
        { .r = 114, .g = 185, .b = 191 },
        { .r = 82, .g = 153, .b = 191 },
        { .r = 153, .g = 137, .b = 204 }
    },
    .system = 16,
    .variant = "dark"
};

#endif  /* BASE16_phd_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_phd,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
