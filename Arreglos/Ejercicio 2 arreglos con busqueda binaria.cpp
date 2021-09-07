#include <stdio.h>
#define max 8
int main(int argc, char *argv[]) {
	
	int a[] = {1,4,6,8,10,11,15,16};
	int n, i;
	int inicio = 0;
	int ultimo = max - 1;
	int mitad = 0;
	
	printf("*** Busqueda de un elemento con Busqueda Binaria ***\n");
	printf("\nEl arreglo contiene los siguientes elementos\n");
	for(i = 0; i < max ; i++){
		printf("Posicion %d: ** %d **\n",i,a[i]);
	}
	printf("\nIngrese un elemento a buscar dentro del arreglo: ");
	scanf("%d", &n);
	
	while (inicio <= ultimo){
		mitad = (inicio + ultimo)/2;
		if(n == a[mitad]){
			printf("\nElemento %d encontrado en la posicion %d",n, mitad);
			break;
		}
		else if (n < a[mitad]){
			ultimo = mitad - 1;
		}
		else inicio = mitad + 1;
	}
	if(inicio > ultimo){
		printf("El elemento %d no se encuentra dentro del arreglo",n);
	}	
	return 0;
}

