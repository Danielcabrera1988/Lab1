#include <stdio.h>
#include <stdbool.h>
int main(int argc, char *argv[]) {
	
	int a[] = {5,4,10,8,2,11,9,1};
	int n, i, pos = 0, flag = false;
	
	printf("** Busqueda en arreglo desordenado sin elementos repetidos **\n");
	printf("El arreglo contiene los siguientes elementos\n");
	//se muestra el arreglo previamente definido
	for(i = 0; i < 8;i++){
		printf(" Posicion %d: ** %d ** \n",i,a[i]);
	}
	printf("\nIngrese el elemento que desea buscar: ");
	scanf("%d", &n);
	
	//algoritmo de busqueda que termina por dos motivos
	//1: termina si encuentra el elemento buscado
	//2: si recorrio todo el arreglo y no encontro el elemento
	i=0;
	while(i<8 && flag == false){
		if(n == a[i]){
			flag = true;
			pos = i;
		}
		i++;
	}
	if(flag == true){
		printf("\nEl elemento %d se encontra dentro del arreglo en la posicion %d",n, pos);
	}
	else printf("\nEl elemento %d no se encontra dentro del arreglo",n);
	return 0;
}

