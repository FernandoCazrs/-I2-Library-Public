#include "./lib/include/calculadoraVolumenAreaPerimetro.h"
#include <stdio.h>

int main(){
    float a = 23.43;
    float b = 34.32;
    float z = areaHexagono(a, b);
    printf ("El area del Hexagono es: %0.4f", z);

    a = 32.32;
    b = 45.65;
    z = areaRombo(a, b);
    printf ("El area del Rombo es: %0.4f", z);

    a = 56;
    z = perimetroHexagono(a);
    printf ("El perimetro del Hexagono es: %0.4f", z);

    a = 65.3;
    z = perimetroRombo(a);
    printf ("El perimetro del Rombo es: %0.4f", z);

    float x=4;
    float res= areaCirculo(x);
    printf("Area Circulo: %f", res);

    a= 11;
    float r = areaCuadrado (a);
    printf ("Area de Cuadrado es: %f", r);
    
    a=4.2;
    float area;
    area=areaPentagono(a);
    printf("Area pentagono: %f",area);

    a= 6;
    b =8;
    r =areaRectangulo(a, b);
    printf ("Area de Rectangulo es: %f", r);

    a=3.65;
    b=5.6;
    float h=24.5;
    area;
    area=areaTrapecio(a,b,h);
    printf("Area trapecio: %f",area);

    x=4;
    float y =9.1;
    res= areaTriangulo(x, y);
    printf("Area Triangulo: %f", res);

    x=6;
    res= perimetroCirculo(x);
    printf("Perimetro Circulo: %f", res);

    a= 45;
    r =perimetroCuadrado(a);
    printf ("Perimetro de Cuadrado es: %f", r);

    a=7.3;
    float peri=perimetroPentagono(a);
    printf("Perimetro pentagono: %f",peri);

    a= 15, b= 3;
    r = perimetroRectangulo(a,b);
    printf ("Perimetro de Rectangulo es: %f", r);

    a=10.7;
    b=8.9;
    float c=8.9;
    float d= 4.5;
    peri=perimetroTrapecio(a,b,c,d);
    printf("Perimetro trapecio: %f",peri);

    x=4;
    res= perimetroTriangulo(x);
    printf("Perimetro Triangulo: %f", res);

    a= 24;
    r =volumenCubo(a);
    printf ("El volumen del cubo es: %f", r);

    a=5.8;
    h=16.8;
    float vol=volumenPiramideCuadrangular(a,h);
    printf("Volumen piramide cuadrangular: %f", vol);


    a=6.7;
    h=24.8;
    vol=volumenPiramideHexagonal(a,h);
    printf("Volumen piramide hexagonal: %f",vol);

    a=8.5;
    h=16.3;
    vol=volumenPiramidePentagonal(a,h);
    printf("Volumen piramide pentagonal: %f",vol);


    b=4, h=3;
    float H=8;
    res= volumenPiramideTriangular(b,h,H);
    printf("Volumen Piramide Triangular : %f", res);

    a=10, b=45, c=8;
    r =volumenPrismaCuadrangular(a,b,c);
    printf ("El volumen de un prisma cuadrangular es: %f", r);

    float l=4;
    H=22.5;
    res= volumenPrismaHexagonal(l, H);
    printf("Volumen Prisma Hexagonal: %f", res);

    l=4, H=31.3;
    res= volumenPrismaPentagonal(l, H);
    printf("Volumen Prisma Pentagonal c: %f", res);

    a= 11, b=16, c=6 ;
    r =volumenPrismaTriangular(a,b,c);
    printf ("El volumen de un Prisma Triangular es: %f", r);

    a = 54.2;
    b = 16.3;
    z = volumenCilindro(a, b);
    printf ("El volumen del Cilindro es: %0.4f", z);

    a = 75.2;
    b = 23.78;
    z = volumenCono(a, b);
    printf ("El volumen del Cono es: %0.4f", z);

    a = 6.34;
    z = volumenEsfera(a);
    printf ("El volumen de la esfera es: %0.4f", z);

    return 0;
}