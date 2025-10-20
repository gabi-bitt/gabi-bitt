#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n===================================\n");
	printf("         Média ponderada             ");
	printf("\n===================================\n");
	
	
	float nota1, nota2, med, peso1, peso2;
	
	printf("\nDigite a nota1:\n");
	scanf("%f", &nota1);
	
	printf("\nDigite a nota2:\n");
	scanf("%f", &nota2);
	
	printf("\nDigite o peso 1:\n");
	scanf("%f", &peso1);
	
	printf("\nDigite o peso 2:\n");
	scanf("%f", &peso2);
	
	med = ((nota1 * peso1) + (nota2 * peso2)) / (peso1 + peso2);
	
	if (med>=5) {
		printf("\n Média do aluno: %.2f\n Aluno aprovado", med);
	} else {
		printf("\n Média do aluno: %.2f\n Aluno reprovado", med);
	}
	
}
