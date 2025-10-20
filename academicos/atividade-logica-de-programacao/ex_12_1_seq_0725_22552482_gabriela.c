#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n===================================\n");
	printf("        Adição e Subtração             ");
	printf("\n===================================\n");
	
	float v1, v2, adicao, sub;
	
	printf("\nDigite o valor 1:\n");
	scanf("%f", &v1);
	
	printf("\nDigite o valor 2:\n");
	scanf("%f", &v2);
	
	adicao = v1 + v2;
	sub = v1 - v2;
	
	printf("\nResultado:\n Adição: %.2f\n Subtração: %.2f\n", adicao, sub);
	
	
}
