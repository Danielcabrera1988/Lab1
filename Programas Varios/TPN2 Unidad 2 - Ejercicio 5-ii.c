#include <stdio.h>

int main() {
	
	int a,b,c;
	printf("ingrese el valor de a: ");
	scanf("%d",&a);
	printf("ingrese el valor de b: ");
	scanf("%d",&b);
	printf("ingrese el valor de c: ");
	scanf("%d",&c);

	if(a==b && (b==c))
	{
		printf("Los 3 numeros son iguales");
	}	
	else{
		if((a==b) && (b!=c) && (a!=c))
			{
		printf("Solo 2  numeros son iguales, a y b", a,b);
			}
		else{
			if((b==c) && (a!=b) && (a!=c))
				{
				printf("Solo 2 numeros son iguales b y c", b,c);
				}
			else{
				if((a==c) && (a!=b) && (b!=c))
					{
					printf("solo 2 numeros son iguales a y c", a,c);
					}
					else
					{
					printf("todos los valores son diferentes");
					}
				}
			}
		}
	return 0;	
}
