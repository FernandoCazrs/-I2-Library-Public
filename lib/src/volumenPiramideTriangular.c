#include "math.h"
#include "..\include\lib.h"
/** @brief Calcula el volumen de una pirámide triangular  
 * @param b El valor de un lado de la base
 * @param h El valor de la altura de la base
 * @param H El valor de la altura de la pirámide triangular
 * @returns El resultado del cálculo
*/
float volumenPiramideTriangular(float b, float h, float H){
    float r, a;
    a= (b*h)/2;
    r= (a*H)/3;
    return r;
}
