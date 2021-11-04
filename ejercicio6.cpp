#include<stdio.h>
#include<stdlib>
#include<iostream>

int main()
{
     int NumeroEntero1=5;
    int NumeroEntero2=10;
    float NumeroFlotante1=3.3;
    float NumeroFlotante2=6.6;
    int NumeroEntero3 = 5;
    float ResulSumaDivi=((NumeroEntero1+NumeroFlotante1)*(NumeroFlotante2*NumeroEntero2))/NumeroEntero3;

    printf("Vamos a realizar una suma,una division y una multiplicacion\n");

    printf("((%d+%.2f)(%.2f*%d))/%d y el resultado es: %.2f",NumeroEntero1,NumeroFlotante1,NumeroFlotante2,NumeroEntero2,NumeroEntero3,ResulSumaDivi);
}