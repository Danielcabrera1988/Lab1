#include <stdio.h>
#define max 9

int main(int argc, char *argv[]) {
	
	int a[max] = {0,4,78,5,32,9,77,1,23};
	int n, i, j;
	printf("Operacion de eliminacion de un arreglo desordenado sin elementos repetidos\n");
	printf("Ingresar elemento a eliminar: ");
	scanf("%d", &n);
	
	//BUSCAR EL ELEMENTO EN EL ARREGLO
	
	i=0;
	while(n!=a[i] && i<=max){
		i++;
	}
	if(a[i] == n){
		//eliminar el elemnto del arreglo
		for(j = i; j < max ; j++){
			a[j] = a[j+1];
		}
		//mostrar el arreglo despues de la eliminacion
		for(i = 0; i < max ; i++){
			printf("Digito %d: %d\n",i, a[i]);
		}
	}
	else printf("\nEl elemento no esta en el arreglo");

	
	return 0;
}

