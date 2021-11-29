#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;

void fpreenche (float *matriz );
void ftransf (float *matriz, float **matriz_t );

int main () {
	float *matriz [2][5], **matriz_t [2][5];
	
	cout << "Matriz estatica: " << fpreenche (matriz);
	cout << "Matriz dinamica: " << ftransf (matriz), *matriz_t);
	
	return 0;
}

void fpreenche (float *matriz [2] [5]) {
	int i, j;
	
	for (i = 0; i < 2; i ++) {
		matriz [i] = (float *) calloc(2, sizeof(float));
		
		if (matriz[i] == NULL){
			cout << "Memoria insuficiente!";
			system ("PAUSE");
			exit (1);
		}
		
		for (j = 0; j < 5; j++) {
			matriz [j] = (float *) calloc(5, sizeof(float));
			
			if (matriz[j] == NULL){
				cout << "Memoria insuficiente!";
				system ("PAUSE");
				exit (1);
			}
		}
	}
	for(i=0; i<2; i++){
		for(j=0; j<5; j++){
			cin >> matriz[i][j];
		}
	}
	
	for(i=0; i<2; i++){
		for(j=0; j<5; j++){
			cout << *(*(matriz+i)+j) << " ";
		}
		
		cout << endl;
	}
	
	for(i=0; i<2; i++){
		free(matriz[i]);
		for(j=0; j<5; j++){
			free(matriz[j]);
		}
		
	}
	free(matriz [2] [5]);
	
}

void ftransf (float *matriz [2] [5], float **matriz_t [2] [5]) {
	int m, n;
	
	for (m = 0; m < 2; m++) {
		matriz_t [m] = (float *) calloc(2, sizeof(float));
		
		if (matriz_t [m] == NULL){
			cout << "Memoria insuficiente!";
			system ("PAUSE");
			exit (1);
		}
		
		for (n = 0; n < 5; n++) {
			matriz_t [n] = (float *) calloc(5, sizeof(float));
			
			if (matriz_t [n] == NULL){
				cout << "Memoria insuficiente!";
				system ("PAUSE");
				exit (1);
			} 
		}
	}
	
	for(m=0; m<2; m++){
		for(n=0; n<5; n++){
			cin >> *matriz_t [m][n];
		}
	}
	
	for(m=0; m<2; m++){
		for(n=0; n<5; n++){
			**(matriz_t [m] [n] ) += (2* *(matriz [m] [n]));
			cout << *(*(matriz_t+m)+n) << " ";
		}
		
		cout << endl;
	}
	
	for(m=0; m<2; m++){
		free(matriz_t[m]);
		for(n=0; n<5; n++){
			free(matriz_t[n]);
		}
		
	}
	free(matriz_t [2] [5]);

}
