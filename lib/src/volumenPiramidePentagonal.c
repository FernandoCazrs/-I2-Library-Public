/**@brief Calculates the volume of a pentagonal Pyramid
 * @param a the lenght of one of the sides of the base
 * @param the height of the shape
 * @returns The result of the calculation
 */
#include "..\include\lib.h"
#include <math.h>

float volumenPiramidePentagonal(float a, float h){
    float volumen,area;
    area=0.25*sqrtf(5*(5+(2*sqrtf(5))))*(a*a);
    volumen=(area*h)/3;
    return volumen;
}