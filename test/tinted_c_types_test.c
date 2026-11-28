#include <assert.h>
#include <stdio.h>
#include <string.h>

/* The types alone, then schemes on top of them, in either order. */
#include "tinted_types.h"
#define TINTED_IMPLEMENTATION
#include "base16-dracula.h"
#include "base24-catppuccin-latte.h"
#include "tinted8-catppuccin-mocha.h"
#include "tinted8-nord.h"
#include "tinted_types.h"

static int color_sum(const tinted_scheme* scheme) {
    return scheme->base[0].r + scheme->base[0].g + scheme->base[0].b;
}

int main(void) {
    assert(color_sum(&base16_dracula) == 40 + 42 + 54);
    assert(tinted8_catppuccin_mocha.name != NULL);

    /* The slug and variant. */
    assert(strcmp(base16_dracula.slug, "dracula") == 0);
    assert(base16_dracula.variant == TINTED_VARIANT_DARK);
    assert(strcmp(base24_catppuccin_latte.slug, "catppuccin-latte") == 0);
    assert(base24_catppuccin_latte.variant == TINTED_VARIANT_LIGHT);
    assert(tinted8_catppuccin_mocha.variant == TINTED_VARIANT_DARK);

    /* UI colors: Nord sets its own border and info colors... */
    assert(tinted8_nord.ui.border.normal.r == 59 && tinted8_nord.ui.border.normal.g == 66 && tinted8_nord.ui.border.normal.b == 82);
    assert(tinted8_nord.ui.status.info.r == 235 && tinted8_nord.ui.status.info.g == 203 && tinted8_nord.ui.status.info.b == 139);
    /* ...and Catppuccin Mocha's background falls back to the default, its black. */
    assert(tinted8_catppuccin_mocha.ui.global.normal.background.r == tinted8_catppuccin_mocha.black.normal.r);
    assert(tinted8_catppuccin_mocha.ui.global.normal.background.g == tinted8_catppuccin_mocha.black.normal.g);
    assert(tinted8_catppuccin_mocha.ui.global.normal.background.b == tinted8_catppuccin_mocha.black.normal.b);
    printf("Scheme: %s\n", base16_dracula.name);
    return 0;
}
