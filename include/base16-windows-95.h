/**
 * Base16 Windows 95 
 *
 * @author Fergus Collins (https://github.com/ferguscollins)
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

#ifndef BASE16_windows_95_H__
#define BASE16_windows_95_H__

/**
 * The Base16 Windows 95 scheme.
 *
 * @author Fergus Collins (https://github.com/ferguscollins)
 */
extern const tinted_scheme base16_windows_95;

#endif  /* BASE16_windows_95_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_windows_95_IMPLEMENTATION_ONCE
#define BASE16_windows_95_IMPLEMENTATION_ONCE

const tinted_scheme base16_windows_95 = {
    .name = "Windows 95",
    .slug = "windows-95",
    .base = {
        { .r = 0, .g = 0, .b = 0 },
        { .r = 28, .g = 28, .b = 28 },
        { .r = 56, .g = 56, .b = 56 },
        { .r = 84, .g = 84, .b = 84 },
        { .r = 126, .g = 126, .b = 126 },
        { .r = 168, .g = 168, .b = 168 },
        { .r = 210, .g = 210, .b = 210 },
        { .r = 252, .g = 252, .b = 252 },
        { .r = 252, .g = 84, .b = 84 },
        { .r = 168, .g = 84, .b = 0 },
        { .r = 252, .g = 252, .b = 84 },
        { .r = 84, .g = 252, .b = 84 },
        { .r = 84, .g = 252, .b = 252 },
        { .r = 84, .g = 84, .b = 252 },
        { .r = 252, .g = 84, .b = 252 },
        { .r = 0, .g = 168, .b = 0 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 0, .g = 0, .b = 0 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 252, .g = 84, .b = 84 },
        { .r = 252, .g = 252, .b = 84 },
        { .r = 84, .g = 252, .b = 84 },
        { .r = 84, .g = 252, .b = 252 },
        { .r = 84, .g = 84, .b = 252 },
        { .r = 252, .g = 84, .b = 252 }
    },
    .system = 16,
    .variant = TINTED_VARIANT_DARK
};

#endif  /* BASE16_windows_95_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_windows_95,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
