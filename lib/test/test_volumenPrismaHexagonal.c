#include "..\src\volumenPrismaHexagonal.c"
#include <stdio.H>

int main(){
    float l=4, H=22.5;
    float res= volumenPrismaHexagonal(l, H);
    printf("Volumen Prisma Hexagonal: %f", res);
    return 0;
}