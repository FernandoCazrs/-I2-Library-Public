#include "../include/calculadoraVolumenAreaPerimetro.h"
#include <stdio.h>
 
int main (int argc, char const *argv[]){
 
    float a = 13.3, b = 23.4, c = 54.2, d = 32.2, res = 0;
 
    /*Codigo del area de las figuras*/
    res = areaCirculo(a);
    printf("area del circulo: %f\n",res);
    res = areaCuadrado(a);
    printf("area del cuadrado: %f\n",res);
    res = areaHexagono(a,b);
    printf("area del hexagono: %f\n",res);
    res = areaPentagono(a);
    printf("area del pentagono: %f\n",res);
    res = areaRectangulo(a,b);
    printf("area del rectangulo: %f\n",res);
    res = areaRombo(a,b);
    printf("area del rombo: %f\n",res);
    res = areaTrapecio(a,b,c);
    printf("area del trapecio: %f\n",res);
    res = areaTriangulo(a,b);
    printf("area del triangulo: %f\n",res);
 
    /*Codigo del perimetro de las figuras*/
    res = perimetroCirculo(a);
    printf("perimetro del circulo: %f\n",res);
    res = perimetroCuadrado(a);
    printf("perimetro del cuadrado: %f\n",res);
    res = perimetroHexagono(a);
    printf("perimetro del hexagono: %f\n",res);
    res = perimetroPentagono(a);
    printf("perimetro del pentagono: %f\n",res);
    res = perimetroRectangulo(a,b);
    printf("perimetro del rectangulo: %f\n",res);
    res = perimetroRombo(a);
    printf("perimetro del rombo: %f\n",res);
    res = perimetroTrapecio(a,b,c,d);
    printf("perimetro del trapecio: %f\n",res);
    res = perimetroTriangulo(a);
    printf("perimetro del triangulo: %f\n",res);
    
    /*Codigo del volumen de las figuras*/
    res = volumenCilindro(a,b);
    printf("volumen del cilindro: %f\n",res);
    res = volumenCono(a,b);
    printf("volumen del cono: %f\n",res);
    res = volumenCubo(a);
    printf("volumen del cubo: %f\n",res);
    res = volumenEsfera(a);
    printf("volumen de la esfera: %f\n",res);
    res = volumenPiramideCuadrangular(a,b);
    printf("volumen de la piramide cuadrangular: %f\n",res);
    res = volumenPiramideHexagonal(a,b);
    printf("volumen de la piramide hexagonal: %f\n",res);
    res = volumenPiramidePentagonal(a,b);
    printf("volumen de la piramide pentagonal: %f\n",res);
    res = volumenPiramideTriangular(a,b,c);
    printf("volumen de la piramide triangular: %f\n",res);
    res = volumenPrismaCuadrangular(a,b,c);
    printf("volumen del prisma cuadrangular: %f\n",res);
    res = volumenPrismaHexagonal(a,b);
    printf("volumen del prisma hexagonal: %f\n",res);
    res = volumenPrismaPentagonal(a,b);
    printf("volumen del prisma pentagonal: %f\n",res);
    res = volumenPrismaTriangular(a,b,c);
    printf("volumen del prisma triangular: %f\n",res);
}
