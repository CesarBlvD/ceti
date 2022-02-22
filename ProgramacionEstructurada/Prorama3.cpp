#include <stdio.h>
#include <stdlib.h>
#include <iostream> //Librerias
//Cesar Antonio Hernandez Valtierra 21110066

int main()
{
	char Nombre[100], Registro[10];
	int No_Materias;
	char Nombre_Materias[10];
	char Nom_Materia1[15],Nom_Materia2[15],Nom_Materia3[15],Nom_Materia4[15],Nom_Materia5[15],Nom_Materia6[15],Nom_Materia7[15],Nom_Materia8[15];
	float Cal_Materia1,Cal_Materia2,Cal_Materia3,Cal_Materia4,Cal_Materia5,Cal_Materia6,Cal_Materia7,Cal_Materia8;
	float Promedio,Suma;
	
	
	printf("Ingresa tu nombre completo: ");
	scanf("%s",&Nombre);
	fflush(stdin); //Limpiar la memoria ya que me hizo un salto de linea extra
	printf("Ingresa tu numero de registro: ");
	scanf("%s",&Registro);
	fflush(stdin);
	printf("%c",168); //Coloca el signo de interrogacion de manera correcta
	printf("Cuantas materias tienes? ");
	scanf("%d",&No_Materias);
	system("cls");//Limpia la pantalla
	
	switch (No_Materias)
	{
		case 1:
			{
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia1);
			printf("Ingresa la calificacion de la primer materia: ");
			scanf("%f",&Cal_Materia1);
			system("cls"); //Limpia la pantalla
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia1,Cal_Materia1);
			Promedio=Cal_Materia1;
			printf("*\t <.:Promedio:.> \t%.2f\n",Cal_Materia1);
		}
			break;
		case 2:
			{
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia1);
			fflush(stdin);
			printf("Ingresa la calificacion de la primer materia: ");
			scanf("%f",&Cal_Materia1);
			fflush(stdin);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia2);
			fflush(stdin);
			printf("Ingresa la calificacion de la segunda materia: ");
			scanf("%f",&Cal_Materia2);
			fflush(stdin);
			system("cls");
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia1,Cal_Materia1);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia2,Cal_Materia2);
			Suma=Cal_Materia1+Cal_Materia2;
			Promedio=Suma/2;
			printf("*\t <.:Promedio:.> \t%.2f\n",Promedio);
		}
			break;
		case 3:
			{
			
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia1);
			printf("Ingresa la calificacion de la primer materia: ");
			scanf("%f",&Cal_Materia1);
			fflush(stdin);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia2);
			printf("Ingresa la calificacion de la segunda materia: ");
			scanf("%f",&Cal_Materia2);
			fflush(stdin);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia3);
			printf("Ingresa la calificacion de la tercera materia: ");
			scanf("%f",&Cal_Materia3);
			fflush(stdin);
			system("cls");
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia1,Cal_Materia1);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia2,Cal_Materia2);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia3,Cal_Materia3);
			Suma=Cal_Materia1+Cal_Materia2,Cal_Materia3;
			Promedio=Suma/3;
			printf("*\t <.:Promedio:.> \t%.2f\n",Promedio);
		}
			break;
		case 4:
			{
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia1);
			printf("Ingresa la calificacion de la primer materia: ");
			scanf("%f",&Cal_Materia1);
			fflush(stdin);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia2);
			printf("Ingresa la calificacion de la segunda materia: ");
			scanf("%f",&Cal_Materia2);
			fflush(stdin);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia3);
			printf("Ingresa la calificacion de la tercer materia: ");
			scanf("%f",&Cal_Materia3);
			fflush(stdin);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia4);
			printf("Ingresa la calificacion de la cuarta materia: ");
			scanf("%f",&Cal_Materia4);
			fflush(stdin);
			system("cls");
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia1,Cal_Materia1);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia2,Cal_Materia2);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia3,Cal_Materia3);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia4,Cal_Materia4);
			Suma=Cal_Materia1+Cal_Materia2,Cal_Materia3,Cal_Materia4;
			Promedio=Suma/4;
			printf("*\t <.:Promedio:.> \t%.2f\n",Promedio);
		}
			break;
		case 5:
			{
				printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia1);
			printf("Ingresa la calificacion de la primer materia: ");
			scanf("%f",&Cal_Materia1);
			fflush(stdin);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia2);
			printf("Ingresa la calificacion de la segunda materia: ");
			scanf("%f",&Cal_Materia2);
			fflush(stdin);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia3);
			printf("Ingresa la calificacion de la tercer materia: ");
			scanf("%f",&Cal_Materia3);
			fflush(stdin);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia4);
			printf("Ingresa la calificacion de la cuarta materia: ");
			scanf("%f",&Cal_Materia4);
			fflush(stdin);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia5);
			printf("Ingresa la calificacion de la quinta materia: ");
			scanf("%f",&Cal_Materia5);
			fflush(stdin);
			system("cls");
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia1,Cal_Materia1);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia2,Cal_Materia2);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia3,Cal_Materia3);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia4,Cal_Materia4);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia5,Cal_Materia5);
			Suma=Cal_Materia1+Cal_Materia2,Cal_Materia3,Cal_Materia4,Cal_Materia5;
			Promedio=Suma/5;
			printf("*\t <.:Promedio:.> \t%.2f\n",Promedio);
			}
			break;
		case 6:
			{
				printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia1);
			printf("Ingresa la calificacion de la primer materia: ");
			scanf("%f",&Cal_Materia1);
			fflush(stdin);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia2);
			printf("Ingresa la calificacion de la segunda materia: ");
			scanf("%f",&Cal_Materia2);
			fflush(stdin);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia3);
			printf("Ingresa la calificacion de la tercera materia: ");
			scanf("%f",&Cal_Materia3);
			fflush(stdin);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia4);
			printf("Ingresa la calificacion de la cuarta materia: ");
			scanf("%f",&Cal_Materia4);
			fflush(stdin);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia5);
			printf("Ingresa la calificacion de la quinta materia: ");
			scanf("%f",&Cal_Materia5);
			fflush(stdin);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia6);
			printf("Ingresa la calificacion de la sexta materia: ");
			scanf("%f",&Cal_Materia6);
			fflush(stdin);
			system("cls");
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia1,Cal_Materia1);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia2,Cal_Materia2);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia3,Cal_Materia3);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia4,Cal_Materia4);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia5,Cal_Materia5);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia6,Cal_Materia6);
			Suma=Cal_Materia1+Cal_Materia2,Cal_Materia3,Cal_Materia4,Cal_Materia5,Cal_Materia6;
			Promedio=Suma/6;
			printf("*\t <.:Promedio:.> \t%.2f\n",Promedio);
			}
			break;
		case 7:
			{
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia1);
			printf("Ingresa la calificacion de la primer materia: ");
			scanf("%f",&Cal_Materia1);
			fflush(stdin);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia2);
			printf("Ingresa la calificacion de la segunda materia: ");
			scanf("%f",&Cal_Materia2);
			fflush(stdin);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia3);
			printf("Ingresa la calificacion de la tercer materia: ");
			scanf("%f",&Cal_Materia3);
			fflush(stdin);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia4);
			printf("Ingresa la calificacion de la cuarta materia: ");
			scanf("%f",&Cal_Materia4);
			fflush(stdin);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia5);
			printf("Ingresa la calificacion de la quinta materia: ");
			scanf("%f",&Cal_Materia5);
			fflush(stdin);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia6);
			printf("Ingresa la calificacion de la sexta materia: ");
			scanf("%f",&Cal_Materia6);
			fflush(stdin);
			printf("Ingresa el nombre de la materia: ");
			scanf("%s",&Nom_Materia7);
			printf("Ingresa la calificacion de la septima materia: ");
			scanf("%f",&Cal_Materia7);
			fflush(stdin);
			system("cls");
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia1,Cal_Materia1);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia2,Cal_Materia2);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia3,Cal_Materia3);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia4,Cal_Materia4);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia5,Cal_Materia5);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia6,Cal_Materia6);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia7,Cal_Materia7);
			Suma=Cal_Materia1+Cal_Materia2,Cal_Materia3,Cal_Materia4,Cal_Materia5,Cal_Materia6,Cal_Materia7;
			Promedio=Suma/7;
			printf("*\t <.:Promedio:.> \t%.2f\n",Promedio);
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
			system("cls");
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia1,Cal_Materia1);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia2,Cal_Materia2);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia3,Cal_Materia3);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia4,Cal_Materia4);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia5,Cal_Materia5);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia6,Cal_Materia6);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia7,Cal_Materia7);
			printf("*\t <Materia %s:.> \t%.2f\n",Nom_Materia8,Cal_Materia8);
			Suma=Cal_Materia1+Cal_Materia2,Cal_Materia3,Cal_Materia4,Cal_Materia5,Cal_Materia6,Cal_Materia7,Cal_Materia8;
			Promedio=Suma/8;
			printf("*\t <.:Promedio:.> \t%.2f\n",Promedio);
			}
			break;
		default:
			printf("Ingresa menos materias");
		break;
		
	}
	
	return 0;
}
