#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int selec;
	printf("......::::::Sistema de Pedidos::::::......\n\n");
	printf("1-Bebidas\n");
	printf("2-Comidas\n");
	printf("3-Postres\n");
	printf("4-Salir\n\n");
	printf("..........................................\n");
	printf("Elija una opci�n: ");
	scanf("%d",&selec);
	
	switch(selec){
	case 1 : printf("Usted seleccion� la opci�n 1 Bebidas");
	break;
	case 2 : printf("Usted seleccion� la opci�n 2 Comidas");
	break;
	case 3 : printf("Usted seleccion� la opci�n 3 Postres");
	break;
	case 4 : printf("Usted seleccion� la opci�n 4 Salir");
	break;
	default : printf("Selecione una opcion valida");
	break;
	}
	
	return 0;
}

