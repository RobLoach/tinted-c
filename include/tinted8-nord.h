/**
 * Tinted8 Nord 
 *
 * @author Tinted Theming (https://github.com/tinted-theming)
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

#ifndef TINTED8_nord_H__
#define TINTED8_nord_H__

/**
 * The Tinted8 Nord scheme.
 *
 * @author Tinted Theming (https://github.com/tinted-theming)
 */
extern const tinted8_scheme tinted8_nord;

#endif  /* TINTED8_nord_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef TINTED8_nord_IMPLEMENTATION_ONCE
#define TINTED8_nord_IMPLEMENTATION_ONCE

const tinted8_scheme tinted8_nord = {
    .name = "Nord",
    .slug = "nord",
    .author = "Tinted Theming (https://github.com/tinted-theming)",
    .variant = "dark",
    .family = "",
    .style = "",
    .black = {
        .normal = { .r = 46, .g = 52, .b = 64 },
        .bright = { .r = 70, .g = 81, .b = 101 },
        .dim = { .r = 20, .g = 23, .b = 29 }
    },
    .red = {
        .normal = { .r = 191, .g = 97, .b = 106 },
        .bright = { .r = 209, .g = 141, .b = 147 },
        .dim = { .r = 165, .g = 62, .b = 72 }
    },
    .green = {
        .normal = { .r = 163, .g = 190, .b = 140 },
        .bright = { .r = 194, .g = 212, .b = 179 },
        .dim = { .r = 132, .g = 170, .b = 99 }
    },
    .yellow = {
        .normal = { .r = 235, .g = 203, .b = 139 },
        .bright = { .r = 244, .g = 226, .b = 191 },
        .dim = { .r = 233, .g = 182, .b = 80 }
    },
    .blue = {
        .normal = { .r = 129, .g = 161, .b = 193 },
        .bright = { .r = 170, .g = 192, .b = 213 },
        .dim = { .r = 94, .g = 129, .b = 172 }
    },
    .magenta = {
        .normal = { .r = 180, .g = 142, .b = 173 },
        .bright = { .r = 204, .g = 179, .b = 200 },
        .dim = { .r = 157, .g = 103, .b = 147 }
    },
    .cyan = {
        .normal = { .r = 136, .g = 192, .b = 208 },
        .bright = { .r = 180, .g = 215, .b = 225 },
        .dim = { .r = 89, .g = 171, .b = 194 }
    },
    .white = {
        .normal = { .r = 229, .g = 233, .b = 240 },
        .bright = { .r = 236, .g = 239, .b = 244 },
        .dim = { .r = 216, .g = 222, .b = 233 }
    },
    .orange = {
        .normal = { .r = 208, .g = 135, .b = 112 },
        .bright = { .r = 223, .g = 174, .b = 158 },
        .dim = { .r = 223, .g = 174, .b = 158 }
    },
    .gray = {
        .normal = { .r = 97, .g = 110, .b = 136 },
        .bright = { .r = 128, .g = 141, .b = 167 },
        .dim = { .r = 71, .g = 81, .b = 101 }
    },
    .brown = {
        .normal = { .r = 161, .g = 102, .b = 60 },
        .bright = { .r = 197, .g = 132, .b = 85 },
        .dim = { .r = 119, .g = 73, .b = 41 }
    }
};

#endif  /* TINTED8_nord_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED8_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted8.h re-includes this header to build tinted8_schemes[]. */
&tinted8_nord,
#endif  /* TINTED8_SCHEMES_ARRAY_ENTRY */
