#include "..\src\areaHexagono.c"
#include <stdio.h>

int main () {
    float a = 23.43;
    float b = 34.32;
    float z = areaHexagono(a, b);
    printf ("El area del Hexagono es: %0.4f", z);
    return 0;
}
