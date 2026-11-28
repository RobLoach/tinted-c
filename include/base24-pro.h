/**
 * Base24 Pro 
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

#ifndef BASE24_pro_H__
#define BASE24_pro_H__

/**
 * The Base24 Pro scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const tinted_scheme base24_pro;

#endif  /* BASE24_pro_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE24_pro_IMPLEMENTATION_ONCE
#define BASE24_pro_IMPLEMENTATION_ONCE

const tinted_scheme base24_pro = {
    .name = "Pro",
    .slug = "pro",
    .base = {
        { .r = 0, .g = 0, .b = 0 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 102, .g = 102, .b = 102 },
        { .r = 124, .g = 124, .b = 124 },
        { .r = 146, .g = 146, .b = 146 },
        { .r = 168, .g = 168, .b = 168 },
        { .r = 191, .g = 191, .b = 191 },
        { .r = 229, .g = 229, .b = 229 },
        { .r = 153, .g = 0, .b = 0 },
        { .r = 153, .g = 153, .b = 0 },
        { .r = 0, .g = 0, .b = 255 },
        { .r = 0, .g = 166, .b = 0 },
        { .r = 0, .g = 166, .b = 178 },
        { .r = 31, .g = 8, .b = 219 },
        { .r = 178, .g = 0, .b = 178 },
        { .r = 76, .g = 0, .b = 0 },

        /* Base24 */
        { .r = 68, .g = 68, .b = 68 },
        { .r = 34, .g = 34, .b = 34 },
        { .r = 229, .g = 0, .b = 0 },
        { .r = 229, .g = 229, .b = 0 },
        { .r = 0, .g = 217, .b = 0 },
        { .r = 0, .g = 229, .b = 229 },
        { .r = 0, .g = 0, .b = 255 },
        { .r = 229, .g = 0, .b = 229 }
    },
    .system = 24,
    .variant = TINTED_VARIANT_DARK
};

#endif  /* BASE24_pro_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base24_pro,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
