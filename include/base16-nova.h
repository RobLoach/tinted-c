/**
 * Base16 Nova 
 *
 * @author George Essig (https://github.com/gessig), Trevor D. Miller (https://trevordmiller.com)
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

#ifndef BASE16_nova_H__
#define BASE16_nova_H__

/**
 * The Base16 Nova scheme.
 *
 * @author George Essig (https://github.com/gessig), Trevor D. Miller (https://trevordmiller.com)
 */
extern const tinted_scheme base16_nova;

#endif  /* BASE16_nova_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_nova_IMPLEMENTATION_ONCE
#define BASE16_nova_IMPLEMENTATION_ONCE

const tinted_scheme base16_nova = {
    .name = "Nova",
    .slug = "nova",
    .base = {
        { .r = 60, .g = 76, .b = 85 },
        { .r = 85, .g = 104, .b = 115 },
        { .r = 106, .g = 125, .b = 137 },
        { .r = 137, .g = 155, .b = 166 },
        { .r = 137, .g = 155, .b = 166 },
        { .r = 197, .g = 212, .b = 221 },
        { .r = 137, .g = 155, .b = 166 },
        { .r = 85, .g = 104, .b = 115 },
        { .r = 131, .g = 175, .b = 229 },
        { .r = 127, .g = 193, .b = 202 },
        { .r = 168, .g = 206, .b = 147 },
        { .r = 127, .g = 193, .b = 202 },
        { .r = 242, .g = 195, .b = 143 },
        { .r = 131, .g = 175, .b = 229 },
        { .r = 154, .g = 147, .b = 225 },
        { .r = 242, .g = 195, .b = 143 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 60, .g = 76, .b = 85 },
        { .r = 60, .g = 76, .b = 85 },
        { .r = 131, .g = 175, .b = 229 },
        { .r = 168, .g = 206, .b = 147 },
        { .r = 127, .g = 193, .b = 202 },
        { .r = 242, .g = 195, .b = 143 },
        { .r = 131, .g = 175, .b = 229 },
        { .r = 154, .g = 147, .b = 225 }
    },
    .system = 16,
    .variant = TINTED_VARIANT_DARK
};

#endif  /* BASE16_nova_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_nova,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
