#include <stdio.h>
#include <stdlib.h>

int main () {
	int i, j, n, m, acm;
	
	m = 1;
	acm = 1;
	
	printf ("Informe o valor de n: ");
	scanf ("%d", &n);
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf ("%d\t", acm);
			acm++;
		}
		m++;
		printf ("\n");
	}
	return 0;
}
