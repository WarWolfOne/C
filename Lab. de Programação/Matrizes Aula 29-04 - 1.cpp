#include <stdio.h>
//Fa�a um programa que preencha uma matriz 4x4 e mostre os valores inseridos em forma de matriz.

void print(int matriz [][4]); //precisa limitar a matriz, menos na 1�

int i, j;

int main()
{
	int matriz[4][4];
	
	for (i=0; i<4; i++) {
    	for (j=0; j<4; j++) {
			scanf("%d", &matriz[i][j]);
		}
		printf("\n");
	}
		
	print(matriz);
	
    return 0;
}
  
  void print(int matriz [][4]) {
  	
	for (i=0; i<4; i++) { 	// o for de impress�o deve ser igual ao da l�gica da matriz
    	for (j=0; j<4; j++) {
			printf("[%d] ", matriz[i][j]);
		}
		printf("\n");
	}
}
