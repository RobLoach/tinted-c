#include <assert.h>
#include <stdio.h>

/* The types alone, then schemes on top of them, in either order. */
#include "tinted_types.h"
#define TINTED_IMPLEMENTATION
#include "base16-dracula.h"
#include "tinted8-catppuccin-mocha.h"
#include "tinted_types.h"

static int color_sum(const tinted_scheme* scheme) {
    return scheme->base[0].r + scheme->base[0].g + scheme->base[0].b;
}

int main(void) {
    assert(color_sum(&base16_dracula) == 40 + 42 + 54);
    assert(tinted8_catppuccin_mocha.name != NULL);
    printf("Scheme: %s\n", base16_dracula.name);
    return 0;
}
