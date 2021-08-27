#include "..\src\areaPentagono.c"
#include <stdio.h>

int main(int argc, char *argv[]){
    float a=atof(argv[1]);
    float area;
    area=areaPentagono(a);
    printf("Area pentagono: %f",area);
    return 0;
}