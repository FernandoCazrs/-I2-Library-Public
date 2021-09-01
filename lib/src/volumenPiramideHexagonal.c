/**@brief Calculates the volume of a hexagonal pyramid
 * @param a The length of one of the sides of the base
 * @param h The height of the shape
 * @returns The result of the calculation
 */
#include "..\include\lib.h"
#include <math.h>

float volumenPiramideHexagonal(float a, float h){
    float area,volumen;
    volumen=(sqrtf(3)/2)*(a*a)*h;
    return volumen;
}