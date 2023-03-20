#include <stdio.h>
#include <stdlib.h>

/*
 * aula 8
 * lendo caracteres
 * funcao getc();
 *
 */


int main(){
	char letra;

	printf("Digite um caractere: ");
	
	letra = getc(stdin);

	printf("Caracteres lido: %c\n", letra);

	return 0;
}
