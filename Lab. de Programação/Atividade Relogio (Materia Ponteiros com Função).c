/*
Matheus do Nascimento Saito - 2020262
1 - Escreva um programa que receba um n�mero inteiro representando a quantidade total de segundos e, usando passagem de par�metros por refer�ncia, 
converta a quantidade informada de segundos em Horas, Minutos e Segundos. Imprima o resultado da convers�o no formato HH:MM:SS. 
Utilize a seguinte fun��o prot�tipo: void converteHora (int total_segundos, int *hora, int *min, int *seg);
*/

#include<stdio.h>

int segundos;

void conversor_relogio(int *h, int *m, int *s);

int main(void){
	
	int  h, m, s;
	
	printf("Insira o total de segundos. \n");
	scanf("%d", &segundos);
	conversor_relogio(&h, &m, &s);
	printf("%dh  %dm %ds \n", h, m, s);
	
	return(0);
}

void conversor_relogio(int *h, int *m, int *s){

	*h = segundos / 3600;// 3600 s�o o total de segundos  em uma hora
	*m = (segundos % 3600) / 60;
	*s = (segundos % 3600) % 60;
}
