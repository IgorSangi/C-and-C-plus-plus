#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	int hora_entrada, hora_saida, hora_pagar;
	float valor;
	
	printf ("Informe o horario de entrada no estacionamento: ");
	scanf ("%d", &hora_entrada);
	
	printf ("Informe o horario de saida do estacionamento: ");
	scanf ("%d", &hora_saida);
	
	hora_pagar = (hora_saida - hora_entrada) / 100;
	
	if (hora_pagar > 0 && hora_pagar <= 1) {
		printf ("Hora a pagar: R$1.00");
		}else{
			if (hora_pagar > 1 && hora_pagar <= 2) {
				printf ("Hora a pagar: R$2.00");
				}else{
					if (hora_pagar > 2 && hora_pagar <= 3) {
						valor = 3 * 1.40;
						printf ("Hora a pagar: R$ %.2f", valor);
						}else{
							if (hora_pagar > 3 && hora_pagar <= 4) {
								valor = 4 * 1.40;
								printf ("Hora a pagar: R$ %.2f", valor);
								}else{
									if (hora_pagar > 4 && hora_pagar <= 5) {
										valor = 5 * 2;
										printf ("Hora a pagar: R$ %.2f", valor);
									}else{
										valor = ceil(hora_pagar) * 2;
										printf ("Hora a pagar: R$ %.2f", valor);
							}
						}
				}
		}
	}
	return 0;
}
