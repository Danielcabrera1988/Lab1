#include <stdio.h>
#include<conio.h>

int main (){
	int n;
	printf("Teclee un número entero: ");
	scanf("%d",&n);
	if (n>0) printf("Positivo");
	else 
		if (n<0) 
			printf("Negativo");
		else 
			printf("Cero");
	getch();		
	return 0;
}

