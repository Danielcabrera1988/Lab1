#include <stdio.h>
int pares(int a[3][3], int b, int c);
int impares(int z[3][3], int x, int y);

int main(int argc, char *argv[]) {
	
	int p, imp, n, i, j, acum=0, promedio=0, cont=0;
	int matriz [3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};//definiendo valores de la matriz
	printf("Mostrando Matriz Predefinida\n");
	printf("==================\n");
	for (i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d \t",matriz[i][j]);
			acum+=matriz[i][j];
		}
		printf("\n");
	}
	printf("==================");
	printf("\n\n");
	printf("Matriz Traspuesta\n");
	printf("==================\n");
	for (i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d \t",matriz[j][i]);
		}
		printf("\n");
	}
	printf("==================\n");
	promedio = acum/9;
	printf("\n** La suma de los elementos de la matriz es %d **\n", acum);	
	printf("\n ** El promedio de la matriz es %d **\n",promedio);
	//buscando un elemento dentro de la matriz
	printf("\nBusqueda de un elemento en la matriz\n");
	printf("Ingrese un numero: ");
	scanf("%d", &n);
	//for para contar elementos repetidos dentro de la matriz
	for (i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			if(n == matriz[i][j]){
				cont++;
			}
		}
	}
	if (cont>0){
		printf("\nElemento %d encontrado %d veces",n,cont);
	}
	else printf("\nElemento %d no encontrado",n);
	
	//llamada a funcion de busqueda de N° pares dentro de la matriz
	p = pares(matriz,3,3);
	printf("\nLos numeros pares de la matriz son %d\n",p);
	//llamada a funcion de busqueda de N° impares dentro de la matriz
	imp = impares(matriz,3,3);
	printf("\nLos numeros impares de la matriz son %d\n",imp);
	return 0;
}
//funcion de conteo de numeros pares dentro de la matriz
int pares(int a[3][3], int b, int c){
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
//Funcion para contar numeros impares dentro de la matriz
int impares(int z[3][3], int x, int y){
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
