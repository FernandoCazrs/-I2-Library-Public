#include "..\src\areaTrapecio.c"
#include <stdio.h>
#include <stdcalculadoraVolumenAreaPerimetro>

int main(int argc, char *argv[]){
    float a=atof(argv[1]);
    float b=atof(argv[2]);
    float h=atof(argv[3]);
    float area;
    area=areaTrapecio(a,b,h);
    printf("Area trapecio: %f",area);
    return 0;
}