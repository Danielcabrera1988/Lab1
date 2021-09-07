#include <stdio.h>
#include <stdbool.h>


void muestraMat(int mat[3][3]);
void Matt(int mat[3][3]);
int pares(int a[3][3], int b, int c);
int impares(int z[3][3], int x, int y);
int primos (int p[3][3], int arre [9], int m, int n);
int busquedamatriz(int matri[3][3], int o, int p, int q);
int suma_(int mat[3][3], int g, int h);

int main(int argc, char *argv[]) {
	
	int p, imp, n, promedio=0, suma;
	int matriz [3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};//definiendo valores de la matriz
	int prim[9] = {'\0'};
	int elemento = 0;
	
	printf("Mostrando Matriz Predefinida\n");
	printf("==================\n");
	//f(x) muestra matriz
	muestraMat(matriz);
	printf("==================");
	printf("\n\n");
	
	printf("Matriz Traspuesta\n");
	printf("==================\n");
	//f(x) muestra matriz traspuesta
	Matt(matriz);
	printf("==================\n");
	
	//f(x) suma
	promedio = suma_(matriz,3,3)/9;
	//f(x) suma
	suma = suma_(matriz,3,3);
	printf("\n** La suma de los elementos de la matriz es %d **\n", suma);
	printf("\n ** El promedio de la matriz es %d **\n",promedio);
	
	//buscando un elemento dentro de la matriz
	printf("\nBusqueda de un elemento en la matriz\n");
	printf("\nIngrese un numero: ");
	scanf("%d", &n);
	//f(x) buscar y contar elementos repetidos dentro de la matriz
	elemento = busquedamatriz(matriz,3,3,n);
	if (elemento>0){
		printf("\nElemento %d encontrado %d vez/veces\n",n,elemento);
	}
	else printf("\nElemento %d no encontrado\n",n);
	
	//llamada a funcion de busqueda de N° pares dentro de la matriz
	p = pares(matriz,3,3);
	printf("\nLos numeros pares de la matriz son %d\n",p);
	
	//llamada a funcion de busqueda de N° impares dentro de la matriz
	imp = impares(matriz,3,3);
	printf("\nLos numeros impares de la matriz son %d\n",imp);
	
	//f(x) numeros primos
	prim [9] = primos(matriz,prim,3,3);
	printf("\nLos Numeros Primos de la Matriz son\n\n");
	for(int i = 0; i < 9; i++){
		if(prim[i] != 0){
			printf("%d -- ",prim[i]);
		}
	}
	printf("\n\n");
	
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
void Matt(int mat[3][3]){
		int i, j;
		
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				printf("%d \t", mat[j][i]);
			}
			printf("\n");
		}
	}
int pares(int a[][3], int b, int c){
	int par = 0;
	for (b = 0; b < 3; b++){
		for(c = 0; c < 3; c++){
			if(a[b][c] % 2 == 0){
				par++;
			}
		}
	}
	return par;
}
int impares(int z[][3], int x, int y){
	int impar = 0;
	for (x = 0; x < 3; x++){
		for(y = 0; y < 3; y++){
			if(z[x][y] % 2 != 0){
				impar++;
			}
		}
	}
	return impar;
}
int primos (int p[3][3], int arre[9], int m, int n){
	
	int cont = 0;
	int plus = 0;
	
	for(int m = 0; m < 3; m++){
		for(int n = 0; n < 3; n++){
			for(int i = 1; i <= p[m][n]; i++){
				if(p[m][n] % i == 0){
					cont++;
				}
			}
			if(cont < 3){
				arre[plus] = p[m][n];
			}
			plus++;
			cont = 0;
		}
	}	
	return arre[9];
}
int busquedamatriz(int matri[3][3], int o, int p, int q){
	int contador=0;
	for (o = 0; o < 3; o++){
		for(p = 0; p < 3; p++){
			if( q == matri[o][p]){
				contador++;
			}
		}
	}
	if (contador>0){
		return contador;
	}
	else return 0;	
}
int suma_(int mat[3][3], int g, int h){
	int suma = 0;
	for (g = 0; g < 3; g++){
		for(h = 0; h < 3; h++){
			suma+=mat[g][h];
		}
	}
	return suma;
}
