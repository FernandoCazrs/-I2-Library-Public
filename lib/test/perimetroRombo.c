#include "..\src\perimetroRombo.c"
#include <stdio.h>

int main () {
    float a = 65.3;
    float z = perimetroRombo(a);
    printf ("El perimetro del Rombo es: %0.4f", z);
    return 0;
}
