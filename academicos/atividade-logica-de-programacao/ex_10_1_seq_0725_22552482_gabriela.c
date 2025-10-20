#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n===================================\n");
	printf("          Raiz da Equação              ");
	printf("\n===================================\n");
	
	float a, b, raiz;
	
	printf("Digite o valor de a:\n");
	scanf("%f", &a);
	
	printf("Digite o valor de b:\n");
	scanf("%f", &b);
	
	raiz = -b/a;
	
	printf("Resultado: %f\n", raiz);
		
}
