#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float altura, peso_ideal;
	char genero;
	
	printf("\nDigite sua altura: ");
	scanf("%f", &altura);
	
	printf("\nInforme seu gênero(digite 'm' para masculino ou 'f' para feminino): ");
	scanf(" %c", &genero);
	
	if(genero == 'm' || genero == 'M') {
		peso_ideal = (72.7 * altura) - 58;
		printf("\n Seu peso ideal é %.2f Kg", peso_ideal);
	} else if (genero == 'f' || genero == 'M'){
	  	peso_ideal = (62.1 * altura) - 44.7;
	  	printf("\n Seu peso ideal é %.2f Kg", peso_ideal);
	} else {
		printf("\n Opção de gênero inválida");
	}
	
}

