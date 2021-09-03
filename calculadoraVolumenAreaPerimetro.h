#include <stdint.h>

/** @brief Calcula el área de un círculo
 * @param x El valor del radio del círculo
 * @returns El resultado del cálculo
*/
float areaCirculo(float x);

/** @brief Calcula el area de un cuadrado
*@param a valor de un lado del cuadrado
*@return Area del cuadrado lado x lado a*a 
*/
float areaCuadrado(float a);

/** @brief Calcula el area de un Hexagono
 * @param l El valor de un lado del Hexagono
 * @param a El apotema del Hexagono
 * @returns El area total de la figura
 */
float areaHexagono(float l, float a);

/** @brief Calculates the area of a regular pentagon
 * @param a One of the sides of the shape
 * @returns The result of the operation
 */
float areaPentagono(float a);

/** @brief Calcula el area de un rectangulo
*@param a valor de largo de rectangulo
*@param b valor de ancho del rectangulo 
*@return area b*a
*/
float areaRectangulo(float a, float b);

/** @brief Calcula el area de un Rombo
 * @param dm El valor de la diagonal mayor del Rombo
 * @param dM El valor de la diagonal menor del Rombo
 * @returns El area total de la figura
*/
float areaRombo(float dm, float dM);

/** @brief Calculates the area of a trapezium with the formula A=((a+b)/2)*h
 * @param a One of the bases
 * @param b One of the bases
 * @param h The height of the shape
 * @returns The result of the operation
 */
float areaTrapecio(float a, float b, float h);

/** @brief Calcula el área de un triángulo
 * @param b El valor de un lado del triángulo
 * @param h El valor de la altura del triángulo
 * @returns El resultado del cálculo
*/
float areaTriangulo(float b, float h);

/** @brief Calcula el perímetro de un círculo
 * @param x El valor del radio de un círculo
 * @returns El resultado del cálculo
*/
float perimetroCirculo(float x);

/** @brief Calcula el perimetro de un cuadrado
* @param a valor de un lado del cuadrado
* @return perimetro del cuadrado 4 veces el lado a*4
*/
float perimetroCuadrado(float a);

/** @brief Calcula el perimetro de un Hexagono
 * @param l El valor de uno de los lados del Hexagono
 * @returns El perimetro total de la figura
*/
float perimetroHexagono(float l);

/** @brief Calculates the perimeter of a regular pentagon
 * @param a One of the sides of the shape
 * @returns The result of the addition
*/
float perimetroPentagono(float a);

/** @brief Calcula el perimetro de un rectangulo
*@param a valor de ancho del rectangulo
*@param b valor del largo del rectangulo
*@return perimetro del rectangulo suma de 2b + 2a
*/
float perimetroRectangulo(float a, float b);

/** @brief Calcula el perimetro de un Rombo
 * @param l El valor de uno de los lados del Rombo
 * @returns El perimetro total de la figura
*/
float perimetroRombo(float l);

/** @brief Calculates the value of the perimeter of a trapezium by adding its sides together
 * @param a One of the sides of the shape
 * @param b One of the sides of the shape
 * @param c One of the sides of the shape
 * @param d One of the sides of the shape
 * @returns The result of the addition
*/
float perimetroTrapecio(float a, float b, float c, float d);

/** @brief Calcula el perímetro de un triángulo
 * @param x El valor del lado del triángulo
 * @returns El resultado del cálculo
*/
float perimetroTriangulo(float x);

/** @brief Calcula el volumen de un Cilindro
 * @param r El valor del radio de una de las bases del Cilindro
 * @param h El valor de la altura del Cilindro
 * @returns El volumen total de la figura
*/
float volumenCilindro(float r, float h);

/** @brief Calcula el volumen de un Cono
 * @param r El valor del radio de la base del Cono
 * @param h El valor de la altura del Cono
 * @returns El volumen total de la figura
*/
float volumenCono(float r, float h);

/** @brief Calcula el volumen de un cubo
*@param a valor de un lado del cubo 
*@return volumen de cubo a*a*a
*/
float volumenCubo(float a);

/** @brief Calcula el volumen de la Esfera
 * @param r El valor del radio de la Esfera
 * @returns El volumen total de la figura 
*/
float volumenEsfera(float r);

/** @brief Calculates the volume of a square pyramid
 * @param a The lenght of one of the sides of the base
 * @param h The height of the shape
 * @returns The result of multiplying the area of the base by a third of the height
*/
float volumenPiramideCuadrangular(float a, float h);

/** @brief Calculates the volume of a hexagonal pyramid
 * @param a The length of one of the sides of the base
 * @param h The height of the shape
 * @returns The result of the calculation
*/
float volumenPiramideHexagonal(float a, float h);

/** @brief Calculates the volume of a pentagonal Pyramid
 * @param a the lenght of one of the sides of the base
 * @param the height of the shape
 * @returns The result of the calculation
*/
float volumenPiramidePentagonal(float a, float h);

/** @brief Calcula el volumen de una pirámide triangular  
 * @param b El valor de un lado de la base
 * @param h El valor de la altura de la base
 * @param H El valor de la altura de la pirámide triangular
 * @returns El resultado del cálculo
*/
float volumenPiramideTriangular(float b, float h, float H);

/** @brief Calcula el volumen de un prisma cuadrangular 
*@param a valor altura de la base del prisma
*@param b valor de la base del prisma
*@param c valor del largo del prisma
*@return volumen de un prisma cuadrangular a*b*c
*/
float volumenPrismaCuadrangular(float a, float b, float c);

/** @brief Calcula el volumen de un prisma hexagonal 
 * @param l El valor de un lado de la base
 * @param H El valor de la altura del prisma hexagonal
 * @returns El resultado del cálculo
*/
float volumenPrismaHexagonal(float l, float H);

/** @brief Calcula el volumen de un prisma pentagonal. 
 * @param a El valor de un lado de la base
 * @param H El valor de la altura del prisma pentagonal
 * @returns El resultado del cálculo
*/
float volumenPrismaPentagonal(float a, float H);

/** @brief Calcula el volumen de un prisma triangular
*@param a valor altura del triangulo
*@param b valor de la base del triangulo
*@param c valor del largo del prisma 
*@return Volumen de un prisma triangular (area de triangulo*c)
*/
float volumenPrismaTriangular(float a, float b, float c);