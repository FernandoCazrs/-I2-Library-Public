#include "..\include\lib.h"
#include <math.h> 

/*
@brief Calcula el volumen de un prisma cuadrangular 
@param a valor altura de la base del prisma, b valor de la base del prisma, c valor del largo del prisma
@return Resultado del volumen deun prisma cuadrangular 

*/

 float VolumenPrismaCuadrangular(float a, float b, float c)
 {
	float  r; 
	r= a*b*c;
 
  return r;
}
