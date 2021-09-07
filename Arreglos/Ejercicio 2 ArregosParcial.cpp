#include <stdio.h>
int matriz[][100], filas, columnas;
void cargaMatriz();
void mostrarMatriz(int matriz[][100], int filas, int columnas);
void mostrarMatrizT(int matriz[][100], int filas, int columnas);
void comprobarSimetria(int matriz[][100], int filas, int columnas);
int main(int argc, char *argv[]) {
	
	printf("<===============================>\n");
	printf("Comprobacion de matriz simetrica\n");
	printf("<===============================>\n\n");
	
	cargaMatriz();
	
	printf("\nMatriz Original\n");
	mostrarMatriz(matriz, filas, columnas);
	
	printf("\nMatriz traspuesta\n");
	mostrarMatrizT(matriz, filas, columnas);	
	
	comprobarSimetria(matriz, filas, columnas);
	
	return 0;
}
void cargaMatriz(){
	printf("Ingrese la cantidad de filas: ");
	scanf("%d", &filas);
	printf("Ingrese la cantidad de columnas: ");
	scanf("%d", &columnas);
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			printf("Fila==>[%d] Columna==>[%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
}
void mostrarMatriz(int matriz[][100], int filas, int columnas){
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
}
void mostrarMatrizT(int matriz[][100], int filas, int columnas){
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			printf("%d\t",matriz[j][i]);
		}
		printf("\n");
	}
}


void comprobarSimetria(int matriz[][100], int filas, int columnas){
	
	int cont = 0;
	if(filas == columnas){
		for(int i = 0; i < filas; i++){
			for(int j = 0; j < columnas; j++){
				if(matriz[i][j] == matriz[j][i]){
					cont++;
				}
			}
		}
	}
	if(cont == filas*columnas){
		printf("\nLa Matriz es Simetrica");
	}
	else printf("\nLa Matriz no es Simetrica");
}
