#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define size 5

typedef struct tipo_data {
	short int dia, mes, ano;

}tdata;

typedef struct tipo_horario {
	short int hora, min;
	
}thorario;

typedef struct tipo_comp {
	tdata data;
	char comp [50];	
	thorario horario;
	
}tcomp;

int main () {
	tcomp compr [size];
	short int i = 0, j, menu;
	char opcao;
	
	do {
		
		puts ("\nAGENDA DE COMPROMISSOS\n");
	
		puts ("MENU DE OPCOES: \n");
		puts ("Escolha uma opcao: ");
		puts ("1 - Cadastro");
		puts ("2 - Visualizacao");
		scanf ("%hd", &menu);
		
		switch (menu) {
			case 1 : 
				printf ("Horario do compromisso: (ex.: xx:xx) ");
				scanf ("%hd:%hd", &compr[i].horario.hora, &compr[i].horario.min);
		
				printf ("Data do compromisso: (ex.: xx/xx/xxxx) ");
				scanf ("%hd/%hd/%hd", &compr[i].data.dia, &compr[i].data.mes, &compr[i].data.ano);
		
				printf ("Descricao do compromisso: ");
				fflush (stdin);
				fgets (compr[i].comp, 50, stdin);
			
				i++;
				printf ("Deseja retornar ao menu? (S-Sim ou N-Não): ");
				fflush (stdin);
				scanf ("%c", &opcao);
		
				if (i == size ) {	
					puts ("Quantidade máxima de cadastros atingido!\n\n");
					opcao = 'N';
				}
				break;
			case 2 :
				printf ("%hd:%hd - %hd/%hd/%hd - %s", compr[i].horario.hora, compr[i].horario.min, compr[i].data.dia, compr[i].data.mes, compr[i].data.ano, compr[i].comp);
				printf ("Deseja retornar ao menu? (S-Sim ou N-Nao): ");
				fflush (stdin);
				scanf ("%c", &opcao);
				break;
			default : 
				printf ("Opcao invalida!\n");
				printf ("Deseja retornar ao menu? (S-Sim ou N-Nao): ");
				fflush (stdin);
				scanf ("%c", &opcao);
		}	
	}while (toupper (opcao) != 'N');
	
	puts ("\n------- AGENDA FINALIZADA -------\n");
	
	return 0;
}
	

