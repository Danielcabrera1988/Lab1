#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int a=7,b,c;
	//printf("\n Introduce un número: ");
	//scanf("%d",&a);
	b=1;
	for (b=1; b <= 10; b++)
	{
		c=a*b;
		printf (" %d x %d es = %d \n",a,b,c);//muestra la tabla del 7
		
	}
	
	return 0;
}

