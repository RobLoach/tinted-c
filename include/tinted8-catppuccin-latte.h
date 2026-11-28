/**
 * Tinted8 Catppuccin Latte 
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

#ifndef TINTED8_catppuccin_latte_H__
#define TINTED8_catppuccin_latte_H__

/**
 * The Tinted8 Catppuccin Latte scheme.
 *
 * @author https://github.com/catppuccin/catppuccin
 */
extern const tinted8_scheme tinted8_catppuccin_latte;

#endif  /* TINTED8_catppuccin_latte_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef TINTED8_catppuccin_latte_IMPLEMENTATION_ONCE
#define TINTED8_catppuccin_latte_IMPLEMENTATION_ONCE

const tinted8_scheme tinted8_catppuccin_latte = {
    .name = "Catppuccin Latte",
    .slug = "catppuccin-latte",
    .author = "https://github.com/catppuccin/catppuccin",
    .variant = TINTED_VARIANT_LIGHT,
    .family = "Catppuccin",
    .style = "Latte",
    .black = {
        .normal = { .r = 76, .g = 79, .b = 105 },
        .bright = { .r = 108, .g = 111, .b = 133 },
        .dim = { .r = 50, .g = 52, .b = 70 }
    },
    .red = {
        .normal = { .r = 210, .g = 15, .b = 57 },
        .bright = { .r = 248, .g = 38, .b = 83 },
        .dim = { .r = 158, .g = 6, .b = 39 }
    },
    .green = {
        .normal = { .r = 64, .g = 160, .b = 43 },
        .bright = { .r = 83, .g = 209, .b = 56 },
        .dim = { .r = 44, .g = 113, .b = 28 }
    },
    .yellow = {
        .normal = { .r = 223, .g = 142, .b = 29 },
        .bright = { .r = 238, .g = 170, .b = 75 },
        .dim = { .r = 174, .g = 108, .b = 17 }
    },
    .blue = {
        .normal = { .r = 30, .g = 102, .b = 245 },
        .bright = { .r = 89, .g = 142, .b = 248 },
        .dim = { .r = 2, .g = 72, .b = 212 }
    },
    .magenta = {
        .normal = { .r = 136, .g = 57, .b = 239 },
        .bright = { .r = 170, .g = 114, .b = 244 },
        .dim = { .r = 103, .g = 11, .b = 224 }
    },
    .cyan = {
        .normal = { .r = 23, .g = 146, .b = 153 },
        .bright = { .r = 24, .g = 203, .b = 213 },
        .dim = { .r = 4, .g = 165, .b = 229 }
    },
    .white = {
        .normal = { .r = 220, .g = 224, .b = 232 },
        .bright = { .r = 255, .g = 255, .b = 255 },
        .dim = { .r = 182, .g = 191, .b = 209 }
    },
    .orange = {
        .normal = { .r = 254, .g = 100, .b = 11 },
        .bright = { .r = 254, .g = 139, .b = 72 },
        .dim = { .r = 254, .g = 139, .b = 72 }
    },
    .gray = {
        .normal = { .r = 156, .g = 160, .b = 176 },
        .bright = { .r = 190, .g = 193, .b = 203 },
        .dim = { .r = 121, .g = 127, .b = 150 }
    },
    .brown = {
        .normal = { .r = 74, .g = 41, .b = 25 },
        .bright = { .r = 123, .g = 65, .b = 37 },
        .dim = { .r = 29, .g = 16, .b = 9 }
    },
    .ui = {
        .accent = {
            .normal = { .r = 23, .g = 146, .b = 153 }
        },
        .border = {
            .normal = { .r = 121, .g = 127, .b = 150 }
        },
        .chrome = {
            .dark = {
                .background = { .r = 190, .g = 193, .b = 203 },
                .foreground = { .r = 50, .g = 52, .b = 70 }
            },
            .light = {
                .background = { .r = 220, .g = 224, .b = 232 },
                .foreground = { .r = 108, .g = 111, .b = 133 }
            },
            .normal = {
                .background = { .r = 182, .g = 191, .b = 209 },
                .foreground = { .r = 76, .g = 79, .b = 105 }
            }
        },
        .cursor = {
            .muted = {
                .background = { .r = 121, .g = 127, .b = 150 },
                .foreground = { .r = 190, .g = 193, .b = 203 }
            },
            .normal = {
                .background = { .r = 76, .g = 79, .b = 105 },
                .foreground = { .r = 220, .g = 224, .b = 232 }
            }
        },
        .deprecated = { .r = 74, .g = 41, .b = 25 },
        .global = {
            .dark = {
                .background = { .r = 182, .g = 191, .b = 209 },
                .foreground = { .r = 108, .g = 111, .b = 133 }
            },
            .light = {
                .background = { .r = 255, .g = 255, .b = 255 },
                .foreground = { .r = 50, .g = 52, .b = 70 }
            },
            .normal = {
                .background = { .r = 220, .g = 224, .b = 232 },
                .foreground = { .r = 76, .g = 79, .b = 105 }
            }
        },
        .gutter = {
            .background = { .r = 220, .g = 224, .b = 232 },
            .foreground = { .r = 108, .g = 111, .b = 133 }
        },
        .highlight = {
            .button = {
                .background = { .r = 182, .g = 191, .b = 209 },
                .foreground = { .r = 76, .g = 79, .b = 105 }
            },
            .line = {
                .background = { .r = 182, .g = 191, .b = 209 },
                .foreground = { .r = 108, .g = 111, .b = 133 }
            },
            .search = {
                .background = { .r = 182, .g = 191, .b = 209 },
                .foreground = { .r = 223, .g = 142, .b = 29 }
            },
            .text = {
                .background = { .r = 182, .g = 191, .b = 209 },
                .foreground = { .r = 76, .g = 79, .b = 105 },
                .active = {
                    .background = { .r = 156, .g = 160, .b = 176 },
                    .foreground = { .r = 76, .g = 79, .b = 105 }
                }
            }
        },
        .indent_guide = {
            .background = { .r = 182, .g = 191, .b = 209 },
            .active = {
                .background = { .r = 190, .g = 193, .b = 203 }
            }
        },
        .link = {
            .normal = {
                .background = { .r = 220, .g = 224, .b = 232 },
                .foreground = { .r = 23, .g = 146, .b = 153 }
            }
        },
        .selection = {
            .background = { .r = 182, .g = 191, .b = 209 },
            .foreground = { .r = 76, .g = 79, .b = 105 },
            .inactive = {
                .background = { .r = 182, .g = 191, .b = 209 }
            }
        },
        .status = {
            .error = { .r = 210, .g = 15, .b = 57 },
            .info = { .r = 254, .g = 100, .b = 11 },
            .success = { .r = 64, .g = 160, .b = 43 },
            .warning = { .r = 223, .g = 142, .b = 29 }
        },
        .tooltip = {
            .background = { .r = 255, .g = 255, .b = 255 },
            .foreground = { .r = 76, .g = 79, .b = 105 }
        },
        .whitespace = {
            .foreground = { .r = 156, .g = 160, .b = 176 }
        }
    }
};

#endif  /* TINTED8_catppuccin_latte_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED8_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted8.h re-includes this header to build tinted8_schemes[]. */
&tinted8_catppuccin_latte,
#endif  /* TINTED8_SCHEMES_ARRAY_ENTRY */
