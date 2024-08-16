#include <stdio.h>

int main(){
	char string[50], c1, c2;
	int n = 0, p = 1;
	
	printf("Digite uma palavra: ");
	scanf("%[^\n]s", string);
	
	//determinar o tamanho da palavra
	do{
		c1 = string[n];
		n++;
	}while(c1 != '\0');
  	n--;
	
	//determinar se � pal�ndromo
	for(int i = 0; i<n/2; i++){
		c1 = string[i];
		c2 = string[n-1-i];
		
		if(c1 != c2){
			p = 0;
			break;
		}
	}
	
	if(p == 1){
		printf("\"%s\" � um pal�ndromo", string);
	}else{
		printf("\"%s\" N�O � um pal�ndromo", string);
	}
	
	return 0;
}
