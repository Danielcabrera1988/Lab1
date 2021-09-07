#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	
	float a,b,b1,c;
	float aux1=-1, aux2, aux3, aux4, aux5;
	float res1=0, res2=0;
	
	
	printf("Resolucion cuadratica\n\n");
	printf("Ingrese el valor de b: ");
	scanf("%f",&b);
	printf("\nIngrese el valor de a: ");
	scanf("%f",&a);
	printf("\nIngrese el valor de c: ");
	scanf("%f",&c);
	
	b1=aux1*b;//hacer cambio de signo a "b"
	aux2=pow(b,2);//aplicar potencia 2 a "b"
	aux3=4*a*c;//resolver mult dentro de la raiz
	aux4=2*a;//resolver 2*a
	
	aux5=aux2-(aux3);//resolver la resta dentro de la raiz
	sqrt(aux2);//Resultado de la raiz
	res1=(b1+aux5)/aux4;//resultado de la suma
	res2=(b1-aux5)/aux4;//resultado de la resta
	
	printf("\nResultado para X1 es igual a %.2f",res1);
	printf("\nResultado para X2 es igual a %.2f",res2);
	
	getch();
	return 0;
}

