#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float divgen, divh, largo, ancho, superficie;
	int gen, herederos;
	char fin = 's';
	
	printf("\n==================================================================\n");
	printf("      ** Calculo de terreno para Generaciones y Herederos ** \n");
	printf("==================================================================\n");
	do{
		printf("==================================================================\n");
		printf("Indique cuantas Generaciones son con un maximo de 50: ");
		scanf("%d", &gen);
		printf("==================================================================\n");
		printf("Ahora la cantidad de herederos: ");
		scanf("%d", &herederos);
		printf("==================================================================");
		printf("\nIngrese el largo del terreno: ");
		scanf("%f", &largo);
		printf("Ingrese el ancho del terreno: ");
		scanf("%f", &ancho);
		superficie = ancho * largo;
		printf("\n============================================================================\n");
		printf("|| Las medidas del terreno son %.1f M2 que equivale a %.1f Mts x %.1f Mts ||\n", superficie, largo, ancho);
		printf("============================================================================\n");
		if(gen <= 50 && gen > 0){
		divgen = superficie / gen;
		divh = divgen / herederos;
		printf("**************************************************************\n");
		printf("El terreno que le corresponde a cada Generacion es %.1f M2\n", divgen);
		printf("**************************************************************\n");
		printf("El terreno que le corresponde a cada Heredero es %.1f M2\n", divh);
		printf("**************************************************************\n");
		}
		else printf("\n¡¡¡ Generaciones fuera de rango no se puede calcular !!!");
		printf("\n\nDesea vovler a calcular? <s/n>  ");
		scanf(" %c", &fin);
	}
	while (fin == 's');
	
	
	return 0;
}

