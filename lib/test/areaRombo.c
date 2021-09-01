#include "..\src\areaRombo.c"
#include <stdio.h>

int main () {
    float a = 32.32;
    float b = 45.65;
    float z = areaRombo(a, b);
    printf ("El area del Rombo es: %0.4f", z);
    return 0;
}
