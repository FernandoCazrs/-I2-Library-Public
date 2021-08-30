#include "..\src\VolumenPrismaCuadrangular.c"
#include <stdio.h>

int main (){
    float a=10, b=45, c=8;
    float r =VolumenPrismaCuadrangular(a,b,c);
    printf ("El volumen de un prisma cuadrangular es: %f", r);
    return 0;
    
}