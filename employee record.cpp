//DECLARAÇÃO DE BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//DECLARAÇÃO DE STRUCTS
typedef struct tipo_cadastro{

   char nome[40];
   short int idade;
   float salario;

}tcadastro;

//DECLARAÇÃO DE PROTÓTIPOS
int main () {
	int valor, i;
	tcadastro registro[3];
	
	//armazenamento de dados
	puts ("Entrada de dados:\n");
	for(i=0;1<3;i++){
	
        puts("Digite o nome:");
	    fgets(registro[i].nome,40, stdin);
    	puts("\nDigite a idade:");
    	scanf("%hd", &registro[i].idade);
    	puts("\nDigite o salario: R$");
        scanf("%f", &registro[i].salario);
    }

	
	//saida de dados
	for(i=0;1<3;i++){
	puts("\nSaida de dados:");
	printf("\nnome: %s",registro[i].nome);
	printf("\nidade: %hd", registro[i].idade);
	printf("\nsalario: %.2f",registro[i].salario);
	puts("---------------------------------------");
    }


	return 0;
} 
