#include <stdio.h>

int main(int argc, char *argv[]) {

	int i,buscar,mitad;
	int lista[10] = {1,4,7,15,32,33,57,58,70,80};	int a = 0;	int b = 9;			printf("====================================================\n\n");	//se muestra el arreglo en pantalla	for(i = 0; i < 10; i++){		printf("%d  ", lista[i]);	}	printf("\n\n====================================================\n");	printf("Ingresa un numero a buscar: ");	scanf("%d", &buscar);
			while (a <= b){
		
		mitad = (a + b) / 2;		if(buscar == lista[mitad]){			printf("Numero %d encontrado en posicion %d\n", buscar, mitad);			break;		}		else if(buscar < lista[mitad]){			b = mitad - 1;		}		else{			a = mitad + 1;		}			}//fin while		if(a>=b){		printf("Numero no encontrado\n");	}
	return 0;
}

