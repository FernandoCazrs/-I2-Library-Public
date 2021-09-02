#include <stdio.h>
#include <stdlib.h>
#include "..\include\calculadoraVolumenAreaPerimetro.h"

int main(){
    float area, perimetro, volumen;;
    area=areaCirculo(3.0);
    perimetro=perimetroCirculo(4.2);
    printf("Area del circulo: %f\n Perimetro del circulo: %f\n",area,perimetro);
    area=areaCuadrado(2.1);
    perimetro=perimetroCuadrado(7);
    printf("Area del cuadrado: %f\n Perimetro del cuadrado: %f\n",area,perimetro);
    area=areaHexagono(2.2,4.7);
    perimetro=perimetroHexagono(6.4);
    printf("Area del Hexagono: %f\n Perimetro del Hexagono: %f\n",area,perimetro);
    area=areaPentagono(7.8);
    perimetro=perimetroPentagono(7.8);
    printf("Area del Pentagono: %f\n Perimetro del Pentagono: %f\n",area,perimetro);
    area=areaRectangulo(6.2,4.2);
    perimetro=perimetroRectangulo(6.2,4.2);
    printf("Area del Rectangulo: %f\n Perimetro del Rectangulo: %f\n",area,perimetro);
    area=areaRombo(7.5,9.5);
    perimetro=perimetroRombo(4);
    printf("Area del Rombo: %f\n Perimetro del Rombo: %f\n",area,perimetro);
    area=areaTrapecio(2.4,1.2,7.6);
    perimetro=perimetroTrapecio(2.3,6.1,7.4,5.1);
    printf("Area del Trapecio: %f\n Perimetro del Trapecio: %f\n",area,perimetro);
    area=areaTriangulo(2.5,4.7);
    perimetro=perimetroTriangulo(4.2);
    printf("Area del Triangulo: %f\n Perimetro del Triangulo: %f\n",area,perimetro);
    volumen=volumenCilindro(1.2,8.5);
    printf("Volumen del Cilindro: %f\n",volumen);
    volumen=volumenCono(6.3,4.2);
    printf("Volumen del Cono: %f\n",volumen);
    volumen=volumenCubo(6.3);
    printf("Volumen del Cubo: %f\n",volumen);
    volumen=volumenEsfera(5.2);
    printf("Volumen del Esfera: %f\n",volumen);
    volumen=volumenPiramideCuadrangular(2.2,5.4);
    printf("Volumen del Piramide cuadrangular: %f\n",volumen);
    volumen=volumenPiramideHexagonal(4.5,7.8);
    printf("Volumen del Piramide hexagonal: %f\n",volumen);
    volumen=volumenPiramidePentagonal(6.3,2.1);
    printf("Volumen del Piramide pentagonal: %f\n",volumen);
    volumen=volumenPiramideTriangular(4.2,1.5,4.7);
    printf("Volumen del Piramide triangular: %f\n",volumen);
    volumen=volumenPrismaCuadrangular(9.8,5.6,6.2);
    printf("Volumen del Primsa cuadrangular: %f\n",volumen);
    volumen=volumenPrismaHexagonal(8.5,7.5);
    printf("Volumen del Prisma hexagonal: %f\n",volumen);
    volumen=volumenPrismaPentagonal(9.6,8.5);
    printf("Volumen del Prisma pentagonal: %f\n",volumen);
    volumen=volumenPrismaTriangular(6.5,4.2,7.6);
    printf("Volumen del Prisma triangular: %f\n",volumen);
    return 0;
}