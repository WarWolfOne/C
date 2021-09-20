//pegar um vetor de 10 posi��es e durante a execu��o e transforma-lo em um vetor de 20 posi�oes. 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void PrintMsg(int *ponteiro, int tamanho);

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num = 10;
	int *p;
	
	p = (int *) malloc(num*sizeof(int)); //alocar 10x um inteiro.
		
	for (int i=0; i<num; i++) {
		printf("int[%d] = %d \t end: %d\n", i, p[i], &p[i]); //o "&" � usado quando queremos pegar o endere�o de memoria.
	}
	
	num = 20;
	realloc(p, num*sizeof(int)); //realocando mem�ria, no bloco anterior onde eram 10x, se torna20x.	
	
	printf("\n\n");
	for (int i=0; i<num; i++) {
		printf("int[%d] = %d \t end: %d\n", i, p[i], &p[i]); 
	}
	
	free(p);
	
	printf("\n\n Ap�s libera��o de mem�ria \n  ");
	printf("int[0] = %d \t end: %d\n", p[0], &p[0]);
	return 0;
}

void PrintMsg(int *ponteiro, int tamanho) {
	
	if (!ponteiro) {
		printf("Mem�ria insuficiente\n");
	} else {
		printf("%d bytes alocados\n", tamanho);
	}
	
}
