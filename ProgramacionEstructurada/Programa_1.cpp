#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main()
{
	char NombreCompleto[60] = "Cesar Antonio Hernandez Valtierra";
	char Registro[15] = "21110066";
	int CalculoInt=70,ElectroMagne=75,MatematicasDiscre=70,Ingles=76,CulturaCompa=79,Programacion=87;
	
	printf(".:<Nombre completo>:. \t\t\t%s\n",NombreCompleto);
	printf(".:<Reistro>:.  \t\t\t\t%s\n",Registro);
	printf(".:<Calculo Integral>:.\t\t\t%d\n",CalculoInt);
	printf(".:<Electromagnetismo>:.\t\t\t%d\n",ElectroMagne);
	printf(".:<Matematicas Discretas>:.\t\t%d\n",MatematicasDiscre);
	printf(".:<Ingles>:.\t\t\t\t%d\n",Ingles);
	printf(".:<Cultura comparada>:.\t\t\t%d\n",CulturaCompa);
	printf(".:<Introduccion a la programacion>:.\t%d\n",Programacion);
	
	
	return 0;
}
