#include <stdio.h>
#include <conio.h>
int main(){
	
	int a;
	
	printf("ingrese un numero:");
	scanf("%d",&a);
	
	if(a>0 && (a%2==0))
		printf("el numero es mayor que cero y es par \n");
	else
		if(a>0 && (a%2!=0)) 
			printf("el numero es mayor que cero y es impar\n");
		else 
			if(a<0 && (a%2==0)) 
				printf("el numero es menor que cero y es par\n");
			else 
				if(a<0 && (a%2!=0))
					printf("el numero es menor que cero e impar");
				else printf("el numero es igual que cero");
		
	getch();

	return 0;
}
