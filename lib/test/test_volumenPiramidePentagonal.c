#include "..\src\volumenPiramidePentagonal.c"
#include <stdio.h>
#include <stdcalculadoraVolumenAreaPerimetro>

int main(int argc,char *argv[]){
    float a=atof(argv[1]);
    float h=atof(argv[2]);
    float vol=volumenPiramidePentagonal(a,h);
    printf("Volumen piramide pentagonal: %f",vol);
    return 0;
}