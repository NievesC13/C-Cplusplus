/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
 
 /*aqui puedes colocar cualquier letra yo coloque b pero puedes modificarla por la que te guste */
 
int b=1;


int main ()
{
	
int valor_1;


//////////necesitaras colocar un do while para validar lo que este dentro///////////////
do{
	
printf("rango de numeros disponibles de 1 a 100");	
	
printf("\nIngrese el valor 1: ");	

/////////////////////el validformat tambien lo puedes escribir como tu quieras mientras en todos los lugares necesarios este escrito de la misma manera ////
	
if(validformat("%i",& valor_1))continue;

if(valor_1>=1 && valor_1<=100){

////////encierro esta variable dentro de un if para que cuando el numero este en esos rangos es que se ejecute si no se devuelve/////////////////////////
b=valor_1<1;}
	
}while(b);	
	
	
printf("El valor 1 es %i",valor_1);
	
	
	
	
	
return 0;
}

int validformat(const char* tipo, void* validar)
{
b=1;//reseteamos la comprobacion de la opcion

//Si la función scanf retorna 0, fue porque hubo una falla en la lectura..
if(!scanf(tipo, validar))
{
//Limpiamos el búfer del teclado para que la próxima lectura se lleve a cabo.
clearBuf();
system("cls");
return 1;}
    
//Si no encontramos un salto de línea en el búfer, es porque el usuario no cumplió con el formato.
if(getchar() != '\n'){
//Volvemos a limpiar el búfer para la próxima lectura.
clearBuf();

system("cls");

return 1;}
system("cls");
return 0;
}

void clearBuf()
{
    
int ch;
//Limpia el búfer del teclado hasta encontrar un salto de línea o fin del archivo
while((ch = getchar()) != '\n' && ch != EOF);}
