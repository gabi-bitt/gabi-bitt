#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n===================================\n");
	printf("        Média aritmética                ");
	printf("\n===================================\n");
	
	float n1, n2, n3, media;
	
	printf("\nDigite o primeiro número:\n");
	scanf("%f", &n1);
	
	printf("\nDigite o segundo número:\n");
	scanf("%f", &n2);
	
	printf("\nDigite o terceiro número:\n");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3)/3;
	
	printf("\nResultado da média: %.1f\n", media);
}
