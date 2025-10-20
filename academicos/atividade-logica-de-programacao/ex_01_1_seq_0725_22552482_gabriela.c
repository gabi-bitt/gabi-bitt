#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
 setlocale(LC_ALL, "Portuguese");
 
 float v1, v2, soma;
 
 printf("\nDigite o valor 1:\n");
 scanf("%f", &v1);
 
 printf("\nDigite o valor 2:\n");
 scanf("%f", &v2);
 
 soma = v1 + v2;
 
 printf("\n A soma dos valores é: %.2f", soma);
 
}


