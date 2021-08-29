#include "..\src\volumenEsfera.c"
#include <stdio.h>

int main () {
    float a = 6.34;
    float z = volumenEsfera(a);
    printf ("El volumen de la esfera es: %0.4f", z);
    return 0;
}
