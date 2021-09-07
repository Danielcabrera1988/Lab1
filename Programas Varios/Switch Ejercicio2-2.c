#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int a=0, b=0;//Nº de usuario a operar
	int s=0, r=0, m=0, d=0;//Operaciones
	int selec;
	
	printf("Ingrese los numeros a operar separados por un espacio: ");
	scanf("%d""%d",&a,&b);
	printf("Ingrese la Op que desea 1=suma 2=resta 3=div 4=mult: ");
	scanf("%d",&selec);
	
	switch(selec){
	case 1 : s=a+b;	printf("La suma es %d",s);
	break;
	case 2 : r=a-b;	printf("La resta es %d",r);
	break;
	case 3 : d=a/b;	printf("La division es %d",d);
	break;
	case 4 : m=a*b;	printf("La multiplicacion es %d",m);
	break;
	default : printf("Por favor seleccione una op valida");
	break;
	}	
	
	return 0;
}

