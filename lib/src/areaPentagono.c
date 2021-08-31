/**@brief Calculates the area of a regular pentagon
 * @param a One of the sides of the shape
 * @returns The result of the operation
 */
#include "..\include\lib.h"
#include <math.h>

float areaPentagono(float a){
    float area;
    area=0.25*sqrtf(5*(5+(2*sqrtf(5))))*(a*a);
    return area;
}
