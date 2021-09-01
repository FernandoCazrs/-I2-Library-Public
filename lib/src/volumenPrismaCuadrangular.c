#include "./include/calculadoraVolumenAreaPerimetro.h"
#include <math.h> 
#include <stdio.h>
/** @brief Calcula el volumen de un prisma cuadrangular 
*@param a valor altura de la base del prisma
*@param b valor de la base del prisma
*@param c valor del largo del prisma
*@return volumen de un prisma cuadrangular a*b*c
*/
float volumenPrismaCuadrangular(float a, float b, float c){
  float  r; 
  r= a*b*c;
 
  return r;
}
