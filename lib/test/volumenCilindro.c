#include "..\src\volumenCilindro.c"
#include <stdio.h>

int main () {
    float a = 54.2;
    float b = 16.3;
    float z = volumenCilindro(a, b);
    printf ("El volumen del Cilindro es: %0.4f", z);
    return 0;
}
