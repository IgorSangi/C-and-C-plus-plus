#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE * abertura_arq ();
void  teste_abertura_arq (FILE *ptr);
void  gravacao_arq (FILE *ptr, char paragrafo[]);
void  teste_gravacao_arq (FILE *ptr);
void  leitura_arq (FILE *ptr);
void  teste_leitura_arq (FILE *ptr);

int main(){
	
	FILE *fptr;
	char par [300];
	
	printf ("Informe o paragrafo que deseja: \n");
	fgets (par, 300, stdin);
	
	fptr = abertura_arq ();
	
	teste_abertura_arq (fptr);
	

	gravacao_arq (fptr, par);
	
	rewind (fptr);
	

	leitura_arq (fptr);
	

	fclose (fptr);
	
	return 0;
}

FILE *abertura_arq () {
	FILE *ptr;

	ptr = fopen("dados.txt", "a+");
	
	teste_abertura_arq (ptr);
	
	
	return ptr;
}

void teste_abertura_arq (FILE *ptr) {
	
	if(ptr == NULL) {
		printf("ERRO! Nao foi possivel abrir o arquivo!\n\n");
		system("PAUSE");
		exit(1);
	}
}

void gravacao_arq(FILE * ptr, char paragrafo[]) {
	
	short int i, tam;
	
	tam = strlen (paragrafo);
	
	for(i=0;i<=tam;i++)
	{
		fputc(paragrafo[i], ptr);
	}
	fputs("\t\t", ptr);
	
	teste_gravacao_arq (ptr);
	
}

void  teste_gravacao_arq (FILE *ptr) {
	if(ptr == NULL) {
		printf("ERRO! Nao foi possivel abrir o arquivo!\n\n");
		system("PAUSE");
		exit(1);
	}
	
}

void  leitura_arq (FILE *ptr) {
	char par [300];
	
	fscanf (ptr, "%s", &par);

	printf ("\n", ptr);
	
	teste_leitura_arq (ptr);
}

void  teste_leitura_arq (FILE *ptr) {
	if(ptr == NULL) {
		printf("ERRO! Nao foi possivel abrir o arquivo!\n\n");
		system("PAUSE");
		exit(1);
	}
}

