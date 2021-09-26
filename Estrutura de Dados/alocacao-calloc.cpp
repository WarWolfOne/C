//Calloc aloca semalhande ao "Malloc" mas com os valores de mem�ria s�o zerados, porem o "Calloc" � mais rapido.
//Como os valores de estruturas s�o atribuidos logo apos a cria��o, o "Calloc" � mais rapido.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int *p;
	
	p = (int *) calloc(20, sizeof(int));
	
	p[1] = 30;
	
	for (int i=0; i<20; i++) {
		printf("%d\n", p[i]);
	}
	
	return 0;
}
