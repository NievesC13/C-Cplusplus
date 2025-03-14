// Programa elaborado por Cesar Nieves
// 26/05/2021

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// declaramos funciones 
void Cuadro(int numero, char cad[]); 
int Texto(char cadena[]);


int main() {
	
	
	int op;
	do{ // ciclo do while para poder repetir 
		
		
		//Declaracion de Variables/
		char cad[50];    
		int i,cont=0; 
		
		//Solicitamos el mensaje que se va imprimir en el recuadro/
		texto: 
		printf("\nIntroduzca la cadena: "); 
		fgets(cad, 50, stdin);
		
		if (Texto(cad) ==0)
		{
			
		       while (cad[cont] != 0) // calculamos cuantos caracteres tiene 
		       {
	             	cont++;
		       } 
		       printf("\nLa cadena contiene %i caracteres\n\n",cont);
		       	Cuadro(cont, cad);
		       
		}else goto texto; 
		
		
		printf("\n\nDeseas volver a ejecutar el programa?\n");
		printf("1=Si , 2=No: ");
		scanf("%d", &op);
		
	}while(op ==1);	
	return 0;
}

void Cuadro(int number, char cad[50])
{
	int i, j, alto, ancho;
	
	alto = 3;
	ancho = number+2 ;
		
		
	for(i=1; i<=ancho; i++)  
		printf("*");
	    printf("\n");
 
	printf("*");
	for(i=1; i<=alto-2; i++) 
	{  
	    
		printf("%s", cad);		
	       
	}
    printf("*\n");
	
	for(i=1; i<=ancho; i++)  
	
		printf("*");
	    printf("\n");
 

	
}

int Texto(char cadena[])
{
	int i;
	
	for(i=0; i < strlen(cadena); i++)
	{
		if (!(cadena[i]==32 || cadena[i]>=65 && cadena[i]<=90 || cadena[i]>=97 && cadena[i]<=122))
		{
			printf ("\nSolo Ingrese Letras");
			return 0;
		 
		}
	}
	return 1;
}
