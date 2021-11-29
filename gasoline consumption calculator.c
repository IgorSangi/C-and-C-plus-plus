#include <stdio.h>
#include <stdlib.h>

//Declaração da função
float fcons (float km, float litro);

//Função principal
int main () {
	float km, litro, consumo;
	
	printf ("Informe a distancia percorrida em km: \n");
	scanf ("%f", &km);
	printf ("\nInforme a quantidade de litros de gasolina consumidos: \n");
	scanf ("%f", &litro);
	
	printf ("O consumo e de : %.2f km/l", fcons (km, litro));
	
	if (fcons (km, litro) < 8) {
		printf ("\nVenda o carro!");
	}
	if (fcons (km, litro) >= 8 && fcons (km, litro) <= 12) {
		printf ("\nEconomico!");
	}
	if (fcons (km, litro) > 12) {
		printf ("\nSuper Economico!");
	}

	return 0;
}

//Operação da função
float fcons (float km, float litro) {
	
	return km/litro;
}
