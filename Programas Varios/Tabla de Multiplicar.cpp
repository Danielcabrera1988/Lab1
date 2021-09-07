#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int a=1,b=1,c,d;
	printf("\n Introduce un número a multiplicar: ");
	scanf("%d",&a);
	printf("\n Introduce la cantidad de veces a multiplicar: ");
	scanf("%d",&d);
	for (b=1; b <= d; b++)
	{
		c=a*b;
		printf (" %d x %d es = %d \n",a,b,c);
		
	}
	
	return 0;
}
