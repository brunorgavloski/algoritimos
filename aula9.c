#include <stdio.h>
#include <stdlib.h>

/*
 Aula 9
 lendo caracteres
 funções fgetc();

 leitura de arquivos

 */



int main () {
	char letra;

	printf("Digite um caractere: ");
	letra = fgetc(stdin);


	printf("A letra lida é: %c\n", letra);


	return 0;

}

