#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int a,b=0,c=1,d=1,i;
	
	printf("Ingrese la cantidad de elementos que desea: ");
	scanf("%d",&a);
	
	printf("1 ");
	for( i=1 ; i<a ; i++ ){
		d = b + c;
		printf("%d " ,d);
		b = c;
		c = d;
	}
	
	return 0;
}

