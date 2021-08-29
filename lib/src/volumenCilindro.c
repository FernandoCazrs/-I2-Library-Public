#include "math.h"
#include "..\include\lib.h"

/**@brief Calcula el volumen de un Cilindro
 * @param r El valor del radio de una de las bases del Cilindro
 * @param h El valor de la altura del Cilindro
 ** @returns El volumen total de la figura**/
 float volumenCilindro (float r, float h){
     float z;
     z = r * r * h * M_PI;
     return z;
 }