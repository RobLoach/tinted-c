/**
 * Base16 Measured Dark 
 *
 * @author Measured (https://measured.co)
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

#ifndef BASE16_measured_dark_H__
#define BASE16_measured_dark_H__

/**
 * The Base16 Measured Dark scheme.
 *
 * @author Measured (https://measured.co)
 */
extern const tinted_scheme base16_measured_dark;

#endif  /* BASE16_measured_dark_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_measured_dark_IMPLEMENTATION_ONCE
#define BASE16_measured_dark_IMPLEMENTATION_ONCE

const tinted_scheme base16_measured_dark = {
    .name = "Measured Dark",
    .slug = "measured-dark",
    .base = {
        { .r = 0, .g = 33, .b = 31 },
        { .r = 0, .g = 58, .b = 56 },
        { .r = 0, .g = 84, .b = 83 },
        { .r = 171, .g = 171, .b = 171 },
        { .r = 195, .g = 195, .b = 195 },
        { .r = 220, .g = 220, .b = 220 },
        { .r = 239, .g = 239, .b = 239 },
        { .r = 245, .g = 245, .b = 245 },
        { .r = 206, .g = 126, .b = 142 },
        { .r = 220, .g = 163, .b = 124 },
        { .r = 191, .g = 172, .b = 78 },
        { .r = 86, .g = 193, .b = 111 },
        { .r = 98, .g = 192, .b = 190 },
        { .r = 136, .g = 176, .b = 218 },
        { .r = 179, .g = 155, .b = 224 },
        { .r = 216, .g = 154, .b = 186 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 0, .g = 33, .b = 31 },
        { .r = 0, .g = 33, .b = 31 },
        { .r = 206, .g = 126, .b = 142 },
        { .r = 191, .g = 172, .b = 78 },
        { .r = 86, .g = 193, .b = 111 },
        { .r = 98, .g = 192, .b = 190 },
        { .r = 136, .g = 176, .b = 218 },
        { .r = 179, .g = 155, .b = 224 }
    },
    .system = 16,
    .variant = TINTED_VARIANT_DARK
};

#endif  /* BASE16_measured_dark_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_measured_dark,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
