#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>


void Cuadro(int numero, char cad[50]);

int main() {
	
	char cad[50];    
	int cont=0; 
	printf("Introduzca la cadena: "); 
	fgets(cad, 50, stdin);
	while (cad[cont] != 0)
	{
    	cont++;
	} 
	printf("\nLa cadena contiene %d caracteres\n\n",cont);
	Cuadro(cont, cad);
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
	
	for(i=1; i<=alto-2; i++) 
	{  
	       printf("*");
		   printf("%s", cad);	
	       printf("*");
	}
 
	for(i=1; i<=ancho; i++)  
		printf("*");
	printf("\n");
 

	
}
