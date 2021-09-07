#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int nfac, nart, litro, acum;
	float preciol, totalfac;
	
	printf("Ingrese el N° de factura donde 0 cierra el ingreso de datos: \n");
	scanf("%d",&nfac);
	printf("Ingrese el N° del Articulo: \n");
	scanf("%d",&nart);
	printf("Ingrese la cantidad de litros: \n");
	scanf("%d",&litro);
	printf("Ingrese el precio por litro: \n");
	scanf("%f",&preciol);
	
	totalfac = preciol * litro;
	printf("Se vendieron %d litros en total\n",litro);
	printf("el total facturado es %f\n",totalfac);
	
	
	for()
	if(totalfac>300){
		printf("Se emitieron %d facturas mas de 300",acum);
	}
	
	
	
	return 0;
}

