/**
 * Base16 Sagelight 
 *
 * @author Carter Veldhuizen
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

#ifndef BASE16_sagelight_H__
#define BASE16_sagelight_H__

/**
 * The Base16 Sagelight scheme.
 *
 * @author Carter Veldhuizen
 */
extern const tinted_scheme base16_sagelight;

#endif  /* BASE16_sagelight_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_sagelight_IMPLEMENTATION_ONCE
#define BASE16_sagelight_IMPLEMENTATION_ONCE

const tinted_scheme base16_sagelight = {
    .name = "Sagelight",
    .base = {
        { .r = 248, .g = 248, .b = 248 },
        { .r = 232, .g = 232, .b = 232 },
        { .r = 216, .g = 216, .b = 216 },
        { .r = 184, .g = 184, .b = 184 },
        { .r = 88, .g = 88, .b = 88 },
        { .r = 56, .g = 56, .b = 56 },
        { .r = 40, .g = 40, .b = 40 },
        { .r = 24, .g = 24, .b = 24 },
        { .r = 250, .g = 132, .b = 128 },
        { .r = 255, .g = 170, .b = 97 },
        { .r = 255, .g = 220, .b = 97 },
        { .r = 160, .g = 210, .b = 200 },
        { .r = 162, .g = 214, .b = 245 },
        { .r = 160, .g = 167, .b = 210 },
        { .r = 200, .g = 160, .b = 210 },
        { .r = 210, .g = 178, .b = 160 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 248, .g = 248, .b = 248 },
        { .r = 248, .g = 248, .b = 248 },
        { .r = 250, .g = 132, .b = 128 },
        { .r = 255, .g = 220, .b = 97 },
        { .r = 160, .g = 210, .b = 200 },
        { .r = 162, .g = 214, .b = 245 },
        { .r = 160, .g = 167, .b = 210 },
        { .r = 200, .g = 160, .b = 210 }
    },
    .system = 16
};

#endif  /* BASE16_sagelight_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_sagelight,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
