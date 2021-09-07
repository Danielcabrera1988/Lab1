#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int selec;
	
	printf("Ingrese el codigo de la asignatura: ");
	scanf("%d",&selec);
	
	switch(selec){
	case 132 : 	printf("Seleccionó Tecnicas de Organizacion Empresarial");
	break;
	case 402 : 	printf("Seleccionó Matemáticas Discretas");
	break;
	case 111 : 	printf("Seleccionó Elementos de Programación");
	break;
	case 171 : 	printf("Seleccionó Física");
	break;
	case 120 : 	printf("Seleccionó Sistemas Electrónicos Digitales");
	break;
	default : printf("Ingrese un codigo admitido");
	break;
	}
	
	return 0;
}

