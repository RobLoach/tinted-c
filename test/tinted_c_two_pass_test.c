#include <assert.h>
#include <stdio.h>

/* First pass: declarations only, as a shared header would include it. */
#include "tinted.h"
#include "tinted8.h"

/* Second pass: compile the implementation. */
#define TINTED_IMPLEMENTATION
#include "tinted.h"
#include "tinted8.h"

int main(void) {
    int i;
    for (i = 0; i < TINTED_COUNT; i++) {
        assert(tinted_schemes[i] != NULL);
        assert(tinted_schemes[i]->name != NULL);
    }
    for (i = 0; i < TINTED8_COUNT; i++) {
        assert(tinted8_schemes[i] != NULL);
    }
    printf("Schemes: %d, Tinted8: %d\n", TINTED_COUNT, TINTED8_COUNT);
    return 0;
}
