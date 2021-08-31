#include "..\src\perimetroTrapecio.c"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    float a=atof(argv[1]);
    float b=atof(argv[2]);
    float c=atof(argv[3]);
    float d=atof(argv[4]);
    float peri=perimetroTrapecio(a,b,c,d);
    printf("Perimetro trapecio: %f",peri);
    return 0;
}