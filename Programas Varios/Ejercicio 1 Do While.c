/*Escriba un programa que muestre los numecos comprendidos entre 1 y 3 en forma
ascendente usando la estructura Do while*/
#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i=1;
	printf("muestre los numecos comprendidos entre 1 y 3\n");
	do{
		printf("i = %i\n",i);
		i++;
	}
	while(i<=3);
	
	return 0;
}

