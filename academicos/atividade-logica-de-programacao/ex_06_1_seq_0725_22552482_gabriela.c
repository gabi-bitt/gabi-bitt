#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n===================================\n");
	printf("          �rea do c�rculo            ");
	printf("\n===================================\n");
	
	float r, area;
	
	printf("\nInforme o valor do raio:\n");
	scanf("%f", &r);
	
	area = 3.14 * (r * r);
	
	printf("\nA �rea desse c�rculo �: %.3f", area);
	
}

