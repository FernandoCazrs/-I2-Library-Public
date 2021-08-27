#include "..\src\volumenPiramideHexagonal.c"
#include <stdlib.h>
#include <stdio.h>

int main(int argc,char *argv[]){
    float a=atof(argv[1]);
    float h=atof(argv[2]);
    float vol=volumenPiramideHexagonal(a,h);
    printf("Volumen piramide hexagonal: %f",vol);
    return 0;
}