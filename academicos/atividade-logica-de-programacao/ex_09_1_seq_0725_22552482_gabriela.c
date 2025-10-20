#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n===================================\n");
	printf("       Volume de uma esfera             ");
	printf("\n===================================\n");
	
	float r, volume;
	
	printf("Digite o raio da esfera:\n");
	scanf("%f", &r);
	
	volume = (4.0/3.0) * 3.14 * r * r * r;
	
	printf("Resultado: %.2f\n", volume);
	 
}
