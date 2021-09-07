#include <stdio.h>
#include <stdbool.h>

void muestraMat(int mat[3][3]);
int puntosilla(int mat[3][3], int fila, int columna);

int main(int argc, char *argv[]) {

	int i=0, j=0, fila=0, columna=0, matriz[3][3];
	int puntossillas[9];
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("Ingrese los valores para su Matriz fila %d col %d: ",i,j);
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("\nValores de la Matriz ingresada\n\n");
	printf("==================\n");
	muestraMat(matriz);
	printf("==================\n\n");
	
	for(fila = 0; fila < 3; fila++){
		for(columna = 0; columna < 3; columna++){
			if(puntosilla(matriz,fila,columna) == false){
				printf("La posicion %d == %d es un Punto Silla\n",fila,columna);
			}
			else printf("La posicion %d == %d No es un Punto Silla\n",fila,columna);
		}
	}
	return 0;
}

void muestraMat(int mat[3][3]){
	int i, j;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d \t", mat[i][j]);
		}
		printf("\n");
	}
}
int puntosilla(int mat[3][3], int fila, int columna){
	
	int i, j, ps = false;
	
	for(i=0; i<3 ; i++){
		for(j=0; j<3 ; j++){
			if(mat[fila][columna] > mat[fila][j] || mat[fila][columna] < mat[i][columna]){
				ps = true;
			}
			else if (mat[fila][columna] == mat[fila][j] || mat[fila][columna] == mat[i][columna]){
				ps = true;
			}
		}
	}	
	return ps;
}

