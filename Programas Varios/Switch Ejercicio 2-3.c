#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int selec;
	
	printf("Ingrese el codigo de la asignatura: ");
	scanf("%d",&selec);
	
	switch(selec){
	case 132 : 	printf("Seleccion� Tecnicas de Organizacion Empresarial");
	break;
	case 402 : 	printf("Seleccion� Matem�ticas Discretas");
	break;
	case 111 : 	printf("Seleccion� Elementos de Programaci�n");
	break;
	case 171 : 	printf("Seleccion� F�sica");
	break;
	case 120 : 	printf("Seleccion� Sistemas Electr�nicos Digitales");
	break;
	default : printf("Ingrese un codigo admitido");
	break;
	}
	
	return 0;
}

