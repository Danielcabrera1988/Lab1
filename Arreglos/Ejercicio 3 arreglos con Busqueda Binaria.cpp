#include <stdio.h>
#define max 11
int main(int argc, char *argv[]) {
	
	int a[] = {1,4,6,6,8,10,11,11,15,16,16};
	int n, i, mitad;
	int inicio = 0;
	int ultimo = 10;
	
	printf("*** Busqueda de un elemento dentro de un arreglo con elementos repetidos ***\n");
	printf("\nEl arreglo contiene los siguientes elementos\n");
	for(i = 0; i < max ; i++){
		printf("Posicion %d: ** %d **\n",i,a[i]);
	}
	printf("\nIngrese un elemento a buscar dentro del arreglo: ");
	scanf("%d", &n);
	
	while (inicio <= ultimo){
		mitad = (inicio + ultimo)/2;
		if(n == a[mitad]){
			printf("Elemento %d encontrado en la posicion %d",n ,mitad);
			break;
		}
		else if(n < a[mitad]){
			ultimo = mitad - 1;
		}
		else inicio = mitad + 1;
	}
	if(inicio > ultimo){
		printf("Elemento %d no encontrado en el arreglo",n);
	}
	return 0;
}

