#include "..\include\lib.h"
#include <math.h>

/** @brief Calculates the area of a regular pentagon
 * @param a One of the sides of the shape
 * @returns The result of the operation
 */
float areaPentagono(float a){
    float area;
    area=0.25*sqrtf(5*(5+(2*sqrtf(5))))*(a*a);
    return area;
}
