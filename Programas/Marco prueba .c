#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SANG 3	//SANGRIA
#define MAX 999
#define MIN 0
#define CHAR 255
//FUNCIONES DE VALIDACION DE DATOS
int validarNUM(char valor[]);
int validarINT(char valor[]);
int validarNATURAL(char valor[]);
int validarLETRA(char valor[]);

void comparar(char text[]); 
void horizontal(int n);
void vertical(int n);
void texto(char text[]);
int conteo(char text[]);
void linea();
int bucle();
void programa();
void error();
int valid, opc;

char valor[CHAR];

int main()
{
	
	do
	{
		system("cls");
		printf("Texto ");
		
		programa();
		opc = bucle();
	}while(opc == 1);
	
	return 0;
}

void programa ()
{
	char text[MAX];
	int acum;

	do
	{
		printf("Ingrese el texto que desea visualizar: ");
		 gets(text);


		acum = conteo(text);
	}while(acum == 0);
	
	horizontal(acum);
	vertical(acum);
	texto(text);
	vertical(acum);
	horizontal(acum);
    
	
}
int bucle()
{	
	do
	{
		//fflush(stdin);
		printf("\n Desea seguir usando el programa  (0)NO - (1)SI\n\n DIGITE su opcion: ");gets(valor);
		opc = atoi(valor);
		if(opc > 1 );
	}while(opc > 1 );
	
	return opc;
}	    
//FUNCION HORIZONTAL
void horizontal(int n)
{
	int i;
	for(i=0;i<=n+7;i++)
	{
		printf("*");
	}
	printf("\n");
}
//FUNCION VERTICAL
void vertical(int n)
{
	int i,j;
	for(i=0;i<SANG;i++)
	{
		printf("#   ");
		for(j=0;j<n;j++)
		{
			printf(" ");
		}
		printf("   #\n");
	}
}
//FUNCION TEXTO
void texto(char text[])
{
	int i;
	
	printf("#   %s   #\n",text);
	
}
//FUNCION HORIZONTAL
int conteo(char text[])
{
	int acum=0;
	acum = strlen(text);
	if(acum>71)
	{
		linea();
		printf("\t    La expresion es muy larga para el ancho de la consola!");
		linea();
		return 0;
	}
	return acum;	
}
//FUNCION LINEA
void linea(){printf("\n\n\t\t________\n\n");}


