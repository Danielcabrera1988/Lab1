#include <stdio.h>
int factorial(int n);

int main(int argc, char *argv[]) {
	
	int numero, fact;
	printf("Ingrese un numero para calcular su factorial: ");
	scanf("%d", &numero);
	fact = factorial(numero);
	
	printf("El factorial de %d es %d", numero, fact);
	
	return 0;
}

int factorial(int n){
	
	if (n<=1)
		return (1);
	else return (n*factorial(n-1));
}

