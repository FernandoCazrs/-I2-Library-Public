#include "..\src\volumenPiramideTriangular.c"
#include <stdio.H>

int main(){
    float b=4, h=3, H=8;
    float res= volumenPiramideTriangular(b,h,H);
    printf("Volumen Piramide Triangular : %f", res);
    return 0;
}
