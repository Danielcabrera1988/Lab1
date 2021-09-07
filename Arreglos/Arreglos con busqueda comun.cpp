#include <stdio.h>
#include <stdbool.h>
#define max 8
int main(int argc, char *argv[]) {
	
	int a[] = {1,4,6,8,10,11,15,16};
	int n, i;
	int flag = false;
	int aux=0;
	
	printf("*** Busqueda de un elemento con Busqueda Comun ***\n");
	printf("\nEl arreglo contiene los siguientes elementos\n");
	for(i = 0; i < max ; i++){
		printf("Posicion %d: ** %d **\n",i,a[i]);
	}
	printf("\nIngrese un elemento a buscar dentro del arreglo: ");
	scanf("%d", &n);
	
	i = 0;
	while(i < max && flag == false){
		
		if(n == a[i]){
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

