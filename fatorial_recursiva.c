/*Fatorial recursivo*/
#include <stdio.h>

int fatorial ( int numero )
{
	if(numero <= 1)
		return 1;
	return numero * fatorial(numero -1);
}

int main()
{
	printf("Fatorial de 6: %d \n", fatorial(6));
}
