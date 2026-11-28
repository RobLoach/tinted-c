/**
 * Base24 Dark Plus 
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

#ifndef BASE24_dark_plus_H__
#define BASE24_dark_plus_H__

/**
 * The Base24 Dark Plus scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const tinted_scheme base24_dark_plus;

#endif  /* BASE24_dark_plus_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE24_dark_plus_IMPLEMENTATION_ONCE
#define BASE24_dark_plus_IMPLEMENTATION_ONCE

const tinted_scheme base24_dark_plus = {
    .name = "Dark Plus",
    .slug = "dark-plus",
    .base = {
        { .r = 14, .g = 14, .b = 14 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 102, .g = 102, .b = 102 },
        { .r = 133, .g = 133, .b = 133 },
        { .r = 165, .g = 165, .b = 165 },
        { .r = 197, .g = 197, .b = 197 },
        { .r = 229, .g = 229, .b = 229 },
        { .r = 229, .g = 229, .b = 229 },
        { .r = 205, .g = 49, .b = 49 },
        { .r = 229, .g = 229, .b = 16 },
        { .r = 59, .g = 142, .b = 234 },
        { .r = 13, .g = 188, .b = 121 },
        { .r = 17, .g = 168, .b = 205 },
        { .r = 36, .g = 114, .b = 200 },
        { .r = 188, .g = 63, .b = 188 },
        { .r = 102, .g = 24, .b = 24 },

        /* Base24 */
        { .r = 68, .g = 68, .b = 68 },
        { .r = 34, .g = 34, .b = 34 },
        { .r = 241, .g = 76, .b = 76 },
        { .r = 245, .g = 245, .b = 67 },
        { .r = 35, .g = 209, .b = 139 },
        { .r = 41, .g = 184, .b = 219 },
        { .r = 59, .g = 142, .b = 234 },
        { .r = 214, .g = 112, .b = 214 }
    },
    .system = 24,
    .variant = TINTED_VARIANT_DARK
};

#endif  /* BASE24_dark_plus_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base24_dark_plus,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
