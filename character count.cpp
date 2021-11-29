#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int fquant ( int quantidade, char *ptr ); 

int main () {
	char vet [5], *ptr;
	ptr = NULL;
	
	cout << "Informe os caracteres para preenchimento da string : ";
	cin >> vet [5];
	
	ptr = &vet [5];
	
	cout << fquant (quantidade) << endl;
	
	return 0;
}

int fquant ( int quantidade, char *ptr ) {
	
	quantidade = strlen (*ptr);
	
	return quantidade;
}
