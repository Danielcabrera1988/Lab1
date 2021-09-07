#include <stdio.h>

int main() {
	int t, n, c;
	
	printf("Ingrese la tabla a calcular: ");
	scanf("%i", &t);
	
	printf("Ingrese la cantidad de números a calcular: ");
	scanf("%i", &c);
	
	for(n=1; n<=c; n++){
		printf("%i\n", (n*t));
	}
	
	return 0;
}

