#include <stdio.h>

int cuadrado (int a);

int main(int argc, char *argv[]) {
	
	int i,resultado;
	for (i=0;i<10;i++)
	{
		resultado = cuadrado (i);
		printf("Cuadrado de %d: %d\n",i,resultado);
	}
	return 0;
}

int cuadrado(int a){
	return (a*a);

}
