#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tipo_empresa {
	int codigo;
	char nome [101], sexo [1];
	float salario;
}tempresa;

int main () {
	tempresa cadastro, resposta;
	short int cod;
	int cont_m = 0, cont_f = 0, cont_s = 0;
	char opcao;
	float valor = 0, media_s;
	FILE *fptr;
	
	printf ("MENU DE OPCOES\n");
	printf ("Informe a opcao desejada:\n");
	printf ("1 - Cadastrar funcionario\n");
	printf ("2 - Exibir todos os funcionarios\n");
	printf ("3 - Contar quantos funcionarios do sexo masculino e feminino há cadastrados\n");
	printf ("4 - Calcular a média salarial dos funcionarios cadastrados\n");
	
	scanf ("%hd", &cod);
	
	switch (cod) {
		case 1: 
			do {
				printf ("Codigo do Funcionario:\n");
				scanf ("%d", &cadastro.codigo);
				fflush (stdin);
				printf ("Nome do Funcionario:\n");
				fgets (cadastro.nome, 101, stdin);
				fflush (stdin);
				printf ("Salario do Funcionario:\n");
				scanf ("%f", &cadastro.salario);
				fflush (stdin);
				printf ("Sexo do Funcionario: M - Masculino ou F - Feminino\n");
				scanf ("%c", &cadastro.sexo);
				
				toupper (cadastro.sexo);
				
				if (cadastro.sexo == 'M') {
					cont_m++;
				}else {
					cont_f++;
				}
				
				cont_s++;
				valor = valor + cadastro.salario;
				printf ("Deseja continuar cadastrando? S - Sim ou N - Nao\n");
				scanf ("%c", opcao);
				toupper (opcao);
			}while (opcao != 'N'); 
			
			fptr = fopen ("dados.bin", "w+b");
			
			fwrite (&cadastro, sizeof (tempresa), 1, fptr);
			puts ("Dados gravados com sucesso!\n\n");
			rewind (fptr);
			break;
			
		case 2:
			fread (&cadastro, sizeof (tempresa), 1, fptr);
			puts ("\n\n");
			
			puts ("FUNCIONARIOS CADASTRADOS: ");
			printf ("Codigo do funcionario: %d\n", cadastro.codigo);
			printf ("Nome do funcionario: %s", cadastro.nome);
			printf ("Sexo do funcionario: %c", cadastro.sexo);
			printf ("Salario do funcionario: %.2f\n\n", cadastro.salario);
			break;
	
		case 3:
			printf ("Funcionarios do sexo masculino: %d", cont_m);
			printf ("Funcionarios do sexo feminino: %d", cont_f);
			break;
		
		case 4:
			media_s = valor/cont_s;
			printf ("Media salarial e: %.2f", media_s);
			
	}

	fclose (fptr);
	
	printf ("Programa finalizado!");
	
	printf ("________________________");
	
	return 0;
}
