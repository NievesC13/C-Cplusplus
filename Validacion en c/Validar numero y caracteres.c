#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Entero(char cadena[]);
int Decimal(char cadena[]);
int Texto(char cadena[]);

void main()
{
	char cadena[6];
	
	printf("Introducir numero: ");
	gets(cadena);

	/*if(Entero(cadena))
		printf("Es entero, valor: %d", atoi(cadena));
	else if(Decimal(cadena))
		printf("Es decimal, valor: %lf", atof(cadena));
	else
		printf("No es un numero");*/
	
	if (Decimal(cadena))
	{
		printf("\nNumero valido");
	}else
	{
		printf("\nNumero invalido");
	}
		
}

int Entero(char cadena[])
{
   int i, valor;

   for(i=0; i<strlen(cadena); i++)
   {
      valor = cadena[i] - '0';
      if(valor<0 || valor>9)
      {
          if(i==0 && valor==-3) continue;
          return 0;
      }
   }
   return 1;
}

int Decimal(char cadena[])
{
   int i, valor;
   int tiene_punto = 0;

   for(i=0; i < strlen(cadena); i++)
   {
      valor = cadena[i] - '0';
      if(valor < 0 || valor > 9)
      {
          /* El primer caracter es: - */
         if(i==0 && valor==-3) continue;

         /* Verifica que solo tenga un: . */
         if(valor==-2 && !tiene_punto)
         { 
            tiene_punto=1;
            
            continue;
         }
         return 0;
      }
   }
   
   
   return 1;
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


