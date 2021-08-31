#include "..\src\volumenPrismaTriangular.c"
#include <stdio.h>

int main (){
    float a= 11, b=16, c=6 ;
    float r =volumenPrismaTriangular(a,b,c);
    printf ("El volumen de un Prisma Triangular es: %f", r);
    return 0;
    
}
