#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Pilha.hpp"

using namespace std;

tpilha *topo;

void criar_pilha () {
	topo = NULL;
}

void criar_pilha_aux (tpilha *pilha_aux, int tmp -> num) {
	
	tmp = NULL;
	
	tpilha *novo;
    
    novo = (tpilha*) malloc( sizeof (tpilha));
    
    if (pilha_cheia (novo) == 1) {
    	
        cout << endl << "O dado nao pode ser inserido na Pilha!" << endl;
        
    }else {
            novo -> dado = num;
            novo -> prox = NULL;
        
            if(pilha_vazia () == 0) {
                novo -> prox = topo;
            	topo = novo;
            	cout << endl << "O dado foi inserido na Pilha com sucesso!" << endl;
            }
         }
}

int pilha_vazia () {
	
    return (topo == NULL);
}

int pilha_cheia (tpilha *novo) {
	
    return(novo == NULL);
}

void inserir_elemento (int num) {
	
	tpilha *novo;
    
    novo = (tpilha*) malloc( sizeof (tpilha));
    
    if (pilha_cheia (novo) == 1) {
    	
        cout << endl << "O dado nao pode ser inserido na Pilha!" << endl;
        
    }else {
            novo -> dado = num;
            novo -> prox = NULL;
        
            if(pilha_vazia () == 0) {
                novo -> prox = topo;
            	topo = novo;
            	cout << endl << "O dado foi inserido na Pilha com sucesso!" << endl;
            }
         }
}

void remover_elemento () {

    if(pilha_vazia () == 1) {
    	
        cout << endl << "A Pilha esta vazia!" << endl << endl;
        
    }else {

            tpilha *aux;
        
            aux = topo;
            topo = topo -> prox;
            free (aux);
            cout << endl << "Dado topo removido com sucesso!" << endl << endl;
          }
}

void exibir_tds () {
	
	if(pilha_vazia () == 1) {
		
        cout << endl << "A Pilha esta vazia!" << endl << endl;
        
    }else {

            tpilha *aux;
            aux = topo;
        
            while(aux != NULL) {
                cout << aux -> dado << endl;
                aux = aux -> prox;
            }
         }
	
}

void exibir_base () {
	
	return (topo -> dado);
	
}

void inverter_elemento () {
	
	while(tmp != NULL) {
	
        criar_pilha_aux (pilha_aux, tmp -> num);
        
        lixo = tmp;
        
        tmp = tmp -> prox;
        
        free (lixo);
    }

    novo -> prox = pilha_aux -> prox;
    
    free (pilha_aux);
	
}
