#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int numero, i, fact = 1;
	
	printf("Ingrese un numero: ");
	scanf("%d",&numero);
	
	if(numero>0){
	for( i=1 ; i<=numero ; i++){
		fact *=i;}
		printf("El Factorial de %d es igual a %d",numero, fact);}
	else if (numero == 1)
		printf("El factorial de 1 es 1");
	else if (numero == 0)
		printf("El factorial de cero es uno por definición, por la propia definicón de factorial:...= n * (n-1)");
	return 0;
}

