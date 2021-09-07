#include <stdio.h>
#include <stdbool.h>
int suma_matriz (int a[3][3], int b[3][3], int ms[3][3], int c, int d);
int resta_matriz (int z[3][3], int x[3][3], int mr[3][3], int y, int v);
int multi_matriz (int o[3][3], int p[3][3], int mm[3][3], int q, int r);
void muestraMat(int mat[3][3]);

int main(int argc, char *argv[]) {
	
	char fin = 's';
	int flag = false;
	int i, j;
	int a[3][3];
	int b[3][3];
	int suma [3][3];
	int resta [3][3];
	int multi [3][3];
	printf("==========================================================================\n");
	printf("|| Programa para calcular suma / resta / multiplicacion de matrices 3x3 ||\n");
	printf("==========================================================================\n\n");
	
	do{
	printf("\nIngrese los valores para su matriz 'A'\n\n");
	//carga de la matriz 'A'
	for (i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("Ingrese el valor para la fila [%d] columna [%d]: ",i+1,j+1);
			scanf("%d", &a[i][j]);
		}
	}
	//Mostrando valores de la Matriz A
	printf("Estos son los valores de su Matriz 'A'\n");
	printf("=================\n");
	muestraMat(a);
	printf("=================\n\n");
	printf("\nAhora los valores de la matriz 'B'\n\n");
	//carga de la matriz 'B'
	for (i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("Ingrese el valor para la columna [%d] fila [%d]: ",i+1,j+1);
			scanf("%d", &b[i][j]);
		}
	}
	//Mostrando los valores de la Matriz B
	printf("Estos son los valores de su Matriz 'B'\n");
	printf("=================\n");
	muestraMat(b);
	printf("=================\n\n");
	
	//comparacion de ambas matrices para saber si son o no iguales
	i=0;
	while(i<3 && flag == false){
		for(i = 0; i < 3; i++){
			for(j = 0; j < 3; j++){
				if(a[i][j] != b[i][j]){
					flag = true;
				}
			}
		}
		i++;
	}
	printf("=================================\n");
	if(flag == true){
		printf("|| Las matrices son diferentes ||\n");
	}
	else printf("|| Las matrices son iguales ||\n");
	printf("=================================\n");
	//llamado a la funcion suma de 2 matrices
	suma [3][3] = suma_matriz(a, b, suma, 3, 3);
	//Mostrando los valores de la suma de las 2 matrices
	printf("\nEl resultado de la suma de las 2 matrices es\n");
	printf("=================\n");
	//f(x) muestra matriz
	muestraMat(suma);
	printf("=================\n\n");
	//llamado a la funcion resta de 2 matrices
	resta [3][3] = resta_matriz(a, b, resta, 3, 3);
	//Mostrando los valores de la resta de las 2 matrices
	printf("\nEl resultado de la resta de las 2 matrices es\n");
	printf("=================\n");
	//f(x) muestra matriz
	muestraMat(resta);
	printf("=================\n\n");
	//llamado a la funcion multiplicacion de 2 matrices
	multi [3][3] = multi_matriz(a, b, multi, 3, 3);
	//Mostrando los valores de la multiplicacion de las 2 matrices
	printf("\nEl resultado de la multiplicacion de las 2 matrices es\n");
	printf("=================\n");
	//f(x) muestra matriz
	muestraMat(multi);
	printf("=================\n\n");
	printf("Desea calcular otras matrices? <s/n>: ");
	scanf(" %c", &fin);
	}
	while (fin == 's');
	return 0;
}

int suma_matriz (int a[3][3], int b[3][3], int ms[3][3], int c, int d){
	
	for(c = 0; c < 3; c++){
		for(d = 0; d < 3; d++){
			ms[c][d] = a[c][d] + b[c][d];
		}
	}
	return ms[3][3];
}

int resta_matriz (int z[3][3], int x[3][3], int mr[3][3], int y, int v){
	
	for(y = 0; y < 3; y++){
		for(v = 0; v < 3; v++){
			mr[y][v] = z[y][v] - x[y][v];
		}
	}
	return mr[3][3];
}
	
int multi_matriz (int o[3][3], int p[3][3], int mm[3][3], int q, int r){
	
	for(q = 0; q < 3; q++){
		for(r = 0; r < 3; r++){
			mm[q][r] = o[q][r] * p[q][r];
		}
	}
	return mm[3][3];
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
