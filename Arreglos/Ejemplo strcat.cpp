#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	char texto1[10]; 
	printf("Ingrese su Nombre: ");
	scanf(" %s", &texto1);
	scanf(" %s", &texto2);
	
	strcat(texto1,texto2); 
	
	return 0;
}
