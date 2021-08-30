#include "..\include\lib.h"
#include <math.h> 

/*
@brief Calcula el volumen de un prisma triangular
@param a valor altura del triangulo, b, valor de la base del triangulo, c valor del largo del prisma 
@return Resultado de el area de cadrado 

*/

 float VolumenPrismaTriangular(float a, float b, float c)
 {
	float  r; 
	r=((a*b)/2)*c;
 
  return r;
}
