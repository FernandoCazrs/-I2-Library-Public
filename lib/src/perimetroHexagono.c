#include "..\include\calculadoraVolumenAreaPerimetro.h"
#include <stdio.h>

/** @brief Calcula el perimetro de un Hexagono
 * @param l El valor de uno de los lados del Hexagono
 * @returns El perimetro total de la figura
*/
float perimetroHexagono (float l){
    float z;
    z = l*6;
    return z;
}