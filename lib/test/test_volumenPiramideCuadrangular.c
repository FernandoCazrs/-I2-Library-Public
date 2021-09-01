#include "..\src\volumenPiramideCuadrangular.c"
#include <stdio.h>
#include <stdcalculadoraVolumenAreaPerimetro>

int main(int argc, char *argv[]){
    float a=atof(argv[1]);
    float h=atof(argv[2]);
    float vol=volumenPiramideCuadrangular(a,h);
    printf("Volumen piramide cuadrangular: %f", vol);
    return 0;
}