#include "math.h"
#include "..\include\lib.h"
/**@brief Calcula el volumen de un prisma hexagonal 
 * @param l El valor de un lado de la base
 * @param H El valor de la altura del prisma hexagonal
 * @returns El resultado del cálculo
 * */

float volumenPrismaHexagonal(float l, float H){
    float a, r;
    a= (3*sqrtf(3)*powf(l,2))/2;
    r= a*H;
    return r;
}
