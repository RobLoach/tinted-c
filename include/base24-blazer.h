/**
 * Base24 Blazer 
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

#ifndef BASE24_blazer_H__
#define BASE24_blazer_H__

/**
 * The Base24 Blazer scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const tinted_scheme base24_blazer;

#endif  /* BASE24_blazer_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE24_blazer_IMPLEMENTATION_ONCE
#define BASE24_blazer_IMPLEMENTATION_ONCE

const tinted_scheme base24_blazer = {
    .name = "Blazer",
    .slug = "blazer",
    .base = {
        { .r = 13, .g = 25, .b = 38 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 38, .g = 38, .b = 38 },
        { .r = 82, .g = 82, .b = 82 },
        { .r = 127, .g = 127, .b = 127 },
        { .r = 172, .g = 172, .b = 172 },
        { .r = 217, .g = 217, .b = 217 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 184, .g = 122, .b = 122 },
        { .r = 184, .g = 184, .b = 122 },
        { .r = 189, .g = 189, .b = 219 },
        { .r = 122, .g = 184, .b = 122 },
        { .r = 122, .g = 184, .b = 184 },
        { .r = 122, .g = 122, .b = 184 },
        { .r = 184, .g = 122, .b = 184 },
        { .r = 92, .g = 61, .b = 61 },

        /* Base24 */
        { .r = 25, .g = 25, .b = 25 },
        { .r = 12, .g = 12, .b = 12 },
        { .r = 219, .g = 189, .b = 189 },
        { .r = 219, .g = 219, .b = 189 },
        { .r = 189, .g = 219, .b = 189 },
        { .r = 189, .g = 219, .b = 219 },
        { .r = 189, .g = 189, .b = 219 },
        { .r = 219, .g = 189, .b = 219 }
    },
    .system = 24,
    .variant = TINTED_VARIANT_DARK
};

#endif  /* BASE24_blazer_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base24_blazer,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
