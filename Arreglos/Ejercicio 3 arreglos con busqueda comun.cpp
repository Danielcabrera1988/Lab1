#include <stdio.h>
#define max 11
int main(int argc, char *argv[]) {
	
	int a[] = {1,4,6,6,8,10,11,11,15,16,16};
	int n, i;
	int cont = 0;
	
	printf("*** Busqueda de un elemento dentro de un arreglo con elementos repetidos ***\n");
	printf("*** Y contar cuantos elementos repetidos existe si el elemento buscado se encuentra dentro del arreglo ***\n");
	printf("\nEl arreglo contiene los siguientes elementos\n");
	//se muestra el arreglo previamente definido
	for(i = 0; i < max ; i++){
		printf("Posicion %d: ** %d **\n",i,a[i]);
	}
	printf("\nIngrese un elemento a buscar dentro del arreglo: ");
	scanf("%d", &n);
	//algoritmo de busqueda mas suma de las veces repetidas
	i = 0;
	while(i < max){
		
		if(n == a[i]){
			cont++;
		}
		i++;
	}
	if(cont > 0){
		printf("El elemento %d está dentro del arreglo %d veces repetidas",n,cont);
	}
	else{
		printf("El elemento %d no está dentro del arreglo",n);	
	}
	return 0;
}

