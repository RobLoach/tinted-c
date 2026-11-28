/**
 * Base16 Green Screen 
 *
 * @author Chris Kempson (http://chriskempson.com)
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

#ifndef BASE16_greenscreen_H__
#define BASE16_greenscreen_H__

/**
 * The Base16 Green Screen scheme.
 *
 * @author Chris Kempson (http://chriskempson.com)
 */
extern const tinted_scheme base16_greenscreen;

#endif  /* BASE16_greenscreen_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_greenscreen_IMPLEMENTATION_ONCE
#define BASE16_greenscreen_IMPLEMENTATION_ONCE

const tinted_scheme base16_greenscreen = {
    .name = "Green Screen",
    .slug = "greenscreen",
    .base = {
        { .r = 0, .g = 17, .b = 0 },
        { .r = 0, .g = 51, .b = 0 },
        { .r = 0, .g = 85, .b = 0 },
        { .r = 0, .g = 119, .b = 0 },
        { .r = 0, .g = 153, .b = 0 },
        { .r = 0, .g = 187, .b = 0 },
        { .r = 0, .g = 221, .b = 0 },
        { .r = 0, .g = 255, .b = 0 },
        { .r = 0, .g = 119, .b = 0 },
        { .r = 0, .g = 153, .b = 0 },
        { .r = 0, .g = 119, .b = 0 },
        { .r = 0, .g = 187, .b = 0 },
        { .r = 0, .g = 85, .b = 0 },
        { .r = 0, .g = 153, .b = 0 },
        { .r = 0, .g = 187, .b = 0 },
        { .r = 0, .g = 85, .b = 0 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 0, .g = 17, .b = 0 },
        { .r = 0, .g = 17, .b = 0 },
        { .r = 0, .g = 119, .b = 0 },
        { .r = 0, .g = 119, .b = 0 },
        { .r = 0, .g = 187, .b = 0 },
        { .r = 0, .g = 85, .b = 0 },
        { .r = 0, .g = 153, .b = 0 },
        { .r = 0, .g = 187, .b = 0 }
    },
    .system = 16,
    .variant = TINTED_VARIANT_DARK
};

#endif  /* BASE16_greenscreen_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_greenscreen,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
