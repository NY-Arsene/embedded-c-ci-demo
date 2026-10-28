#include "sensor.h"

int32_t compute_depth_mm(int32_t pressure_mbar, int32_t surface_pressure_mbar) {
    if (pressure_mbar <= surface_pressure_mbar) {
        return 0;
    }
    // En eau douce : 1 mbar correspond environ à 10 mm de profondeur
    return (pressure_mbar - surface_pressure_mbar) * 10;
}