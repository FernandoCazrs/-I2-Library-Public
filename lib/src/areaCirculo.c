#include "math.h"
/**@brief Calcula el área de un círculo
 * @param x El valor del radio del círculo
 * @returns El resultado del cálculo
 * */
float areaCirculo(float x)
{
    float r;
    r= powf(x,2)*M_PI;
    return r;
}