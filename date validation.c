#include <stdio.h>
#include <stdlib.h>

int main () {
	int ano, dia, mes;
	
	printf ("Informe um dia: \n");
	scanf ("%d", &dia);
	
	printf ("Informe um mes: \n");
	scanf ("%d", &mes);
	
	printf ("Informe um ano: \n");
	scanf ("%d", &ano);
	if ( mes >= 1 && mes <= 12 && mes != 2) {
		if  (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12) {
			if (dia >= 1 && dia <= 31) {
				printf ("Data valida!");
				}else{
					printf ("Data invalida!");
			}
		}else{
			if (dia>= 1 && dia <= 30) {
				printf ("Data valida!");
				}else{
					printf ("Data invalida!");
				}
			}
		}else{
			if (mes==2) {
				if (ano%4 == 0 && ano%100 != 0) {
					if (dia >= 1 && dia <= 29) {
						printf ("Data valida!");
						}else{
							printf ("Data invalida!");
						}
							}else{
								if (dia >= 1 && dia <= 28) {
									printf ("Data valida!");
									}else{
										printf ("Data invalida!");
									}
								}				
				}else{
					printf ("Data invalida!");
				}
			}
	
	return 0;
}
