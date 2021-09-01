#include "..\src\perimetroPentagono.c"
#include <stdio.h>
#include <stdcalculadoraVolumenAreaPerimetro>

int main(int argc,char *argv[]){
    float a=atof(argv[1]);
    float peri=perimetroPentagono(a);
    printf("Perimetro pentagono: %f",peri);
    return 0;
}