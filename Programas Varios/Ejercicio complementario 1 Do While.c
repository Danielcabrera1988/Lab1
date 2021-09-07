#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i=0, x=0,c ;
	
	
	printf("Imprimir por pantalla los n divisibles por 5 y enumerados de forma ascendente\n");
	printf("Ingrese 1 numero: \n");
	scanf("%d",&c);
	do{
		if(i%5==0){
			x++;
			printf("tu mama %d ",x);
		}
		i++;
	}
	while(i<c);
	printf("\nSon n = %d  N° divisibles",x);
	
	return 0;
}

