#include <stdio.h>
#include <locale.h>

int main(){
	float num[6], neg[6], somaneg = 0, med;
	int i, j=0;
	
	setlocale(LC_ALL, "Portuguese"); //faz com que o programa entenda acentos, mas utiliza a v�rgula como separador de casas decimais, ao inv�s do ponto
	
	printf("Digite 6 n�meros reais (o programa considera v�rgula, e n�o ponto):\n");
	
	for(i=0; i<6; i++){
		scanf(" %f", &num[i]);
		
		if(num[i]<0){
			neg[j] = num[i];
			somaneg+= neg[j];
			j++;
		}
	}
	
	if (j>0){
		printf("\nOs valores negativos digitados foram: ");
		med = somaneg/j;
		j--;
		do{
			printf("%f ", neg[j]);
			j--;
		}while(j>=0);
		
		printf("\nSua soma totaliza %f", somaneg);
		printf("\nSua m�dia totaliza %f", med);
	} else {
		printf("\nN�o foram digitados valores negativos");
	}
	
	return 0;
}
