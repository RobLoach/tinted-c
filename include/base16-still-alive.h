/**
 * Base16 Still Alive 
 *
 * @author Derrick McKee (derrick.mckee@gmail.com), Tinted Theming (https://github.com/tinted-theming)
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

#ifndef BASE16_still_alive_H__
#define BASE16_still_alive_H__

/**
 * The Base16 Still Alive scheme.
 *
 * @author Derrick McKee (derrick.mckee@gmail.com), Tinted Theming (https://github.com/tinted-theming)
 */
extern const tinted_scheme base16_still_alive;

#endif  /* BASE16_still_alive_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_still_alive_IMPLEMENTATION_ONCE
#define BASE16_still_alive_IMPLEMENTATION_ONCE

const tinted_scheme base16_still_alive = {
    .name = "Still Alive",
    .base = {
        { .r = 240, .g = 240, .b = 240 },
        { .r = 214, .g = 214, .b = 214 },
        { .r = 189, .g = 189, .b = 189 },
        { .r = 163, .g = 163, .b = 163 },
        { .r = 96, .g = 87, .b = 88 },
        { .r = 76, .g = 56, .b = 59 },
        { .r = 51, .g = 31, .b = 33 },
        { .r = 20, .g = 12, .b = 13 },
        { .r = 216, .g = 0, .b = 0 },
        { .r = 240, .g = 216, .b = 72 },
        { .r = 255, .g = 240, .b = 24 },
        { .r = 48, .g = 168, .b = 96 },
        { .r = 54, .g = 211, .b = 255 },
        { .r = 54, .g = 94, .b = 255 },
        { .r = 144, .g = 54, .b = 255 },
        { .r = 20, .g = 12, .b = 13 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 240, .g = 240, .b = 240 },
        { .r = 240, .g = 240, .b = 240 },
        { .r = 216, .g = 0, .b = 0 },
        { .r = 255, .g = 240, .b = 24 },
        { .r = 48, .g = 168, .b = 96 },
        { .r = 54, .g = 211, .b = 255 },
        { .r = 54, .g = 94, .b = 255 },
        { .r = 144, .g = 54, .b = 255 }
    },
    .system = 16,
    .variant = "light"
};

#endif  /* BASE16_still_alive_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_still_alive,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
