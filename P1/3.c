#include <stdio.h>

int main(){
	//Declara��o das vari�veis
	int i, j, n = 3;
	float A[n][n], B[n][n];
	
	//Programa principal
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
		{
			printf("Digite o elemento A[%d][%d]: ", i+1, j+1);
			scanf("%f", &A[i][j]);	
		}
	
	int s = 1; //assume que toda matriz � sim�trica

 	//faz a transposi��o
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			B[i][j] = A[j][i];
		}
	}
	
	//verifica a simetria de fato
	for(i = 0; i<n; i++){
		for(j=0; j<n; j++){
			if(A[i][j] != A[j][i]){
				s = 0;
				break;
			}
		}
	}
	
	if(s == 1){
		printf("Essa matriz � sim�trica");	
	}else{
		printf("Essa matriz N�O � sim�trica");
	}
	
	return 0;
}
