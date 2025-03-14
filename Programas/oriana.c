//Oriana infante !! 

#include<conio.h>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


int validar(char num[]);
int Entero(char cadena[]);
int Decimal(char cadena[]);


int main()
{
	int rep, vent_1, vent_2, vent_3, op, i,j=0,l=0; 
	float Dinero_inc=0, Dinero_jug=0, Dinero_gan=0, Dinero_total=0, Dinero_prin=0, Ganancia_net; 
	char *vent1[]={"MANZANA", "CEREZA", "CAMPANA", "DURAZNO", "LIMON", "BAR", "7"}; 
	char *vent2[]={"MANZANA", "CEREZA", "CAMPANA", "DURAZNO", "LIMON", "BAR", "7"}; 
	char *vent3[]={"MANZANA", "CEREZA", "CAMPANA", "DURAZNO", "LIMON", "BAR", "7"}; 
	char a[999]; 	
	FILE *arch;
	
	
	time_t tiempo = time(0);
    struct tm *tlocal = localtime(&tiempo);
	
	
	do
	{
			arch=fopen("Reporte.txt", "at");
			if(arch==NULL)//si el puntero del archivo es nulo la salida es 1
			 exit(1);
	 		j = j + 1;
	
		fprintf(arch, "\nPartida %d.  Fecha: %d / %d / %d. Hora: %d:%d:%d\n\n", j, tlocal->tm_mday, tlocal->tm_mon+1, tlocal->tm_year+1900, tlocal->tm_hour, tlocal->tm_min, tlocal->tm_sec);
		l=0;
		system("cls");
		
		printf("\t\t\t\t**** TRAGA MONEDAS **** \n");  
		Beep(500,2000);
		rep:
		system("cls");
		printf("Fecha: %d / %d / %d. Hora: %d:%d:%d ", tlocal->tm_mday, tlocal->tm_mon+1, tlocal->tm_year+1900, tlocal->tm_hour, tlocal->tm_min, tlocal->tm_sec );	
		printf("\nIndique el Numero de Veces a Jugar: ");  
		gets(a); 
		rep = validar(a);
    	if (rep != 0)	
		{
   			if(rep>10 || rep< 0)
			   {
   		
   					printf("\n Numero de Jugadas Invalido (Max 10)\n Intente Nuevamente... \n", rep);
   					getch();
   			
   					goto rep;
   				
   			   }
   			
        	printf("\nNumero de Veces a Jugar: %d\n\n", rep);
        	
        	
		}
		else{
			
			goto rep; 
		}
		
		Dinero_inc:
		system("cls");	
		printf("\n\nIndique la Cantidad de Dinero INICIAL ($): ");  
		gets(a); 
		Dinero_inc = validar(a);
		
    	if (Dinero_inc != 0){
    		
   			if(Dinero_inc > 999999 || Dinero_inc < 0 ){
   				printf("\n Dinereo Inicial (Max $999999) (Min $2) \n Intente Nuevamente... \n");
   				system("pause");
   				
   				goto Dinero_inc;
   				
   			   }else if(Dinero_inc<2)
   			   {
   			   		printf("\nNo posee el minimo para jugar ($2)" ); 
   			   		goto Dinero_inc;
   			   }
   			
        	printf("\nDinero Inicial: %.2f\n\n", Dinero_inc);
        	
		}
		else{
			
			goto Dinero_inc; 
	   	} 
		
		printf("\nPrecione *ENTER* para iniciar...");
		
   		getch();  			
		
		srand (time(NULL));
			
		Dinero_prin= Dinero_prin + Dinero_inc; // Variable aux para saber con cuanto empezo a jugar 

		while(rep>0 &&  Dinero_inc>=2 ){
			
			l=l+1;
			Dinero_jug= Dinero_inc/2; // Dinero a jugar 
			Dinero_inc= Dinero_inc - Dinero_jug; //   Inicial restante
			rep= rep-1;
			
			printf("\n\n");  	
			 
			for(i=1;i<=10;i++){
				
				system("cls"); 
				
				vent_1= rand()	% 7; // Ventana 1
	
				vent_2= rand()	% 7; // Ventana 2
	
				vent_3= rand()	% 7; // Ventana 3
				
				printf("\n* %s | %s | %s *\n", vent1[vent_1], vent2[vent_2], vent3[vent_3]); 
				 
				Sleep(150); 
			}
			
	
			if(vent_1 == vent_2 && vent_1 ==  vent_3){ // Caso de que todas sean iguales.  
			
			
			
				printf("\nDinero Jugado: %.2f ", Dinero_jug ); //  Dinero jugado 
				Dinero_gan = Dinero_jug*3; // La ganancia x3 del dinero jugado
				Dinero_total = Dinero_gan + Dinero_inc; // Sumamos al total para tener el conteo 
				Dinero_inc = Dinero_gan + Dinero_inc; // Se suma el dinero ganado mas el inicial para tener mas base
				printf("\nDinero Ganado: %.2f ", Dinero_gan ); 
				printf("\nDinero Total: %.2f ", Dinero_total ); 
				
				printf("\n\nDeseas Seguir jugando?\n");
				printf("1=Si , 2=No: ");
				gets(a); 
				op = validar(a);
				if(op==2)
				{
					rep=0;
				}
		
				
			
			}else
		    if(vent_1== vent_2 || vent_1 ==  vent_3  || vent_2 ==  vent_3){// Caso de que 2 sean iguales.
				printf("\nDinero Jugado: %.2f ", Dinero_jug ); //  Dinero jugado 
				Dinero_gan = Dinero_jug*2; // La ganancia x3 del dinero jugado
				Dinero_total = Dinero_gan + Dinero_inc; // Sumamos al total para tener el conteo 
				Dinero_inc = Dinero_gan + Dinero_inc; // Se suma el dinero ganado mas el inicial para tener mas base
				printf("\nDinero Ganado: %.2f ", Dinero_gan ); 
				printf("\nDinero Total: %.2f ", Dinero_total ); 
						
				printf("\n\nDeseas Seguir jugando?\n");
				printf("1=Si , 2=No: ");
				gets(a); 
				op = validar(a);
				if(op==2)
				{
					rep=0;
				}
				
			}
			else{
				
				Dinero_total= Dinero_total - Dinero_jug;  // Restamon el dinero jugado que se perdio al tatal 
				printf("\n"); 
				printf("\nDinero Jugado: %.2f ", Dinero_jug ); 
				printf("\nNo Obtuvo Ganancia.");  
				printf("\nDinero Restante: %.2f", Dinero_inc); 
				
			}
			
			if(Dinero_inc<2){
					
					printf("\nNo posee menos de el minimo para jugar ($2)" ); 
				
			}
			
			
		
			
			Ganancia_net = Dinero_total - Dinero_prin; // Calculamos la Ganancia Neta
			
   				system("pause");		
			
			fprintf(arch, "\n Giro %d Jugado %.2f  Dinero Pagado %.2f \n", l,Dinero_jug,Dinero_gan);//para imprimir el archivo
		
		}
		 
		if(Ganancia_net > 0){
			printf("\n\nGANANCIA NETA: %.2f \n", Ganancia_net);
			
		}else{
			printf("\n\n\nNo Obtuvo Ninguna Ganancia. \n");
		}
	
		
		printf("\n\nDeseas Volver a Ejecutar el Programa?\n");
		printf("1=Si , 2=No: ");
		gets(a); 
		op = validar(a);
		
		fclose(arch);//cierre de archiv
    }while(op==1);




}

int validar(char num[]){
    int i, numero;
	for (i = 0; i < strlen(num); i++){
        if(!isdigit(num[i]) ) {
            printf("\nIngrese un Numero Valido\n");
            return 0;
			break;
        }
    }
    numero = atoi(num);
    return numero;
}




		
		
		
