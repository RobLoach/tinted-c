/**
 * Tinted8 Catppuccin Mocha 
 *
 * @author https://github.com/catppuccin/catppuccin
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

#ifndef TINTED8_catppuccin_mocha_H__
#define TINTED8_catppuccin_mocha_H__

/**
 * The Tinted8 Catppuccin Mocha scheme.
 *
 * @author https://github.com/catppuccin/catppuccin
 */
extern const tinted8_scheme tinted8_catppuccin_mocha;

#endif  /* TINTED8_catppuccin_mocha_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef TINTED8_catppuccin_mocha_IMPLEMENTATION_ONCE
#define TINTED8_catppuccin_mocha_IMPLEMENTATION_ONCE

const tinted8_scheme tinted8_catppuccin_mocha = {
    .name = "Catppuccin Mocha",
    .slug = "catppuccin-mocha",
    .author = "https://github.com/catppuccin/catppuccin",
    .variant = "dark",
    .family = "Catppuccin",
    .style = "Mocha",
    .black = {
        .normal = { .r = 30, .g = 30, .b = 46 },
        .bright = { .r = 53, .g = 53, .b = 84 },
        .dim = { .r = 24, .g = 24, .b = 37 }
    },
    .red = {
        .normal = { .r = 243, .g = 139, .b = 168 },
        .bright = { .r = 249, .g = 194, .b = 210 },
        .dim = { .r = 245, .g = 76, .b = 123 }
    },
    .green = {
        .normal = { .r = 166, .g = 227, .b = 161 },
        .bright = { .r = 211, .g = 241, .b = 208 },
        .dim = { .r = 117, .g = 218, .b = 109 }
    },
    .yellow = {
        .normal = { .r = 249, .g = 226, .b = 175 },
        .bright = { .r = 252, .g = 246, .b = 233 },
        .dim = { .r = 251, .g = 208, .b = 112 }
    },
    .blue = {
        .normal = { .r = 137, .g = 180, .b = 250 },
        .bright = { .r = 196, .g = 217, .b = 252 },
        .dim = { .r = 71, .g = 141, .b = 255 }
    },
    .magenta = {
        .normal = { .r = 203, .g = 166, .b = 247 },
        .bright = { .r = 236, .g = 224, .b = 251 },
        .dim = { .r = 170, .g = 103, .b = 249 }
    },
    .cyan = {
        .normal = { .r = 148, .g = 226, .b = 213 },
        .bright = { .r = 196, .g = 239, .b = 232 },
        .dim = { .r = 137, .g = 220, .b = 235 }
    },
    .white = {
        .normal = { .r = 205, .g = 214, .b = 244 },
        .bright = { .r = 255, .g = 255, .b = 255 },
        .dim = { .r = 151, .g = 171, .b = 237 }
    },
    .orange = {
        .normal = { .r = 250, .g = 179, .b = 135 },
        .bright = { .r = 252, .g = 216, .b = 194 },
        .dim = { .r = 252, .g = 216, .b = 194 }
    },
    .gray = {
        .normal = { .r = 108, .g = 112, .b = 134 },
        .bright = { .r = 140, .g = 143, .b = 164 },
        .dim = { .r = 80, .g = 83, .b = 101 }
    },
    .brown = {
        .normal = { .r = 202, .g = 127, .b = 69 },
        .bright = { .r = 216, .g = 160, .b = 117 },
        .dim = { .r = 167, .g = 97, .b = 42 }
    }
};

#endif  /* TINTED8_catppuccin_mocha_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED8_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted8.h re-includes this header to build tinted8_schemes[]. */
&tinted8_catppuccin_mocha,
#endif  /* TINTED8_SCHEMES_ARRAY_ENTRY */
