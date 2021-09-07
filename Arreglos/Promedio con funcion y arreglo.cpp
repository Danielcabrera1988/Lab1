#include <stdio.h>

float promedio(int a[], int n);

int main(int argc, char *argv[]) {
	int a[3];
	int resultado;
	
	printf("*** Programa para calcular el promedio de 3 notas ***");
	for(int i = 0; i < 3; i++){
		printf("\nIngrese las notas: ");
		scanf("%d", &a[i]);
	}
	resultado = promedio(a, 3);
	printf("\nEl promedio de las notas ingresadas es %d", resultado);
	
	return 0;
}

float promedio(int a[], int n){
	
	int suma = 0;
	float prom = 0;
	for(int i = 0; i < n; i++){
		suma+=a[i];
	}
	prom = suma/n;
	return prom;
}
