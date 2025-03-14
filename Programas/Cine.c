//// parcial nro 2
// priograma nro2 realizado por Cesar Nieves 
// 27/05/2021


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


char asientos[25][4];
int x, i, j, asiento;
char a, fila;

void iniciar(void);
void reserva(void);
void cancelar (void);
void mostrar (void);



int main ()
{
	int op1;
	iniciar ();
	for(;;){
		mostrar();
		printf("seleccione una opcion\n");
		printf("1- reservar asiento\n");
		printf("2- cancelar\n");
		printf("3- mostrar asientos\n");
		printf("4- salir");
		scanf("%d",&op1);
		switch (op1){
		case 1:
			reserva();
			break;
		case 2:
			cancelar();
			break;
		case 3:
			mostrar();
			break;
		case 4:
			exit(1);
			break;
		default:break;
	}
}
}

// funcion para iniciar

void iniciar(void)
{//se inicializa la matriz en '0'
	x=0;
	for(i=0;i<25;i++){
		for (j=0;j<4;j++){
			asientos [i][j]='0';
		}
	}	
}

//funcion para reservar 

void reserva(void)
{//se cargan las reservas

	//mostrar();
	do
	{
		printf("solo letras mayuscuals A o B o C 0 D\n");
		printf("Ingrese la Letra de la fila :\n");
		scanf("%c",&fila);
		//fila=getchar();
	    while(getchar() != '\n');//frena el bucle infinito en caso de ingresar un valor no entero	
	} while(fila < 'A' || fila > 'D' );
	
	do
	{
		printf("solo numeros de 1 a 25\n");
		printf("Ingrese numero asiento :\n");
		scanf("%d",&asiento);
	    while(getchar() != '\n');//frena el bucle infinito en caso de ingresar un valor no entero	
	}while(asiento < 1 || asiento > 25) ;
	if(fila =='A')
		x=0;
	if(fila =='B')
		x=1;
	if(fila =='C')
		x=2;
	if(fila =='D')
		x=3;
		system("clear");
	if(asientos[x][asiento-1]=='X')
	{ // si el asiento esta ocupado nos avisa y pide ingresar otra vez la reserva
		printf("el asiento %c%d Ya esta reservado\n vuelva a ingresar su reserva\n",fila,asiento);
		reserva();
	}else
	{
		printf("Usted eligio la fila %c numero %d\n", fila, asiento);
		asientos [x][asiento-1]= 'X'; //carga el valor X en la reserva
		//printf("\t");
	}
	//mostrar();
}

//funcion para cancelar reservacion 

void cancelar (void)
{//igual que en reserva pero cambia el valos X po 0 en el lugar espscifico de la matriz
	do
	{
		printf("solo letras mayuscuals A o B o C 0 D\n");
		printf("Ingrese la Letra de la fila :");
		scanf("%c",&fila);

	    while(getchar() != '\n');//frena el bucle infinito en caso de ingresar un valor no entero	
	}   while(fila < 'A' || fila > 'D' );
	
	do
	{
		printf("solo numeros de 1 a 25\n");
		printf("Ingrese numero asiento :");
		scanf("%d",&asiento);
      	while(getchar() != '\n');//frena el bucle infinito en caso de ingresar un valor no entero	
	}   while(asiento < 1 || asiento > 25) ;
	if(fila =='A')
		x=0;
	if(fila =='B')
		x=1;
	if(fila =='C')
		x=2;
	if(fila =='D')
		x=3;
		system("clear");
	if(asientos[x][asiento-1]!='X')
	{
		printf("el asiento %c%d NO esta reservado\n vuealva a ingresar su asiento\n",fila,asiento);
		cancelar();
	}else
	{
		printf("Usted elimino el asiento de la fila %c numero %d\n", fila, asiento);
		asientos[x][asiento-1]= '0';
		printf("\t");
	}
	mostrar();
}

// funcion para mostrar en pantalla 
void mostrar (void)
{// muestra los valores de la matriz 0 vacio X ocupado
	a='A';
	printf("\t");
	for (j=1;j<26;j++)
	{
		printf("%d ",j);
	}
		printf("\n");
    for(i=0;i<4;i++)
	{
		printf("%c\t", a);
		a= a+1;
		for (j=0;j<25;j++)
		{
			if (j<10)
			printf("%c ",asientos[i][j]);
			else
			printf(" %c ",asientos[i][j]);
		}
	    printf("\n");
	}
	
}



////*** ***********VALIDACIONES ********

int validar(char num[])
{
    int i, numero;
	for (i = 0; i < strlen(num); i++)
    {
        if(!isdigit(num[i]) ) {
            printf("\nIngrese un numero valido\n");
            return 0;
			break;
        }
    }
    numero = atoi(num);
    return numero;
}



int Texto(char cadena[])
{
	int i;
	
 if(strlen(cadena)<0)
 {
 	
 
	for(i=0; i < strlen(cadena); i++)
	{
		if (!(cadena[i]==32 || cadena[i]>=65 && cadena[i]<=90 || cadena[i]>=97 && cadena[i]<=122 ))
		{
			printf ("\nSolo Ingrese Letras");
			return 0;
		}
	}
	return 1;
	
 }else
 {
 	printf ("\nTiene que ingresar un nombre.\n");
 	return 0; 
 	
 }
}
void LimpiarBuffer()
{
    int ch;
    //Limpia el búfer del teclado hasta encontrar un salto de línea o fin del archivo
    while((ch = getchar()) != '\n' && ch != EOF);
}

