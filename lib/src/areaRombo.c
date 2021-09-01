#include "..\include\lib.h"

/** @brief Calcula el area de un Rombo
 * @param dm El valor de la diagonal mayor del Rombo
 * @param dM El valor de la diagonal menor del Rombo
 * @returns El area total de la figura
*/
float areaRombo(float dm, float dM){
    float z;
    z = (dm * dM)/2;
    return z;
}