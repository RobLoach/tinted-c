/**
 * Base24 Scarlet Protocol 
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

#ifndef BASE24_scarlet_protocol_H__
#define BASE24_scarlet_protocol_H__

/**
 * The Base24 Scarlet Protocol scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const tinted_scheme base24_scarlet_protocol;

#endif  /* BASE24_scarlet_protocol_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE24_scarlet_protocol_IMPLEMENTATION_ONCE
#define BASE24_scarlet_protocol_IMPLEMENTATION_ONCE

const tinted_scheme base24_scarlet_protocol = {
    .name = "Scarlet Protocol",
    .slug = "scarlet-protocol",
    .base = {
        { .r = 27, .g = 21, .b = 60 },
        { .r = 16, .g = 17, .b = 22 },
        { .r = 103, .g = 103, .b = 103 },
        { .r = 127, .g = 127, .b = 127 },
        { .r = 151, .g = 151, .b = 151 },
        { .r = 175, .g = 175, .b = 175 },
        { .r = 199, .g = 199, .b = 199 },
        { .r = 254, .g = 255, .b = 255 },
        { .r = 255, .g = 0, .b = 81 },
        { .r = 250, .g = 249, .b = 69 },
        { .r = 104, .g = 113, .b = 255 },
        { .r = 0, .g = 220, .b = 132 },
        { .r = 0, .g = 197, .b = 199 },
        { .r = 2, .g = 113, .b = 182 },
        { .r = 201, .g = 48, .b = 199 },
        { .r = 127, .g = 0, .b = 40 },

        /* Base24 */
        { .r = 68, .g = 68, .b = 68 },
        { .r = 34, .g = 34, .b = 34 },
        { .r = 255, .g = 109, .b = 103 },
        { .r = 254, .g = 251, .b = 103 },
        { .r = 95, .g = 249, .b = 103 },
        { .r = 95, .g = 253, .b = 255 },
        { .r = 104, .g = 113, .b = 255 },
        { .r = 188, .g = 53, .b = 235 }
    },
    .system = 24,
    .variant = TINTED_VARIANT_DARK
};

#endif  /* BASE24_scarlet_protocol_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base24_scarlet_protocol,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
