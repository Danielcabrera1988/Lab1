#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	
	int anio=12, dol=10, limite=1000, total=10;
	
	do{
		
		dol=dol*2;//aumenta el regalo al doble cada a�o
		total=total+dol;//suma los regalos de cada a�o
		anio++;//cuanta los a�os
	}
	while(total<=limite);
	printf("Edad %d: \n",anio);
	printf("Dinero recibido a los %d a�os es: %d\n",anio,dol);
	printf("Total rescibido hasta los %d a�os es: %d",anio,total);
	
	getch();
	return 0;
}

