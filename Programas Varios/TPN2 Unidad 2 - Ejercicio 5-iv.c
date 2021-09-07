#include <stdio.h>
#define Maximo  200
#define Minimo  100
int main() {
	
	int a;
	printf("Ingrese un numero: ");
	scanf("%d",&a);
	
	if(a>=Minimo && a<=Maximo){
		printf("El numero ingresado esta dentro de los limites");
	}
	else{
		if(a<Minimo){
			printf("El numero es menor que el liminte Minimo");
		}
		else{
			printf("el numero es mayor que el limite Maximo");	
		}
	}
	return 0;
}
