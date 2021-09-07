#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i;
	double actual;
	double nuevo=0;
	double inf [6]; //Inflacion con indices de 0 a 5
	
	printf("==========================================================================\n");
	printf("|| Calcule la inflacion de un producto en un plazo de 6 meses y muestre ||\n");
	printf("|| por pantalla cuanto costaria el producto despues del plazo           ||\n");
	printf("==========================================================================\n\n");
	
	puts ("Programa precios de planta\n");
	printf ("Introduzca el precio actual: ");
	scanf ("%lf", &actual);
	nuevo = actual;
	for (i = 0; i < 6; i++) {
		printf ("Introduzca la inflacion del mes %d: " ,i+1);
		scanf ("%lf", &inf[i]);
		nuevo = nuevo * (1 + inf[i]/100);
	}
	
	printf("\nEl precio nuevo del producto debe ser: %lf ", nuevo);	
	return 0;
}
