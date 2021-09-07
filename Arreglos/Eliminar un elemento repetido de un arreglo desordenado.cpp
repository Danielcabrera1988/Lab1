#include <stdio.h>
#define max 9
int main(int argc, char *argv[]) {
	
	int a[max] = {0,4,78,0,32,9,77,4,23};
	int n, i, j, ult, c;
	
	printf("Operacion de eliminacion en un arreglo desordenado con elementos repetidos");
	ult = max;
	printf("\nArreglo original\n");
	for(j = 0; j < ult; j++){
		printf("Posicion %d: %d\n",j , a[j]);
	}
	
	printf("Ingresar elemento a eliminar: ");
	scanf("%d", &n);
	i = 0;
	c = 0;
	while(i <= ult){
		if(a[i] == n){
			//eliminar el elemento n de arreglo
			for (j = i; j < ult; j++){
				a[j] = a[j+1];
			}
			//Mostrar el arreglo despues de la eliminacion
			c++;
			printf("Eliminacion nro %d\n",c);
			ult-=1;
			for(j = 0; j < ult; j++){
				printf(" Posicion %d: %d\n",j , a[j]);
			}
		}
		i++;
	}
	if(ult == max){
		printf("\nElemento no encontrado en el arreglo");
	}
	
	return 0;
}

