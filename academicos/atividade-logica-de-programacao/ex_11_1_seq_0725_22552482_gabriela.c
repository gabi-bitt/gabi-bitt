#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n===================================\n");
	printf("     Troca de valor de variáveis       ");
	printf("\n===================================\n");
	
	int a, b, c;
	
	printf("Diga o valor de A:\n");
	scanf("%d", &a);
	
	printf("Diga o valor de B\n");
	scanf("%d", &b);
	
	c = a;
	a = b;
	b = c;
	
	printf("Resultado final:\n A: %d\n B: %d\n", a, b);
}
