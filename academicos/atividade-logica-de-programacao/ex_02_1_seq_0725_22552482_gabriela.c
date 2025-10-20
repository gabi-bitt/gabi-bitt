#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()  
{ 
  setlocale(LC_ALL, "Portuguese");

  int v1, v2, soma, sub, mult;

  printf("\nDigite o valor 1:\n");
  scanf("%d", &v1);
  
  printf("\nDigite o valor 2:\n");
  scanf("%d", &v2);
  
  soma = v1 + v2;
  sub = v1 - v2;
  mult = v1 * v2;
  
  printf("\nResultado da soma: %d", soma);
  printf("\nResultado da subtração: %d", sub);
  printf("\nResultado da multiplicação: %d", mult);

}

