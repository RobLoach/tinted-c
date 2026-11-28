/**
 * Base16 Google Light 
 *
 * @author Seth Wright (http://sethawright.com)
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

#ifndef BASE16_google_light_H__
#define BASE16_google_light_H__

/**
 * The Base16 Google Light scheme.
 *
 * @author Seth Wright (http://sethawright.com)
 */
extern const tinted_scheme base16_google_light;

#endif  /* BASE16_google_light_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_google_light_IMPLEMENTATION_ONCE
#define BASE16_google_light_IMPLEMENTATION_ONCE

const tinted_scheme base16_google_light = {
    .name = "Google Light",
    .slug = "google-light",
    .base = {
        { .r = 255, .g = 255, .b = 255 },
        { .r = 224, .g = 224, .b = 224 },
        { .r = 197, .g = 200, .b = 198 },
        { .r = 180, .g = 183, .b = 180 },
        { .r = 150, .g = 152, .b = 150 },
        { .r = 55, .g = 59, .b = 65 },
        { .r = 40, .g = 42, .b = 46 },
        { .r = 29, .g = 31, .b = 33 },
        { .r = 204, .g = 52, .b = 43 },
        { .r = 249, .g = 106, .b = 56 },
        { .r = 251, .g = 169, .b = 34 },
        { .r = 25, .g = 136, .b = 68 },
        { .r = 57, .g = 113, .b = 237 },
        { .r = 57, .g = 113, .b = 237 },
        { .r = 163, .g = 106, .b = 199 },
        { .r = 57, .g = 113, .b = 237 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 204, .g = 52, .b = 43 },
        { .r = 251, .g = 169, .b = 34 },
        { .r = 25, .g = 136, .b = 68 },
        { .r = 57, .g = 113, .b = 237 },
        { .r = 57, .g = 113, .b = 237 },
        { .r = 163, .g = 106, .b = 199 }
    },
    .system = 16,
    .variant = TINTED_VARIANT_LIGHT
};

#endif  /* BASE16_google_light_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_google_light,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
