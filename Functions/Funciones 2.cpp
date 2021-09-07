#include <stdio.h>

int vocales (char x);

int main(int argc, char *argv[]) {
	
	int z;
	char car;
	printf("Ingrese un caracter: ");
	scanf (" %c",&car);
	
	z = vocales(car);
	if(z==0){
		printf("La vocal es %c ", car);
	}
	else{
		printf("no es una vocal");
	}
	return 0;
}

int vocales (char x){
	
	int t;
	switch(x){
	case 'a': t=0;break;
	case 'e': t=0;break;
	case 'i': t=0;break;
	case 'o': t=0;break;
	case 'u': t=0;break;
	default: t=1;break;
	}
	return t;
}
