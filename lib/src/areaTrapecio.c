#include "..\include\lib.h"

/** @brief Calculates the area of a trapezium with the formula A=((a+b)/2)*h
 * @param a One of the bases
 * @param b One of the bases
 * @param h The height of the shape
 * @returns The result of the operation
 */
float areaTrapecio(float a, float b, float h){
    float Area;
    Area=((a+b)/2)*h;
    return Area;
}