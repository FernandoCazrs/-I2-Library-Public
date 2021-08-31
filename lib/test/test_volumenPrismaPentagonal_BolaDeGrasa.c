#include "..\src\volumenPrismaPentagonal.c"
#include <stdio.H>

int main(){
    float l=4, H=31.3;
    float res= volumenPrismaPentagonal(l, H);
    printf("Volumen Prisma Pentagonal c: %f", res);
    return 0;
}