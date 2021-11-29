#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main ()
{
	int num, i;
	float media, soma, notas, *p;
	
	cout << "Informe a quantidade de alunos: ";
	cin >> num;
	
	p = (float *) calloc (num, sizeof(float));
	
	if (p==NULL)
	{
		cout << "Memoria insuficiente!";
		system ("PAUSE");
		exit(1);
	}
	
	for (i = 0; i < num; i++)
	{
		cout << "Digite a nota do aluno " << i+1 << " : ";
		cin >> *(p+i);	
	}
	
	for (i  =0; i < num; i++)
	{
		soma = soma + *(p+i);
	}
	
	media = float (soma/num) ;
	 
	cout << "A media das notas e: " << fixed << setprecision (1) << media << endl;
	 
	 return 0;
}
