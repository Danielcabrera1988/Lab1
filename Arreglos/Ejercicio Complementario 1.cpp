#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
	
	int cmagico[3][3];
	int comprobador [8] = {'\0'};
	int i, j, k = -1, numero=1;
	int flag = true;
	char fin = 's';
	
	printf("===================\n");
	printf("Cuadrado Magico 3x3\n");
	printf("===================\n\n");
	
	do{
	//comprobacion para introducir numeros dentro del rango permitido
		for(i=0;i<3;i++){
			for(j=0;j<3;){
				printf("Ingrese los valores del 1 al 9 => Fila [%d] Columna [%d]: ",i+1,j+1);
				scanf(" %d", &numero);
				if(numero>0 && numero<10){
					cmagico[i][j] = numero;
					j++;
				}
				else {
					printf("\n=====================================\n");
					printf("|| Valor fuera de rango, REINTENTE ||\n");
					printf("=====================================\n\n");
				}
			}
		}
	//guardo valores dentro de las primeras 6 posiciones
	for (i = 0; i < 3; i++){
		k = k + 1;
		for (j = 0; j < 3; j++){
			comprobador[k] = comprobador[k] + cmagico[i][j];//suma de los valores de las 3 filas pos 0,1,2
			comprobador[k + 3] = comprobador[k + 3] + cmagico[j][i];//suma de las 3 columnas pos 3,4,5
		}
	}
	//guardo valores dentro de los 2 ultimos lugares de comprobador
	for (i = 0; i < 3; i++){
		comprobador[6] = comprobador[6] + cmagico[i][i];//suma de la diagonal de izquierda a derecha
		comprobador[7] = comprobador[7] + cmagico[i][2-i];//suma de la diagona de derecha a izquierda
	}
	//comprobacion de las sumas de todas las filas, columnas y diagonales 
	//guardadas en las posiciones de comprobador
	i=0;
	while(flag == true && i < 7){
		if(comprobador[i] != comprobador[i+1]){
			flag = false;
		}
		i++;
	}
	
	if(flag == true){
		printf("\nLa matriz es Magica\n");
	}
	else printf("\nLa matriz no es Magica\n");
	printf("\nDesea comprobar otra matiz? <s/n>: ");
	scanf(" %c", &fin);	
	}
	while(fin == 's');
	return 0;
}
