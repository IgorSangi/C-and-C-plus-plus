#include <stdio.h>
#include <stdlib.h>

int main () {
	short int opcao;
	float n1, n2;
	
	printf ("Escolha uma opcao: ");
	printf ("\n1 - Soma de 2 numeros. ");
	printf ("\n2 - Diferenca entre 2 numeros. ");
	printf ("\n3 - Produto entre 2 numeros. ");
	printf ("\n4 - Divisao entre 2 numeros. (Informe primeiro o numerador e depois o denominador.) \n");
	
	scanf ("%d", &opcao);
	
	printf ("\nInforme um numero: \n");
	scanf ("%f", &n1);
	
	printf ("\nInforme outro numero: \n");
	scanf ("%f", &n2);
	
	switch (opcao) {
		case 1 : printf ("\nSoma de dois numeros: %.2f", n1+n2); break;
		case 2 : 
			if (n1 > n2) {
				printf ("\nDiferenca entre 2 numeros: %.2f", n1-n2);
				}else{
					printf ("\nDiferenca entre 2 numeros: %.2f", n2-n1);
		}
		break;
		case 3 : printf ("\nProduto entre 2 numeros: %.2f", n1*n2); break;
		case 4 : 
			if (n2 != 0){
				printf ("\nDivisao entre 2 numeros: %.2f", n1/n2); break;
				}else{
					printf ("\nImpossivel dividir por zero!"); break;
		}
		default : printf ("\nOpcao invalida!");
	}
	return 0;
}
