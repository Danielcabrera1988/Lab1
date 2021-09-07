#include <stdio.h>

int main() {
	
	int a;
	printf("ingrese un numero: ");
	scanf("%d",&a);
	
	if (a>0 && (a%2==0)){
		a=3*a;
		printf("El resultado es %d", a);
	}
	else{
		printf("No se aplica condicion");
	}
	return 0;
}

