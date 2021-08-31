#include "..\src\perimetroRectangulo.c"
#include <stdio.h>

int main (){
    float a= 15, b= 3;
    float r = perimetroRectangulo(a,b);
    printf ("Perimetro de Rectangulo es: %f", r);
    return 0;
    
}
