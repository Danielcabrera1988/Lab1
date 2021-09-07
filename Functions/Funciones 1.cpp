#include <stdio.h>


int bisiesto(int i);


int main(int argc, char *argv[]) {
	
	int anio, p;
	
	printf("Ingrese a�o: ");
	scanf ("%d",&anio);
	
	p = bisiesto(anio);
	
	if(p==1){
		printf("El a�o %d es bisiesto", anio);
	}
	else{
		printf("El a�o %d no es bisiesto", anio);
	}
	
	return 0;
}


int bisiesto(int i){
	
	int a, b, c;
	
	a = i % 4;
	b = i % 100;
	
	if (a==0) c=1;
	else if (a==0 && b!=0) c=1;
	else c=0;
	
	return c;
}
