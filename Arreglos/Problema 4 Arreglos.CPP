#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int a[] = {10,9,8,7,6,5,4,3,2,1};
	int b[] = {20,19,18,17,16,15,14,13,12,11};
	int c[20], i;
	
	printf("El vector A es: ");
	for(i = 0; i < 10 ; i++){
		printf(" %d", a[i]);
	}
	printf("\nEl vector B es: ");
	for(i = 0; i < 10 ; i++){
		printf(" %d", b[i]);
	}
	for(i = 0; i < 10 ; i++){
		c[i] = b[i];
	}
	for(i = 10; i < 20 ; i++){
		c[i] = a[i-10];
	}
	printf("\nEl nuevo vector C es: ");
	for(i = 0; i < 20 ; i++){
		printf(" %d", c[i]);
	}
	printf("\nEl vector ordenado de menor a mayor es: ");
	for(i = 19; i >= 0 ; i--){
		printf(" %d", c[i]);
	}	
	return 0;
}
