#include <stdio.h>
#include <locale.h>

int main(){
	//vari�veis
	int vec[6], i, j, aux;
	
	//define a l�ngua como portugu�s
	setlocale(LC_ALL, "Portuguese");
	
	//usu�rio cria um vetor
	printf("Escreva seis valores inteiros para compor um vetor:\n");
	for(i=0; i<6; i++){
		scanf(" %d", &vec[i]);
	}
	
	//m�todo da bolha para ordenar um vetor
	for(i=0; i<6; i++){
		for(j=i+1; j<6; j++){
			if(vec[i]>vec[j]){
			aux = vec[i];
			vec[i] = vec[j];
			vec[j] = aux;
			}	
		}
	}
	
	
	printf("Os valores desse vetor organizados em ordem crescente s�o:\n");
	for(i=0; i<6; i++){
		printf("%d\n", vec[i]);
	}
	
	
	return 0;
}
