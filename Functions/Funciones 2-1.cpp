#include <stdio.h>

int suma(int a, int b);

int main(int argc, char *argv[]) {
	
	int x, y, res;
	
	printf("Ingrese 2 valores para suamr");
	printf("Ingrese un valor: ");
	scanf("%d", &x);
	printf("Ingrese otro valor: ");
	scanf("%d", &y);
	
	res =  suma(x, y);
	
	printf("El valor de la suma es %d: ", res);
	
	return 0;
}

int suma(int a, int b){
	return (a+b);
}

