#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int a [] = {0,4,78,5,32};
	int n, t, cant=0, c, num;
	n = sizeof(a);
	printf("Tamaño en bytes: %d\n",n);
	
	t = sizeof(a[0]);
	printf("Tamaño del primer elemento %d\n",t);
	
	cant = n/t;
	printf("Cantidad de posiciones ocupadas del arreglo: %d\n",cant);
	printf("ingrese un elemento a insertar: ");
	scanf("%d", &num);
	a[cant] = num;
	for(c = 0; c <= cant ; c++){
		printf("Posicion %d : %d\n",c,a[c]);
	}	
	return 0;
}

