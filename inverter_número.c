#include <stdio.h>

int main() {
	int N, M;
	int C, D, U;
	int aux1;
	
	printf("Digite um n�mero de tr�s algarismos\n")/
	scanf("%d", &N);
	
	C = N/100;    //pega o quociente da divis�o, a centena
	aux1 = N%100; //pega o resto da divis�o, dezena e unidade
	
	D = aux1/10;
	
	U = aux1%10;
	
	M = C + D*10 + U*100;
	printf("Esse n�mero ao contr�rio � %d\n", M);
	
	return 0;
}
