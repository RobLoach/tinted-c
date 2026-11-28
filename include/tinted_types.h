/**
 * tinted-c: The Base16, Base24 and Tinted8 scheme types, without any schemes.
 * https://github.com/RobLoach/tinted-c
 *
 * Every scheme header includes this. Include it directly to use the types
 * without pulling in any scheme data.
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

#ifndef TINTED_C_COLOR_H__
#define TINTED_C_COLOR_H__

/**
 * A single color used for Base16 or Base24.
 */
typedef struct tinted_color {
    unsigned char r; /** Red channel */
    unsigned char g; /** Green channel */
    unsigned char b; /** Blue channel */
} tinted_color;

#endif /* TINTED_C_COLOR_H__ */

#ifndef TINTED_C_VARIANT_H__
#define TINTED_C_VARIANT_H__

/**
 * Whether a scheme is dark, with light text, or light, with dark text.
 */
typedef enum tinted_variant {
    TINTED_VARIANT_DARK = 0, /** A dark background with light text. */
    TINTED_VARIANT_LIGHT = 1 /** A light background with dark text. */
} tinted_variant;

#endif /* TINTED_C_VARIANT_H__ */

#ifndef TINTED_C_SCHEME_H__
#define TINTED_C_SCHEME_H__

/**
 * A Tinted Base16 or Base24 Scheme.
 */
typedef struct tinted_scheme {
    const char *name; /** The name of the scheme. */
    const char *slug; /** The slug of the scheme, a stable identifier like "catppuccin-mocha". */
    tinted_color base[24]; /** An array of the colors for the scheme. */
    unsigned char system; /** Which system the scheme was built for, either 16 or 24. */
    tinted_variant variant; /** Whether the scheme is dark or light. */
} tinted_scheme;

#endif  /* TINTED_C_SCHEME_H__ */

#ifndef TINTED_C_TINTED8_SCHEME_H__
#define TINTED_C_TINTED8_SCHEME_H__

/**
 * The normal, bright and dim variants of a single Tinted8 palette color.
 */
typedef struct tinted8_color_group {
    tinted_color normal; /** The normal variant of the color. */
    tinted_color bright; /** The bright variant of the color. */
    tinted_color dim; /** The dim variant of the color. */
} tinted8_color_group;

/**
 * A background and foreground color pair for a Tinted8 UI role.
 */
typedef struct tinted8_ui_colors {
    tinted_color background; /** The background color. */
    tinted_color foreground; /** The foreground color. */
} tinted8_ui_colors;

/**
 * The colors for each Tinted8 UI role, named after the Styling spec's `ui` keys.
 *
 * Each is the scheme's own color, or the Tinted8 builder's default for it.
 *
 * @see https://github.com/tinted-theming/home/blob/main/specs/tinted8/styling.md
 */
typedef struct tinted8_ui {
    struct {
        tinted_color normal;
    } accent; /** The primary accent, for focus and active indications. */
    struct {
        tinted_color normal;
    } border; /** Generic borders and dividers. */
    struct {
        tinted8_ui_colors dark;
        tinted8_ui_colors light;
        tinted8_ui_colors normal;
    } chrome; /** App chrome, such as sidebars, tab bars, status bars and toolbars. */
    struct {
        tinted8_ui_colors muted;
        tinted8_ui_colors normal;
    } cursor; /** The text cursor. */
    tinted_color deprecated; /** Deprecated or outdated elements. */
    struct {
        tinted8_ui_colors dark;
        tinted8_ui_colors light;
        tinted8_ui_colors normal;
    } global; /** The general background and text. Dark is the recessed surface and light the raised one, whatever the variant. */
    tinted8_ui_colors gutter; /** The gutter and line numbers. */
    struct {
        tinted8_ui_colors button;
        tinted8_ui_colors line;
        tinted8_ui_colors search;
        struct {
            tinted_color background;
            tinted_color foreground;
            tinted8_ui_colors active;
        } text;
    } highlight; /** Highlighted buttons, lines, search matches and text. */
    struct {
        tinted_color background;
        struct {
            tinted_color background;
        } active;
    } indent_guide; /** Indentation guides. */
    struct {
        tinted8_ui_colors normal;
    } link; /** Links and interactive text. */
    struct {
        tinted_color background;
        tinted_color foreground;
        struct {
            tinted_color background;
        } inactive;
    } selection; /** Selected items. */
    struct {
        tinted_color error;
        tinted_color info;
        tinted_color success;
        tinted_color warning;
    } status; /** Status and badge colors. */
    tinted8_ui_colors tooltip; /** Tooltips and hover popovers. */
    struct {
        tinted_color foreground;
    } whitespace; /** Whitespace and invisible character markers. */
} tinted8_ui;

/**
 * A Tinted8 Scheme.
 *
 * The scheme's `syntax` mapping is intentionally omitted, as it expands to
 * over a hundred fixed keys; the palette and `ui` colors are exposed.
 */
typedef struct tinted8_scheme {
    const char *name; /** The name of the scheme. */
    const char *slug; /** The slug of the scheme. */
    const char *author; /** The author of the scheme. */
    tinted_variant variant; /** Whether the scheme is dark or light. */
    const char *family; /** The scheme family, or an empty string. */
    const char *style; /** The style within the family, or an empty string. */
    tinted8_color_group black; /** The black color group. */
    tinted8_color_group red; /** The red color group. */
    tinted8_color_group green; /** The green color group. */
    tinted8_color_group yellow; /** The yellow color group. */
    tinted8_color_group blue; /** The blue color group. */
    tinted8_color_group magenta; /** The magenta color group. */
    tinted8_color_group cyan; /** The cyan color group. */
    tinted8_color_group white; /** The white color group. */
    tinted8_color_group orange; /** The orange color group. */
    tinted8_color_group gray; /** The gray color group. */
    tinted8_color_group brown; /** The brown color group. */
    tinted8_ui ui; /** The colors for each UI role. */
} tinted8_scheme;

#endif  /* TINTED_C_TINTED8_SCHEME_H__ */
