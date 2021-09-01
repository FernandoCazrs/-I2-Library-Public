#include "math.h"
#include "..\include\calculadoraVolumenAreaPerimetro.h"
#include <stdio.h>

/** @brief Calcula el volumen de la Esfera
 * @param r El valor del radio de la Esfera
 * @returns El volumen total de la figura 
*/
float volumenEsfera (float r){
    float z;
    z = (4/3) * r * r * r * M_PI;
    return z;
}