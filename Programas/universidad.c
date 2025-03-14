//programa realizado por cesar nieves
//universidad santa maria, ingreso de datos. 


#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>

#define costo_lab 50

int main()
{
	int nro_exp, age ,und_cred_ins, op, alum_total=0, alum_adm=0, alum_ing=0, alum_edu=0;  // nro_exp: numero de expediente, edd:edad, und_cred_ins: unidad de credito inscritas, op: operador de repeticion 
	float val_und_cred, mont_pag, porc_edu, porc_ing, porc_adm, media_edad_adm=0; 
	char nom[30], sex[10], facult; 
	
	do // para que el usuario pueda repetir el programa 
	{
		printf("Ingrese su Numero de Expediente: "); 
		scanf("%d", &nro_exp); 
	
		if (nro_exp >=1 && nro_exp<=9999) //comparamos que el numero de expediente sea logico 
		{
			printf("Ingrese su Nombre: "); 
			scanf("%s", nom); 
			
			printf("Ingrese su Edad: ");
			scanf("%d", &age);
			
			if (age>=15 && age<=80)
			{
				printf("Ingrese su Sexo (MASCULINO / FEMENINO): ");
				scanf("%s", sex);
			
				printf("Ingrese las unidades de creditos inscritas: ");
				scanf("%d", &und_cred_ins);
								
				if (und_cred_ins>=2 && und_cred_ins<=20)
				{
				    printf("\n*Los alumnos de Ingenieria pagan 50$ mas por el derecho al laboratorio*\n\n");
					printf("Ingrese el valor de las unidades de creditos: ");
					scanf("%f", &val_und_cred);
					printf("Ingrese el numero de su facultad\n");
					printf("1 = (A)Administracion\n");
					printf("2 = (I)Ingenieria\n");
					printf("3 = (E)Educacion\n\n");
					printf("Facultad: "); 
					scanf("%s", &facult);
					
					if(facult=='A' || facult=='a' || facult=='I' || facult=='i' || facult=='E' || facult=='e')	    		
					{
						if(facult=='A' || facult=='a')
						{
							alum_total++;
							alum_adm++;
							media_edad_adm += age;
							mont_pag=(und_cred_ins*val_und_cred); // calculamos el monto a pagar 
							printf("El monto a pagar es de: %.2f$\n", mont_pag);
						}
						
						if(facult=='I' || facult=='i')
						{
							alum_total++;
							alum_ing++;							 
							mont_pag=(und_cred_ins*val_und_cred)+costo_lab; // calculamos el monto a pagar, lo multiplicamos por el val_agr para sacar el costo del laboratorio
							printf("El monto a pagar es de: %.2f$\n", mont_pag);
							printf("Este tiene un valor agregado de 50$ por el derecho al laboratorio.\n");	
						}
						
						if (facult=='E' || facult=='e')
						{
							alum_total++;
							alum_edu++;
							mont_pag=(und_cred_ins*val_und_cred); // calculamos el monto a pagar 
							printf("El monto a pagar es de: %.2f$\n", mont_pag);
						}
					}else
						printf ("Ingreso una opcion incorrecta\n"); 
				}else 
					printf("\nEstas unidades de creditos no son las inscritas\n\n");
			}else
				printf("\nEsta edad no es admitida por la Universidad\n\n");	
		}else
			printf("\nEste expediente no esta en nuestra base de datos\n\n ");
		
		printf("\nDesea intentarlo de nuevo?\n");
		printf("(1 para Si, 2 para No)	");
		scanf("%d", &op);
		system("cls"); 
		
	}while (op==1);
	
	porc_adm = (alum_adm*100)/alum_total;
	porc_edu = (alum_edu*100)/alum_total;
	porc_ing = (alum_ing*100)/alum_total;
	media_edad_adm /= alum_adm;
	
	printf("\nPorcentaje de Alumnos de Administracion %.2f\n",porc_adm);
	printf("Porcentaje de Alumnos de Ingenieria %.2f\n",porc_ing);
	printf("Porcentaje de Alumnos de Educacion %.2f\n",porc_edu);
	printf("\nLa media de edad de los alumnos de administracion es de %.2f",media_edad_adm);									
	
	printf("\n** El programa finalizo ** \n\n ");
	getch(); 
}
