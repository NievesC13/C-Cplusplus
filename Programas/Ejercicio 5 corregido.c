#include<stdio.h> //Se declaran las librerias
#include<conio.h>
#include<math.h>

main()
{
	int a, op, b, c, d, aux, edd; /*Se declaran las variables*/
	float prom, k;
	char nom[20], sex,
	
	//Menu
	
	rep=1;
	while(rep==1)
	{
		printf("Elija una de las opciones. \n");
		printf("1. Calculo de la raiz cuadrada. \n");
		printf("2. Intercambio de valores. \n");
		printf("3. Promedio del alumno. \n");
		printf("4. Salir \n");
		printf("Opcion: ");
		scanf("%d", &op);
		
		if(op>=1 && op<=4)
		{
			if(op==1)
			{
				printf("\n");
				printf("Ingrese un valor numerico: ");
				scanf("%d", &a);
				
				if(a>0 && a<9999999999)
				{
					k = sqrt(a); //calculamos la raiz
					
					printf("La raiz es: %f \n", k);
					
				}else 
				 { 
				      printf("Error raiz imaginaria");
				 }
			}
			
			if (op==2)
			{
				printf("\n");
				printf("Ingrese el primer valor: ");
				scanf("%d", &b);
				printf("Ingrese el segundo valor: ");
				scanf("%d", &c);
				printf("Ingrese el tercer valor: ");
				scanf("%d", &d);
				
				aux = b;
				b = c;
				c = d;
				d = aux;
				
				
				printf("\n");
				printf("El intercambio del primer valor es: %d \n", b);
				printf("El intercambio del segundo valor es: %d \n", c);
				printf("El intercambio del tercer valor es: %d \n", d);
				
				
			}
			
			if(op==3)
			{
				printf("\n");
				printf("Ingrese el nombre del Alumno: \n");
			    scanf("%s", nom);
			    printf("Ingrese el sexo del Alumno: \n");
			    scanf("%c", sex);
			    printf("Ingrese el promedio del Alumno: \n");
			    scanf("%f", prom);
				
				if(prom>=9.5)
				{
					printf("\n");
					printf("El Alumno %s de Sexo %c Aprobo la Materia\n", nom, sex, prom);
				}
				
				if(prom<=9.5)
				{
					printf("\n");
					printf("El alumno reprobo la materia. \n");
				}
				
						
			}
			
			
						
		}else
		{
			printf("\n");
			printf("Opcion no valida. \n");
		}
		
		printf("\n");
		printf("Desea volver a ejecutar el programa? \n");
        printf("1=SI\n");
        printf("2=NO\n");
        scanf("%d", &rep);
		
		
	}
	
	printf("El programa finalizo. \n");
	getche();
	
}
