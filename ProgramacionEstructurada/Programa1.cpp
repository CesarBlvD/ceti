#include <stdio.h>
#include <stdlib.h>
#include <iostream>
//Cesar Antonio Hernandez Valtierra 21110066

int main()
{
	char Nombre[100], Registro[10];
	int No_Materias;
	char Nombre_Materias[10];
	
	printf("Ingresa tu nombre completo: ");
	scanf("%s",&Nombre);
	fflush(stdin); //Limpiar la memoria ya que me hizo un salto de linea extra
	printf("Ingresa tu numero de registro: ");
	scanf("%s",&Registro);
	fflush(stdin);
	printf("%c",168); //Coloca el signo de interrogacion de manera correcta
	printf("Cuantas materias tienes? ");
	scanf("%d",&No_Materias);
	
	for (int i=1;i<=No_Materias;i++)
	{
		printf("Ingresa el nombre de la materia %d\n", i);
		scanf("%s"&Nombre_Materias[i]);
		fflush(stdin);
		printf("La materia %d tiene nombre de %s",i,Nombre_Materias[i]);
		
	}
	
	return 0;
}
