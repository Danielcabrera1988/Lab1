#include <stdio.h>

int primo (int a);

int main(int argc, char *argv[]) {
	
	int numero = 1, res, prim = 0, noprim = 0;
	
	printf("Ingrese numero para comprobar si son o no PRIMOS\n");
	printf("El numero '0' termina la carga de numeros\n");
	do{
		printf("Ingrese un numero: ");
		scanf("%d", &numero);
		if(numero!=0 && numero > 0){
			res = primo(numero);
			if(res==1){
				prim++;
			}
			else{
				noprim++;
			}
		}	
	}
	while(numero != 0);
	printf("\nLa cantidad de Nº Primos ingresados son: %d", prim);
	printf("\n---------------------------------------------");
	printf("\nLa cantidad de N° No Primos ingresados son: %d", noprim);
	return 0;
}

int primo (int a){
	int acum = 0;
	
	for(int i=1; i <= a ; i++){
		if(a % i == 0){
			acum++;
		}	
	}
	if(acum == 2)
		return 1;
	else return 0;
}
