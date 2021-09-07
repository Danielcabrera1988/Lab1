#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int arreglo [10];
	int i, aux1, aux2;
	int pos1, pos2;
	
	printf("** Intercambiamos valores de 2 posiciones **\n");
	for(i=0; i<10 ; i++){
		printf("Ingrese un valor para la posicion %d del arreglo: ",i);
		scanf("%d", &arreglo[i]);
	}
	
	printf("\n ¡Ahora viene lo interesante! :D\n");
	printf("Ingrese las posiciones que desea cambiar: ");
	scanf("%d", &pos1);
	printf("Ingrese la segunda posicion: ");
	scanf("%d", &pos2);
	
	if((pos1<10 && pos1>=0) && (pos2 <10 && pos2>=0)){
		aux1 = arreglo[pos1];
		aux2 = arreglo[pos2];
		arreglo[pos1] = aux2;
		arreglo[pos2] = aux1;
		printf("\n** El nuevo orden del arreglo es \n**");
		for(i=0; i<10 ; i++){
			printf("Para la pos %d el valor es %d\n", i, arreglo[i]);
		}		
	}
	else {printf("\nLos valores de las posiciones son incorrectas");
	}	
	return 0;
}

