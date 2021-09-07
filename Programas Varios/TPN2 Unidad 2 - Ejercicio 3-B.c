#include <stdio.h>
#include <conio.h>

int main() {
	int a=0, b=0, s=0, r=0;
	
	printf("Ingrese el valor de a: ");
	scanf("%d", &a);
	printf("ingrese el valor de b: ");
	scanf("%d", &b);
	
	if(a>b){
		s=a+b;
		printf("El resultado es %d : ",s);
	}
	else{
		if (a<b){
			r=b-a;
			printf("El resultado es %d : ",r);
		}
		else {
			printf("los valores son iguales, por lo tanto la suma es %d y resta es %d:" ,s=a+b, r=b-a);
		}
	}
	getch ();
	return 0;
}

