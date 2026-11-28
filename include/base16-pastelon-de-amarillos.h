/**
 * Base16 Pastelón de Amarillos 
 *
 * @author Richard Martinez (https://sonofmartinus.com)
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

#ifndef BASE16_pastelon_de_amarillos_H__
#define BASE16_pastelon_de_amarillos_H__

/**
 * The Base16 Pastelón de Amarillos scheme.
 *
 * @author Richard Martinez (https://sonofmartinus.com)
 */
extern const tinted_scheme base16_pastelon_de_amarillos;

#endif  /* BASE16_pastelon_de_amarillos_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_pastelon_de_amarillos_IMPLEMENTATION_ONCE
#define BASE16_pastelon_de_amarillos_IMPLEMENTATION_ONCE

const tinted_scheme base16_pastelon_de_amarillos = {
    .name = "Pastelón de Amarillos",
    .base = {
        { .r = 255, .g = 244, .b = 214 },
        { .r = 242, .g = 208, .b = 131 },
        { .r = 214, .g = 155, .b = 69 },
        { .r = 128, .g = 97, .b = 107 },
        { .r = 104, .g = 70, .b = 83 },
        { .r = 67, .g = 44, .b = 59 },
        { .r = 47, .g = 28, .b = 46 },
        { .r = 28, .g = 15, .b = 32 },
        { .r = 189, .g = 53, .b = 72 },
        { .r = 173, .g = 87, .b = 15 },
        { .r = 148, .g = 100, .b = 0 },
        { .r = 22, .g = 116, .b = 81 },
        { .r = 0, .g = 114, .b = 112 },
        { .r = 30, .g = 93, .b = 168 },
        { .r = 141, .g = 63, .b = 137 },
        { .r = 124, .g = 53, .b = 40 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 255, .g = 244, .b = 214 },
        { .r = 255, .g = 244, .b = 214 },
        { .r = 189, .g = 53, .b = 72 },
        { .r = 148, .g = 100, .b = 0 },
        { .r = 22, .g = 116, .b = 81 },
        { .r = 0, .g = 114, .b = 112 },
        { .r = 30, .g = 93, .b = 168 },
        { .r = 141, .g = 63, .b = 137 }
    },
    .system = 16
};

#endif  /* BASE16_pastelon_de_amarillos_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_pastelon_de_amarillos,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
