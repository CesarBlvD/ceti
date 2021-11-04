#include<stdio.h>
#include<stdlib>
#include<iostream>

int main()
{
    int NumeroEntero1=5;
    float NumeroFlotante1=3.3;
    float NumeroFlotante2=6.6;
    float ResulSumaDivi=(NumeroEntero1+NumeroFlotante1)/NumeroFlotante2;

    printf("Vamos a realizar una suma y una division\n");

    printf("La Suma de %d\n y el numero %.2f\n la division entre %.2f \nel resultado es: %.2f",NumeroEntero1,NumeroFlotante1,NumeroFlotante2, ResulSumaDivi);

}
