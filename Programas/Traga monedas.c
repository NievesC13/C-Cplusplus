

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main()
{
	int rep, vent_1, vent_2, vent_3, op; 
	float Dinero_inc= 0, Dinero_jug= 0, Dinero_gan=0, Dinero_total=0, Dinero_prin=0, Ganancia_net; 
	
	do
	{
		
		system("cls");
		
		printf("**** TRAGA MONEDAS ORI**** \n\n");  
		printf("Indique el numero de veces a jugar: ");  
		scanf("%d", &rep); 
	
		printf("Indique la cantidad de dinero INICIAL ($): ");  
		scanf("%f", &Dinero_inc); 
		
		
		Dinero_prin= Dinero_prin + Dinero_inc; 
		
		
		while(rep > 0 &&  Dinero_inc > 0 )
		{
			
			rep= rep-1;
			
			printf("\n\n");  
			srand (time(NULL));
	
			vent_1= rand()	% 9; // Ventana 1
	
			vent_2= rand()	% 9; // Ventana 2
	
			vent_3= rand()	% 9; // Ventana 3
	
			printf("%d - %d - %d ", vent_1, vent_2, vent_3); 
				
			
			Dinero_jug= Dinero_inc/2; 
			Dinero_inc= Dinero_inc- Dinero_jug; 
	
			if(vent_1== vent_2 && vent_1 ==  vent_3 ||  vent_2== vent_1 && vent_2 ==  vent_3 || vent_3== vent_2 && vent_3 ==  vent_1) // CCaso de que todas sean iguales.  
			{
			
				printf("\nDinero Jugado: %.2f ", Dinero_jug ); 
				Dinero_gan= Dinero_jug*3;
				Dinero_inc= Dinero_gan + Dinero_inc; 
				printf("\nDinero ganado: %.2f ", Dinero_gan ); 
				printf("\nDinero total: %.2f ", Dinero_inc ); 
				Ganancia_net= Dinero_inc-Dinero_prin;
		
		
			}
			
			if(vent_1== vent_2 || vent_1 ==  vent_3  || vent_2 ==  vent_3) // Caso de que 2 sean iguales.  
			{
				printf("\nDinero Jugado: %.2f ", Dinero_jug ); 
				Dinero_gan= Dinero_jug*2;
				Dinero_inc= Dinero_gan + Dinero_inc; 
				printf("\nDinero ganado: %.2f ", Dinero_gan ); 
				printf("\nDinero total: %.2f ", Dinero_inc ); 
				Ganancia_net= Dinero_total- Dinero_prin;		
		
			}
			else
			{
				printf("\n"); 
				printf("Usted es una oriana");  
			}
			
	
		
		}
		 
		if(Ganancia_net > 0)
		{
			printf("\n\nGANANCIA NETA: %.2f \n", Ganancia_net);
			
		}else
		{
			printf("\nNo obtuvo ganancia. F \n");
		}

		
		printf("\n\nDeseas volver a ejecutar el programa?\n");
		printf("1=Si , 2=No: ");
		scanf("%d", &op);
		
	
    }while(op==1);
	
}
