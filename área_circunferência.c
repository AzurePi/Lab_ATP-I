#include <stdio.h>

int main() {
	float radius, area, pi;
	pi = 3.14159265359;
	
	printf("Qual � o raio da circunfer�ncia?\n");
	scanf("%f", &radius);
	area = 2*radius*pi;
	printf("A �rea da circunfer�ncia � %f", area);
	
	return 0;
}
