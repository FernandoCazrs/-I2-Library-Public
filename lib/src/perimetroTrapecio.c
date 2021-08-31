/**@brief Calculates the value of the perimeter of a trapezium by adding its sides together
 * @param a One of the sides of the shape
 * @param b One of the sides of the shape
 * @param c One of the sides of the shape
 * @param d One of the sides of the shape
 * @returns The result of the addition
 */
#include "..\include\lib.h"

float perimetroTrapecio(float a, float b, float c, float d){
    float perim;
    perim=a+b+c+d;
    return perim;
}