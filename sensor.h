#ifndef SENSOR_H
#define SENSOR_H

#include <stdint.h>

/**
 * Calcule la profondeur en millimètres à partir de la pression mesurée (en mbar).
 * Sécurise la valeur si le capteur renvoie une pression inférieure à la surface.
 */
int32_t compute_depth_mm(int32_t pressure_mbar, int32_t surface_pressure_mbar);

#endif