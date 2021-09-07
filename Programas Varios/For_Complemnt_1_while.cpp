//Ejercicios Complementarios:
	//Ejercicio N° 1:
	//Una empresa de bebidas registró por cada venta efectuada la siguiente información:
	//- Número de Factura
	//- Número de Artículo
	//- Cantidad (en litros)
	//- Precio Unitario (por litro)
	//El ingreso de datos finaliza con un número de factura igual a cero. Se pide informar:
	//a) Total facturado.
	//b) Cuántos litros del artículo 1 se vendieron en total
	//c) Cuántas facturas de más de $300.- se emitieron
#include <stdio.h>

int main(int argc, char *argv[]) {
	int fac, cantidad, acum1, art, facturas_300;
	float facturado, precio;
	printf("Ingrese N° factura: ");
	scanf("%i", &fac);
	acum1=0;
	facturas_300=0;
	while(fac!=0) 
	{
		printf("Ingrese N° articulo: ");
		scanf("%i",&art);
		printf("Ingrese cantidad de litros: ");
		scanf("%i", &cantidad);
		printf("Ingrese precio por litro: ");
		scanf("%f", &precio);
		printf("Ingrese N° factura: ");
		scanf("%i", &fac);
		facturado=facturado+cantidad*precio;
		if (art==1)
		{
			acum1=acum1+1;
		}
		if(precio*cantidad>300){
			facturas_300=facturas_300+1;
		}
	};
	printf("Total facturado: %f\n", facturado);
	printf("cantidad de articulos N° 1 vendidos: %i\n", acum1);
	printf("Cantidad de facturas mayor a $300: %i", facturas_300);
	return 0;
}
