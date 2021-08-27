#include "math.h"
#include "..\include\lib.h"
/**@brief Calcula el volumen de un prisma pentagonal. 
 * @param a El valor de un lado de la base
 * @param H El valor de la altura del prisma pentagonal
 * @returns El resultado del cálculo
 * */
float volumenPrismaPentagonal(float a, float H){
    float r, area;
    area=( (0.25)* sqrtf(5 * (5+(2*sqrtf(5) ) ) )* (a*a));
    r=area*H;
    return r;
}
