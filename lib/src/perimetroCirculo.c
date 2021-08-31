#include "math.h"
#include "..\include\lib.h"
/**@brief Calcula el perímetro de un círculo
 * @param x El valor del radio de un círculo
 * @returns El resultado del cálculo
 */
float perimetroCirculo(float x){
    float r;
    r= 2*M_PI*x;
    return r;
}
