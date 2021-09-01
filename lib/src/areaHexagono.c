#include "..\include\lib.h"

/** @brief Calcula el area de un Hexagono
 * @param l El valor de un lado del Hexagono
 * @param a El apotema del Hexagono
 * @returns El area total de la figura
*/
float areaHexagono (float l, float a){
     float z;
     z = (6*l*a)/2;
     return z;
}