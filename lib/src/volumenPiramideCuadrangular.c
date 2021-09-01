#include "..\include\lib.h"

/** @brief Calculates the volume of a square pyramid
 * @param a The lenght of one of the sides of the base
 * @param h The height of the shape
 * @returns The result of multiplying the area of the base by a third of the height
*/
float volumenPiramideCuadrangular(float a, float h){
    float volumen,l_area;
    l_area=a*a;
    volumen=l_area*(h/3);
    return volumen;
}