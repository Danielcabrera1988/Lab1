#include <stdio.h>
#include <conio.h>
int main() {
	int a;
	
	printf("ingrese un numero:");
	scanf("%d",&a);
	
	if(a>10)
		printf("el numero es mayor que 10\n");	
	else printf("el numero es menor 10\n");
	
	getch();
	
	return 0;
}
