#include <stdio.h>
#include <iostream>

int main() {

int N[1000], T, i;
	
	scanf("%d", &T);
	for (i = 0; i < 1000; i++) { //contador at� o valor de posi��es do vetor.
		N [i] = i%T; //i pega o resto de T
	}
	
	for (i = 0; i < 1000; i++)
	printf ("N[%d] = %d\n", i, N[i]);
	
}
