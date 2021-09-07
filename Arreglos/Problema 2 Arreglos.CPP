#include <stdio.h>

int main(int argc, char *argv[]) {
	
	
	int arreglo[10];
	int multiplo[10] = {'\0'};
	int resto[10] = {'\0'};
	int r = 0;
	int m = 0;
	int p = 0;
	int i, numero;
	
	while(p<10){//comprobacion de N entero positivo
	printf("Ingrese valores enteros positivos: ");
	scanf("%d", &numero);
	if(numero>0){
		arreglo[p] = numero;//carga de valores EP en las posiciones de 'p'
		p++;//aumento de posicion para rellenar el arreglo si cumple la condicion
	}
	else printf("Valor Incorrecto\n");	
	}	
	
	for(i=0; i<10 ; i++){//comprobacion de multiplo de 3
		if(arreglo[i] % 3 == 0){
			multiplo[i] = arreglo[i];//guardo los multiplos
			m++;
		}
		else {
			resto[i] = arreglo[i];//guardo el resto que no son multiplos
			r++;
		}
	}
	printf("La cantidad de MULTIPLOS ingresados son %d", m);
	printf("\nLa cantidad de NUMEROS RESTANTES son %d\n", r);
	
	//IMPRIMO LOS VALORES DE CADA ARRAY
	printf("Los N° MULTIPLOS son: ");	
	for(i=0 ; i<10 ; i++){
		if(multiplo[i] !=0 ){
		printf("--%d", multiplo[i]);
		}
	}
	if(m==0){
		printf("Arreglo 'MULTIPLO' Vacio");
	}
	printf("\nLos N° RESTANTES son: ");
	for(i=0 ; i<10 ; i++){
		if(resto[i] != 0){
			printf("--%d", resto[i]);
		}
	}
	
	if(r==0){
		printf("Arreglo 'RESTO' Vacio");
	}
	return 0;
}
