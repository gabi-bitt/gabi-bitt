#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n===================================\n");
	printf("          Área do círculo            ");
	printf("\n===================================\n");
	
	float r, area;
	
	printf("\nInforme o valor do raio:\n");
	scanf("%f", &r);
	
	area = 3.14 * (r * r);
	
	printf("\nA área desse círculo é: %.3f", area);
	
}

