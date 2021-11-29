#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Pilha.hpp"

using namespace std;

int main () {
	
	short int op;
	int num;
	
	criar_pilha ();
	
	do {
		cout << "---------- MENU DE OPCOES ----------" << endl;
		cout << "1 - Inserir um novo elemento na Pilha" << endl;
        cout << "2 - Remover um elemento da Pilha" << endl;
        cout << "3 - Exibir todos os valores da Pilha" << endl;
        cout << "4 - Exibir o valor da base da Pilha" << endl;
        cout << "5 - Inverter a posição dos elementos na Pilha" << endl;
        cout << "6 - Sair" << endl << endl;
        
        cout << "Informe a opcao desejada: " << endl;
        cin >> op;
        
        switch (op) {
        	case 1 :
        		
        		cout << "Informe um dado inteiro: ";
                cin >> num;
                
                inserir_elemento (num);
                break;
                
        	case 2 :
        		
        		remover_elemento ();
                break;
        		
        	case 3 :
        		
        		cout << "Dados da Pilha: " << endl;
        		
                exibir_tds ();
                break;
        		
        	case 4 :
        		
        		if(pilha_vazia () == 1){
        			
                    cout << "A Pilha esta vazia!" << endl << endl;
                    
                }else{
                	
                    cout << "Dado que esta no topo da Pilha: " << exibir_base () << endl;
                    
                }
                break;
        		
        	case 5 :
        		
        		cout << endl << "Dados da Pilha invertidos: " << endl;
        		
                inverter_elemento ();
                break;
        		
        	case 6 :
        		
        		exit(0);
                break;
        	
        	default :
        		cout << "Opcao invalida!" << endl;
		}
		
		system("PAUSE");
        system("CLS");
    
    }while(op != 6);
	
	return 0;
}
