#include <stdio.h>
#include <math.h>
int main() {
	
	int a;
	printf("Ingrese un valor: ");
	scanf("%d",&a);
	
	if (a>0){
		a = pow(a,2);
		printf("El resultado es %d: ",a);
	}
	else {
		printf("el valor es igual o menor a cero: ");
	}
	return 0;
}

