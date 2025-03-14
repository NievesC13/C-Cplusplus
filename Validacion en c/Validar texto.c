// validar texto 
#include<stdio.h>		//Acceso a biblioteca
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


void limpiarbufer(void);
int val=1;
int validtexto(char cadena[50]);

int main()
{
 
 int op=1; 	
; 
 do
 {
    char cad, validcad;
	int aux, i; 
 
	printf("Ingrese una cadena de caracteres\n");
	cad= getchar();
	
	
	
	val=validtexto(cad);
	
	if(val==0)
	{
		printf("su cadena es: %s", cad);
		
	} else printf("Ingrese solo caracteres"); 
	
	
 }while(op==1); 
	
	
}

int validtexto(char cadena[50])
{
	int i, val=0, j;
    
	j=strlen(cadena); 
	
	while(i<j && val==0)
	{
		if(isalpha(cadena[i])!=0)
		{
			i++; 
			
		}else  val=1; 
		
    }   
   
   limpiarbufer(); //Limpiamos el buffer para evitar errores
   return val;
	
}

void limpiarbufer(void)
{
	 int L;
    //Limpia el búfer del teclado hasta encontrar un salto de línea o fin del archivo
    while((L = getchar()) != '\n' && L != EOF);
	
}

