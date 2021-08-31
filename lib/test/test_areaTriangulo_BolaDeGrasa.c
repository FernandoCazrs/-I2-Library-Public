#include "..\src\areaTriangulo.c"
#include <stdio.H>

int main(){
    float x=4, y=9.1;
    float res= areaTriangulo(x, y);
    printf("Area Triangulo: %f", res);
    return 0;
}