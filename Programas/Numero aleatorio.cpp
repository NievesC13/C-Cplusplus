#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
	int var;
	
	srand (time(NULL));
	
	var= rand(9);
	printf("%d", var);
	
	
}
