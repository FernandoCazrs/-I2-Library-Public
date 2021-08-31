#include "math.h"
#include "..\include\lib.h"
/**@brief Calcula el área de un triángulo
 * @param b El valor de un lado del triángulo
 * @param h El valor de la altura del triángulo
 * @returns El resultado del cálculo
 */
float areaTriangulo(float b, float h){
    float r;
    r= (b*h)/2;
    return r;
}
