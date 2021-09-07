#include <stdio.h>

int main(int argc, char *argv[]) {
	int fact, i, art, cantidad, acum, facturas_300;
	float precio, facturado;
	acum=0;
	printf("Ingrese cantidad de facturas: ");
	scanf("%i", &fact);
	for(i=0; i<fact; i++)
	{
		printf("Ingrese N° articulo: ");
		scanf("%i",&art);
		printf("Ingrese cantidad de litros: ");
		scanf("%i", &cantidad);
		printf("Ingrese precio por litro: ");
		scanf("%f", &precio);
		facturado=facturado+cantidad*precio;
		if (art==1)
		{
			acum=acum+1;
		}
		if(precio*cantidad>300){
			facturas_300=facturas_300+1;
		}
	}
	printf("Total facturado: $%.2f\n", facturado);
	printf("cantidad de articulos N° 1 vendidos: %i\n", acum);
	printf("Cantidad de facturas mayor a $300: %i", facturas_300);
	return 0;
}

