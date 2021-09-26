// Revis�o >>> passagem de parametros de um vector � sempre por referencia
// #define ORDEM 3 >>> defini��o de constante, ou seja o valor n�o altera.

#include <stdio.h> // biblioteca de entrada e saida
#include <stdlib.h> // habilita a fun��o maloc e rela��es com aloc��o dinamica alem das fun��es system.
#include <locale.h> // biblioteca de linguagens regionais.


int main() {
	
	setlocale(LC_ALL, "Portuguese"); // sele??o de local.

	int *p;
	printf("%d\n", sizeof(int));
	
	p = (int *) malloc(sizeof(int)); //malloc para quantidade de bytes a ser alocada.	
	// sizeof entrega o tamanho de alguma coisa.
	
	if (!p) {
		printf("Mem?ria insuficiente\n");
	} else {
		printf("Mem?ria alocada com sucesso\n");
	}
	
	return 0;
	
}
