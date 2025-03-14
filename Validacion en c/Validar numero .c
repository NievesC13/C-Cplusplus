// validar numeros!! 

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int validar(char num[]);

int main() 
{
    char a[10];
    int numero;
    
    numero: 
    printf("Introducir numero: ");
	gets(a);
    numero = validar(a);
    if (numero != 0)
    {
    	printf("\nUsted ha introducido el numero %d", numero);
	}else
	{
		goto numero; 
	}
			

    	
			
}

 int validar(char num[])
{
    int i, numero;
	for (i = 0; i < strlen(num); i++)
    {
        if(!isdigit(num[i]) ) 
		{
            printf("\nIngrese un numero valido\n");
            return 0;
			break;
        }
    }
    numero = atoi(num);
    return numero;
}
