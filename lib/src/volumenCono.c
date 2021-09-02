#include "math.h"
#include "..\include\calculadoraVolumenAreaPerimetro.h"
#include <stdio.h>

/** @brief Calcula el volumen de un Cono
 * @param r El valor del radio de la base del Cono
 * @param h El valor de la altura del Cono
 * @returns El volumen total de la figura
*/
float volumenCono (float r, float h){
    float z;
    z = r * r * h * M_PI * (0.333);
    return z;
}