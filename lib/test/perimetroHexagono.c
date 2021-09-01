#include "..\src\perimetroHexagono.c"
#include <stdio.h>

int main () {
    float a = 56;
    float z = perimetroHexagono(a);
    printf ("El perimetro del Hexagono es: %0.4f", z);
    return 0;
}
