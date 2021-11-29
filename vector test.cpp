#include <iostream>
#include <iomanip>

using namespace std;

int fmenor (int *p, int *vet [5] );

int main () {
	int *vet [5];
	short int i;
	
	cout << "Informe os valores: ";
	
	for (i =0; i < 5; i++) {
	cin >> * (vet + i);
	}
	cout << "O menor valor é: " << fmenor << endl;
	
	return 0;
}

int fmenor (int *p, int *vet [5]) {
	
	if (vet [0] < vet [1] || vet [0] < vet [2] || vet [0] < vet [3] || vet [0] < vet [4]) {
		p = vet [0];
			
	}else {
		if (vet [1] < vet [0] || vet [1] < vet [2] || vet [1] < vet [3] || vet [1] < vet [4]) {
			p = vet [1];
			
		}else {
			if (vet [2] < vet [0] || vet [2] < vet [1] || vet [2] < vet [3] || vet [2] < vet [4]) {
				p = vet [2];
				
			}else {
				if (vet [3] < vet [1] || vet [3] < vet [2] || vet [3] < vet [0] || vet [3] < vet [4]) {
					p = vet [3];
					
				}else {
					p = vet [4];
				}
			}
		}
	}
	
	return *p;
}
