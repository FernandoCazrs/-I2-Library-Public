#include "..\include\calculadoraVolumenAreaPerimetro.h"
#include <stdio.h>
#include <math.h>
/** @brief Calculates the volume of a hexagonal pyramid
 * @param a The length of one of the sides of the base
 * @param h The height of the shape
 * @returns The result of the calculation
*/
float volumenPiramideHexagonal(float a, float h){
    float area,volumen;
    volumen=(sqrtf(3)/2)*(a*a)*h;
    return volumen;
}