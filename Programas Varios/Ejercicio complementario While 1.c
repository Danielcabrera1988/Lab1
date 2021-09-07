#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int a,b, cont, acum;
	printf("Ingrese primer numero a multiplicar: ");
	scanf("%d",&a);
	printf("Ingrese segundo numero a multiplicar: ");
	scanf("%d",&b);
	cont=b;
	acum=0;
	while(cont>0)
	{
		acum+=a;
		cont--;
	}
	printf("El resultado obtenido es: %d", acum);
	
	return 0;
}
