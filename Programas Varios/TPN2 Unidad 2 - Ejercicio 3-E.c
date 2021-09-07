#include <stdio.h>

/*int main() {
	
	int a,b,r;
	printf("ingrese el primer valor: ");
	scanf("%d",&a);
	printf("Ingrese el segundo valor: ");
	scanf("%d",&b);
	
	if (a>b && (a%2==0)){
		r=a/b;
		printf("El resultado de la division es %d:", r);
	}
	else{
		printf("No se puede dividir");
	}
	return 0;
}*/

int main() {
	
	float a,b,r;
	printf("ingrese el primer valor: ");
	scanf("%f",&a);
	printf("Ingrese el segundo valor: ");
	scanf("%f",&b);
	
	if (a>b){
		r=a/b;
		printf("El resultado de la division es %.2f:", r);
	}
	else{
		printf("No se puede dividir");
	}
	return 0;
}
