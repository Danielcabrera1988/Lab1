#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i,n=1;
	
	printf("Ingrese 1 numero positivo: ");
	scanf("%d",&i);
	
	do{
		printf("%d\n",n);
		n++;
	}
	while(n<=i);
	return 0;
}

