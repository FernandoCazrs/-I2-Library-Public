#include "math.h"
#include "..\include\lib.h"

/**@brief Calcula el volumen de un Cono
 * @param r El valor del radio de la base del Cono
 * @param h El valor de la altura del Cono
 * @returns El volumen total de la figura
 */
 float volumenCono (float r, float h){
     float z;
     z = r * r * h * M_PI * (1/3);
     return z;
 }