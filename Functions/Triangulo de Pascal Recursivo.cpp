#include <stdio.h>

void cal_pascal(int n);
int rec_triang_pascal(int a, int b);

int main(int argc, char *argv[]) {
	
	int x;
	printf("*** Ingrese cuantas filas del Triangulo de Pascal desea ver *** ");
	scanf("%d", &x);
	
	cal_pascal(x);
	
	return 0;
}

void cal_pascal(int n){
	int i, j;
	for(i=0 ; i<n ; i++){//calcula los espacios positivos
		for(j=n-i ; j>=1 ; j--){//calcula los espacios negativos segun valor de 'n'
			printf(" ");//imprime los espacios entre numeros
		}
		for(j=0; j<=i ; j++){
			printf(" %d ", rec_triang_pascal(i, j));//imprime los valores del triangulo
		}
		printf("\n");//hace los saltos para las filas
	}
}
int rec_triang_pascal(int a, int b){
	//caso base
	if (a == b || b ==0){
		return 1;
	}
	else {
		return rec_triang_pascal(a-1, b-1) + rec_triang_pascal(a-1, b);
	}
}
