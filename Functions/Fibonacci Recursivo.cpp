#include <stdio.h>

int fibonacci (int a);

int main(int argc, char *argv[]) {
	
	int numero;
	
	
	printf("Ingrese el numero para el conteo Fibonacci: ");
	scanf("%d", &numero);
	fibonacci(numero);
	
	printf("Los elementos son\n");
	for(int i=0 ; i<numero ; i++){
	printf(" %d ", fibonacci(i));
	}	
	return 0;
}

int fibonacci (int a){
	
	if(a == 0 || a == 1)
		return(a);
	else return (fibonacci (a - 1) + fibonacci(a - 2));
}
