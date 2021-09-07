#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	
	int anio=12, dol=10, limite=1000, total=10;
	
	do{
		
		dol=dol*2;//aumenta el regalo al doble cada año
		total=total+dol;//suma los regalos de cada año
		anio++;//cuanta los años
	}
	while(total<=limite);
	printf("Edad %d: \n",anio);
	printf("Dinero recibido a los %d años es: %d\n",anio,dol);
	printf("Total rescibido hasta los %d años es: %d",anio,total);
	
	getch();
	return 0;
}

