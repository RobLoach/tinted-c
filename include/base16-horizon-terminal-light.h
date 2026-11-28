/**
 * Base16 Horizon Terminal Light 
 *
 * @author Michaël Ball (http://github.com/michael-ball/)
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

#ifndef BASE16_horizon_terminal_light_H__
#define BASE16_horizon_terminal_light_H__

/**
 * The Base16 Horizon Terminal Light scheme.
 *
 * @author Michaël Ball (http://github.com/michael-ball/)
 */
extern const tinted_scheme base16_horizon_terminal_light;

#endif  /* BASE16_horizon_terminal_light_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_horizon_terminal_light_IMPLEMENTATION_ONCE
#define BASE16_horizon_terminal_light_IMPLEMENTATION_ONCE

const tinted_scheme base16_horizon_terminal_light = {
    .name = "Horizon Terminal Light",
    .base = {
        { .r = 253, .g = 240, .b = 237 },
        { .r = 250, .g = 218, .b = 209 },
        { .r = 249, .g = 203, .b = 190 },
        { .r = 189, .g = 179, .b = 177 },
        { .r = 148, .g = 140, .b = 138 },
        { .r = 64, .g = 60, .b = 61 },
        { .r = 48, .g = 44, .b = 45 },
        { .r = 32, .g = 28, .b = 29 },
        { .r = 233, .g = 86, .b = 120 },
        { .r = 249, .g = 206, .b = 195 },
        { .r = 250, .g = 218, .b = 209 },
        { .r = 41, .g = 211, .b = 152 },
        { .r = 89, .g = 225, .b = 227 },
        { .r = 38, .g = 187, .b = 217 },
        { .r = 238, .g = 100, .b = 172 },
        { .r = 249, .g = 203, .b = 190 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 253, .g = 240, .b = 237 },
        { .r = 253, .g = 240, .b = 237 },
        { .r = 233, .g = 86, .b = 120 },
        { .r = 250, .g = 218, .b = 209 },
        { .r = 41, .g = 211, .b = 152 },
        { .r = 89, .g = 225, .b = 227 },
        { .r = 38, .g = 187, .b = 217 },
        { .r = 238, .g = 100, .b = 172 }
    },
    .system = 16
};

#endif  /* BASE16_horizon_terminal_light_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_horizon_terminal_light,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
