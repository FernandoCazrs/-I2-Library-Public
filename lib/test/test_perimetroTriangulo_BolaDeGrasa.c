#include "..\src\perimetroTriangulo.c"
#include <stdio.H>

int main(){
    float x=4;
    float res= perimetroTriangulo(x);
    printf("Perimetro Triangulo: %f", res);
    return 0;
}