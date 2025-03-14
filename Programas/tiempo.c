#include<conio.h>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


int main()
{

	time_t tiempo = time(0);
    struct tm *tlocal = localtime(&tiempo);
	
	printf("Fecha: %d / %d / %d. Hora: %d:%d:%d ", tlocal->tm_mday, tlocal->tm_mon+1, tlocal->tm_year+1900, tlocal->tm_hour, tlocal->tm_min, tlocal->tm_sec );
    

    return 0;
}


