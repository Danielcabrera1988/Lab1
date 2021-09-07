#include <stdio.h>
#include <stdboo.h>
#define max 11

int main(int argc, char *argv[]) {
	
	int a[] = {5,4,10,8,2,11,9,1,5,11,1};
	int n, i;
	int flag = false;
	int aux=0;
	//int cont = 0;
	
	printf("*** Busqueda de un elemento de un arreglo desordenado con Busqueda Comun ***\n");
	printf("*** con elementos repetidos ***\n")
	printf("\nEl arreglo contiene los siguientes elementos\n");
	//se muestra el arreglo previamente definido
	for(i = 0; i < max ; i++){
		printf("Posicion %d: ** %d **\n",i,a[i]);
	}
	printf("\nIngrese un elemento a buscar dentro del arreglo: ");
	scanf("%d", &n);
	
	//algoritmo de busqueda que termina por 2 motivos
	//1: termina por que encontro el elemento buscado
	//2: termina por que recorrio todo el arreglo y no está el elemento
	//** tambien se agrega un contador para ver si el elemento esta en el arreglo
	//** y cuantas veces se encuentra dentro del arreglo (hay que modificar el flag)
	//** y la condicion del while
	i = 0;
	while(i < max && flag == false){
		
		if(n == a[i]){
			//cont++;
			flag = true;
			aux = i;
		}
		i++;
	}
	if(flag == true){
		printf("El elemento %d está dentro del arreglo en la posicion %d",n, aux);
	}
	else{
		printf("El elemento %d no está dentro del arreglo",n);	
	}
	
	return 0;
}

