#include "..\include\lib.h"
#include <math.h> 

/** @brief Calcula el perimetro de un rectangulo
*@param a valor de ancho del rectangulo
*@param b valor del largo del rectangulo
*@return perimetro del rectangulo suma de 2b + 2a
*/
float perimetroRectangulo (float a, float b){
  float  r; 
  r=(2*a)+(2*b);
 
  return r;
}
