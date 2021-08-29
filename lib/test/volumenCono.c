#include "..\src\volumenCono.c"
#include <stdio.h>

int main () {
    float a = 75.2;
    float b = 23.78;
    float z = volumenCono(a, b);
    printf ("El volumen del Cono es: %0.4f", z);
    return 0;
}
