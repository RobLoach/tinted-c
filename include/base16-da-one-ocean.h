/**
 * Base16 Da One Ocean 
 *
 * @author NNB (https://github.com/NNBnh)
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

#ifndef BASE16_da_one_ocean_H__
#define BASE16_da_one_ocean_H__

/**
 * The Base16 Da One Ocean scheme.
 *
 * @author NNB (https://github.com/NNBnh)
 */
extern const tinted_scheme base16_da_one_ocean;

#endif  /* BASE16_da_one_ocean_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_da_one_ocean_IMPLEMENTATION_ONCE
#define BASE16_da_one_ocean_IMPLEMENTATION_ONCE

const tinted_scheme base16_da_one_ocean = {
    .name = "Da One Ocean",
    .base = {
        { .r = 23, .g = 23, .b = 38 },
        { .r = 34, .g = 39, .b = 61 },
        { .r = 82, .g = 88, .b = 102 },
        { .r = 135, .g = 141, .b = 150 },
        { .r = 200, .g = 200, .b = 200 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 250, .g = 120, .b = 131 },
        { .r = 255, .g = 195, .b = 135 },
        { .r = 255, .g = 148, .b = 112 },
        { .r = 152, .g = 195, .b = 121 },
        { .r = 138, .g = 245, .b = 255 },
        { .r = 107, .g = 184, .b = 255 },
        { .r = 231, .g = 153, .b = 255 },
        { .r = 179, .g = 104, .b = 79 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 23, .g = 23, .b = 38 },
        { .r = 23, .g = 23, .b = 38 },
        { .r = 250, .g = 120, .b = 131 },
        { .r = 255, .g = 148, .b = 112 },
        { .r = 152, .g = 195, .b = 121 },
        { .r = 138, .g = 245, .b = 255 },
        { .r = 107, .g = 184, .b = 255 },
        { .r = 231, .g = 153, .b = 255 }
    },
    .system = 16
};

#endif  /* BASE16_da_one_ocean_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_da_one_ocean,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
