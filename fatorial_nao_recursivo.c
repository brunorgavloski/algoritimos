#include <stdio.h>



int fatorial(int numero)
{
	int i, n = 1;
	for (i=numero; i>0;i--)
		n = n * i;
	return n;
}

int main ()
{
	printf("\nfatorial de 3: %d\n", fatorial(6));
}

/*
 *n x i = n
 *1 x 3 = 3
 *3 x 2 = 6
 *6 x 1 = 6
 *
 */
