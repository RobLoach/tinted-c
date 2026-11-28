/**
 * Base24 Tango Adapted 
 *
 * @author FredHappyface (https://github.com/fredHappyface)
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

#ifndef BASE24_tango_adapted_H__
#define BASE24_tango_adapted_H__

/**
 * The Base24 Tango Adapted scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const tinted_scheme base24_tango_adapted;

#endif  /* BASE24_tango_adapted_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE24_tango_adapted_IMPLEMENTATION_ONCE
#define BASE24_tango_adapted_IMPLEMENTATION_ONCE

const tinted_scheme base24_tango_adapted = {
    .name = "Tango Adapted",
    .base = {
        { .r = 254, .g = 255, .b = 255 },
        { .r = 241, .g = 241, .b = 241 },
        { .r = 220, .g = 220, .b = 220 },
        { .r = 204, .g = 204, .b = 204 },
        { .r = 117, .g = 117, .b = 117 },
        { .r = 79, .g = 79, .b = 79 },
        { .r = 50, .g = 50, .b = 50 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 255, .g = 0, .b = 0 },
        { .r = 239, .g = 155, .b = 0 },
        { .r = 239, .g = 202, .b = 0 },
        { .r = 89, .g = 213, .b = 0 },
        { .r = 0, .g = 208, .b = 214 },
        { .r = 0, .g = 161, .b = 255 },
        { .r = 193, .g = 126, .b = 203 },
        { .r = 127, .g = 0, .b = 0 },

        /* Base24 */
        { .r = 94, .g = 97, .b = 92 },
        { .r = 47, .g = 48, .b = 46 },
        { .r = 255, .g = 0, .b = 18 },
        { .r = 255, .g = 240, .b = 33 },
        { .r = 147, .g = 254, .b = 0 },
        { .r = 0, .g = 253, .b = 255 },
        { .r = 136, .g = 201, .b = 255 },
        { .r = 232, .g = 166, .b = 225 }
    },
    .system = 24,
    .variant = "light"
};

#endif  /* BASE24_tango_adapted_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base24_tango_adapted,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
