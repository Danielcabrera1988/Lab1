#include <stdio.h>
#include <conio.h>
int main() {
	int a;
		
	printf("ingrese un numero:");
	scanf("%d",&a);
		
		if(a>0)
			printf("el numero es mayor que cero ");
		else printf("el numero es menor que cero ");
	
		if(a%2==0)
			printf("y es par\n");
		else printf("y es impar\n");
		
		if(a==0)
			printf("el numero es igual a 0\n");
	getch();
		
	return 0;
}

