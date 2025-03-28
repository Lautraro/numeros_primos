#include <stdio.h>

int main() {
	
	int n,primo,j;
	
	printf ("Ingrese un número: ");
	scanf ("%d", &n);
	
	printf("Números primos del 1 al %d:\n", n);
	
	for (int i = 1; i <= n; i++) {
		primo = 1;
		if (i < 2) {
			primo = 0;
		} else {
			for (j = 2; j * j <= i; j++) {
				if (i % j == 0) {
					primo = 0;
					break;
				}
			}
		}
		if (primo) {
			printf("%d ", i);
		}
	}
	
	printf("\n");
	

	
	return 0;
}

