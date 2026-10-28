#include <stdio.h>
#include <assert.h>
#include "sensor.h"

int main(void) {
    printf("Demarrage des tests unitaires du module capteur...\n");

    // Cas 1 : A la surface (1013 mbar), la profondeur doit etre 0 mm
    assert(compute_depth_mm(1013, 1013) == 0);

    // Cas 2 : Immersion a 1 metre (1113 mbar -> +100 mbar -> 1000 mm)
    assert(compute_depth_mm(1113, 1013) == 1000);

    // Cas 3 : Bruit capteur sous la pression atmospherique (doit saturer a 0)
    assert(compute_depth_mm(980, 1013) == 0);

    printf("SUCCES : Tous les tests unitaires sont valides !\n");
    return 0;
}