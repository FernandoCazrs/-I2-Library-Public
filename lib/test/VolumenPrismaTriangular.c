#include "..\src\VolumenPrismaTriangular.c"
#include <stdio.h>

int main (){
    float a= 11, b=16, c=6 ;
    float r =VolumenPrismaTriangular(a,b,c);
    printf ("Area de Cuadrado es: %f", r);
    return 0;
    
}