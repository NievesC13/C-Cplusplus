//Programa realizado por cesar nieves 
// margenes 

#include <stdio.h>	
#include <stdlib.h>

void Cuadro(int numero, char cad[50]); //claramos las funciones a utilizar 
int main() {
	
	/Ciclo Do While para que el usuario pueda repetir la operacion/
	int repetir;
	do{
		/Limpiamos la pantalla para una mejor visualizacion al momento de repetir el programa/
		system("cls");
		
		/Declaracion de Variables/
		char cad[50];    
		int i,cont=0; 
		
		/Solicitamos el mensaje que se va imprimir en el recuadro/
		printf("Introduzca la cadena: "); 
		fgets(cad, 50, stdin);
		
		/Ciclo While para contar la cadena de Caracteres del mensaje que escribio el usuario/
		while (cad[cont] != 0)
		{
	    	cont++;
		} 
		printf("\nLa cadena contiene %i caracteres\n\n",cont);
		
		/*Llamamos a la funcion para imprimir el mensaje con su borde, a esta
		  funcion se le pasa un parametro entero que es la cantidad de caracteres 
		  y el mensaje escrito por el usuario*/
		Cuadro(cont, cad);
		
		/Preguntamos al usuario si desea repetir el programa/
		printf("\n\nDeseas volver a ejecutar el programa?");
		printf("\n1=Si , 2=No\t");
		scanf("%d", &repetir);
		
	}while(repetir ==1);	
	return 0;
}

void Cuadro(int number, char cad[50])
{
	/Declaracion de Variables que se van a utilizar en la funcion/
	int i, j, k, alto, ancho;
	
	/Calculamos el alto y ancho de acuardo a la cantidad de caracteres que posee el mensaje/
	alto = number/2;
	ancho = 4;
	
	/Ciclo por anidados para la ejecucion de la impresion/
	for (i = 1; i <= number; i++)
	{
		for (j = 1; j <= number; j++)
		{
		    if (i == 1 || i == number || j == 1 || j == number)
				printf("* ");
		    else
		    {
		    	if (i==alto && j==ancho)
		    		printf(" %s      ",cad);
		    		
				printf("  ");		    	
			}
		}
	printf("\n");
	}
}
