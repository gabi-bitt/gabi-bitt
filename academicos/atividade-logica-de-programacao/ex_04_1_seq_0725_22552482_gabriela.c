#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, med;
	
	printf("\nDigite a nota1:\n");
	scanf("%f", &nota1);
	
	printf("\nDigite a nota2:\n");
	scanf("%f", &nota2);
	
	med = (nota1 + nota2) / 2;
	
	printf("\nMédia aritmética: %.2f\n", med);
	
}
