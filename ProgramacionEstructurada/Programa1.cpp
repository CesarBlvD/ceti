#include <stdio.h>
#include <stdlib.h>
#include <iostream>
//Cesar Antonio Hernandez Valtierra 21110066

int main()
{
	char Nombre[100], Registro[10];
	int No_Materias;
	char Nombre_Materias[10];
	char Nom_Materia1[15],Nom_Materia2[15],Nom_Materia3[15],Nom_Materia4[15],Nom_Materia5[15],Nom_Materia6[15],Nom_Materia7[15],Nom_Materia8[15];
	float Cal_Materia1,Cal_Materia2,Cal_Materia3,Cal_Materia4,Cal_Materia5,Cal_Materia6,Cal_Materia7,Cal_Materia8;
	
	printf("Ingresa tu nombre completo: ");
	scanf("%s",&Nombre);
	fflush(stdin); //Limpiar la memoria ya que me hizo un salto de linea extra
	printf("Ingresa tu numero de registro: ");
	scanf("%s",&Registro);
	fflush(stdin);
	printf("%c",168); //Coloca el signo de interrogacion de manera correcta
	printf("Cuantas materias tienes? ");
	scanf("%d",&No_Materias);
	
	switch (No_Materias)
	{
		case 1:
			{
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia1);
			printf("Ingresa la calificacion de la primer materia: ");
			scanf("%f",&Cal_Materia1);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia1,Cal_Materia1);
			
		}
			break;
		case 2:
			{
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia1);
			printf("Ingresa la calificacion de la primer materia: ");
			scanf("%f",&Cal_Materia1);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia2);
			printf("Ingresa la calificacion de la segunda materia: ");
			scanf("%f",&Cal_Materia2);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia1,Cal_Materia1);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia2,Cal_Materia2);
		}
			break;
		case 3:
			{
			
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia1);
			printf("Ingresa la calificacion de la primer materia: ");
			scanf("%f",&Cal_Materia1);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia2);
			printf("Ingresa la calificacion de la segunda materia: ");
			scanf("%f",&Cal_Materia2);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia3);
			printf("Ingresa la calificacion de la tercera materia: ");
			scanf("%f",&Cal_Materia3);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia1,Cal_Materia1);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia2,Cal_Materia2);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia3,Cal_Materia3);
		}
			break;
		case 4:
			{
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia1);
			printf("Ingresa la calificacion de la primer materia: ");
			scanf("%f",&Cal_Materia1);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia2);
			printf("Ingresa la calificacion de la segunda materia: ");
			scanf("%f",&Cal_Materia2);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia3);
			printf("Ingresa la calificacion de la tercer materia: ");
			scanf("%f",&Cal_Materia3);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia4);
			printf("Ingresa la calificacion de la cuarta materia: ");
			scanf("%f",&Cal_Materia4);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia1,Cal_Materia1);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia2,Cal_Materia2);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia3,Cal_Materia3);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia4,Cal_Materia4);
		}
			break;
		case 5:
			{
				printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia1);
			printf("Ingresa la calificacion de la primer materia: ");
			scanf("%f",&Cal_Materia1);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia2);
			printf("Ingresa la calificacion de la segunda materia: ");
			scanf("%f",&Cal_Materia2);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia3);
			printf("Ingresa la calificacion de la tercer materia: ");
			scanf("%f",&Cal_Materia3);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia4);
			printf("Ingresa la calificacion de la cuarta materia: ");
			scanf("%f",&Cal_Materia4);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia5);
			printf("Ingresa la calificacion de la quinta materia: ");
			scanf("%f",&Cal_Materia5);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia1,Cal_Materia1);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia2,Cal_Materia2);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia3,Cal_Materia3);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia4,Cal_Materia4);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia5,Cal_Materia5);
			}
			break;
		case 6:
			{
				printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia1);
			printf("Ingresa la calificacion de la primer materia: ");
			scanf("%f",&Cal_Materia1);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia2);
			printf("Ingresa la calificacion de la segunda materia: ");
			scanf("%f",&Cal_Materia2);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia3);
			printf("Ingresa la calificacion de la tercera materia: ");
			scanf("%f",&Cal_Materia3);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia4);
			printf("Ingresa la calificacion de la cuarta materia: ");
			scanf("%f",&Cal_Materia4);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia5);
			printf("Ingresa la calificacion de la quinta materia: ");
			scanf("%f",&Cal_Materia5);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia6);
			printf("Ingresa la calificacion de la sexta materia: ");
			scanf("%f",&Cal_Materia6);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia1,Cal_Materia1);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia2,Cal_Materia2);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia3,Cal_Materia3);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia4,Cal_Materia4);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia5,Cal_Materia5);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia6,Cal_Materia6);
			}
			break;
		case 7:
			{
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia1);
			printf("Ingresa la calificacion de la primer materia: ");
			scanf("%f",&Cal_Materia1);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia2);
			printf("Ingresa la calificacion de la segunda materia: ");
			scanf("%f",&Cal_Materia2);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia3);
			printf("Ingresa la calificacion de la tercer materia: ");
			scanf("%f",&Cal_Materia3);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia4);
			printf("Ingresa la calificacion de la cuarta materia: ");
			scanf("%f",&Cal_Materia4);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia5);
			printf("Ingresa la calificacion de la quinta materia: ");
			scanf("%f",&Cal_Materia5);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia6);
			printf("Ingresa la calificacion de la sexta materia: ");
			scanf("%f",&Cal_Materia6);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia7);
			printf("Ingresa la calificacion de la septima materia: ");
			scanf("%f",&Cal_Materia7);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia1,Cal_Materia1);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia2,Cal_Materia2);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia3,Cal_Materia3);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia4,Cal_Materia4);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia5,Cal_Materia5);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia6,Cal_Materia6);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia7,Cal_Materia7);
		}
			break;
		case 8:
			{
				printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia1);
			printf("Ingresa la calificacion de la primer materia: ");
			scanf("%f",&Cal_Materia1);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia2);
			printf("Ingresa la calificacion de la segunda materia: ");
			scanf("%f",&Cal_Materia2);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia3);
			printf("Ingresa la calificacion de la tercer materia: ");
			scanf("%f",&Cal_Materia3);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia4);
			printf("Ingresa la calificacion de la cuarta materia: ");
			scanf("%f",&Cal_Materia4);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia5);
			printf("Ingresa la calificacion de la quinta materia: ");
			scanf("%f",&Cal_Materia5);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia6);
			printf("Ingresa la calificacion de la sexta materia: ");
			scanf("%f",&Cal_Materia6);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia7);
			printf("Ingresa la calificacion de la septima materia: ");
			scanf("%f",&Cal_Materia7);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia8);
			printf("Ingresa la calificacion de la octava materia: ");
			scanf("%f",&Cal_Materia8);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia1,Cal_Materia1);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia2,Cal_Materia2);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia3,Cal_Materia3);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia4,Cal_Materia4);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia5,Cal_Materia5);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia6,Cal_Materia6);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia7,Cal_Materia7);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia8,Cal_Materia8);
			}
			break;
		default:
			printf("Ingresa menos materias");
		break;
		
	}
	
	return 0;
}
