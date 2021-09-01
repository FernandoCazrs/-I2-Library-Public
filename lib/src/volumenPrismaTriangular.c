#include "math.h"
#include "./include/calculadoraVolumenAreaPerimetro.h"
#include <stdio.h>
/** @brief Calcula el volumen de un prisma triangular
*@param a valor altura del triangulo
*@param b valor de la base del triangulo
*@param c valor del largo del prisma 
*@return Volumen de un prisma triangular (area de triangulo*c)
*/
float volumenPrismaTriangular(float a, float b, float c) {
  float  r; 
  r=((a*b)/2)*c;
 
  return r;
}


