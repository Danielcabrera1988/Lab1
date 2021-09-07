#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
	
	int arreglo[] = {11,1,98,23,76,34,66,5,88,32};
	int i, maximo, minimo;
	bool flag = false;
	
	printf("==========================================================================\n");
	printf("Encuentra dentro de un arreglo desordenado el Elemento Maximo y el Minimo\n");
	printf("==========================================================================\n");
	
	printf("El arreglo contiene los siguientes elementos\n");
	for(i = 0; i < 10; i++){
		printf("Posicion %d: %d\n",i,arreglo[i]);
	}
	//algoritmo de busqueda del mayor y el menor elemento del arreglo
	for(i = 0; i < 10 ; i++){
		if(flag == false){
			maximo = arreglo[i];
			minimo = arreglo[i];
			flag = true;
		}
		if(arreglo[i] > maximo){
			maximo = arreglo[i];
		}
		else if(arreglo[i] < minimo){
			minimo = arreglo[i];
		}
	}
	
	printf("El elemento Maximo es %d\n", maximo);
	printf("El elemento Minimo es %d", minimo);
	
	return 0;
}

