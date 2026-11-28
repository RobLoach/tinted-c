/**
 * Base16 Yesterday Bright 
 *
 * @author FroZnShiva (https://github.com/FroZnShiva)
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

#ifndef BASE16_yesterday_bright_H__
#define BASE16_yesterday_bright_H__

/**
 * The Base16 Yesterday Bright scheme.
 *
 * @author FroZnShiva (https://github.com/FroZnShiva)
 */
extern const tinted_scheme base16_yesterday_bright;

#endif  /* BASE16_yesterday_bright_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_yesterday_bright_IMPLEMENTATION_ONCE
#define BASE16_yesterday_bright_IMPLEMENTATION_ONCE

const tinted_scheme base16_yesterday_bright = {
    .name = "Yesterday Bright",
    .slug = "yesterday-bright",
    .base = {
        { .r = 52, .g = 61, .b = 70 },
        { .r = 79, .g = 91, .b = 102 },
        { .r = 101, .g = 115, .b = 126 },
        { .r = 167, .g = 173, .b = 186 },
        { .r = 192, .g = 197, .b = 206 },
        { .r = 223, .g = 225, .b = 232 },
        { .r = 239, .g = 241, .b = 245 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 213, .g = 78, .b = 83 },
        { .r = 231, .g = 140, .b = 69 },
        { .r = 231, .g = 197, .b = 71 },
        { .r = 185, .g = 202, .b = 74 },
        { .r = 112, .g = 192, .b = 177 },
        { .r = 122, .g = 166, .b = 218 },
        { .r = 195, .g = 151, .b = 216 },
        { .r = 154, .g = 128, .b = 109 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 52, .g = 61, .b = 70 },
        { .r = 52, .g = 61, .b = 70 },
        { .r = 213, .g = 78, .b = 83 },
        { .r = 231, .g = 197, .b = 71 },
        { .r = 185, .g = 202, .b = 74 },
        { .r = 112, .g = 192, .b = 177 },
        { .r = 122, .g = 166, .b = 218 },
        { .r = 195, .g = 151, .b = 216 }
    },
    .system = 16,
    .variant = TINTED_VARIANT_DARK
};

#endif  /* BASE16_yesterday_bright_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_yesterday_bright,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
