// aloca��o de vetor e vetor de caracteres.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void PrintMsg(char *ponteiro, int tamanho);

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num = 32;
	char *p;	
	
	p = (char *) malloc(num); // a string recebe o valor de aloca��o da variavel "num"
	
	p[0] = 'M'; //atribuir valor a posi��o do vetor.
	
	for (int i=0; i<num; i++) {
		printf("%c\n", p[i]); //obs. ele vai pegar coisas aleatorias na impress�o
	}
	
	PrintMsg(p, num);
	
	return 0;
}

void PrintMsg(char *ponteiro, int tamanho) {
	
	if (!ponteiro) {
		printf("\nMem�ria insuficiente\n");
	} else {
		printf("\n%d bytes alocados\n", tamanho);
	}
	
}


