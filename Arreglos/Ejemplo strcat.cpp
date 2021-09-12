#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	char texto1[10]; 
	char texto2[10]; 
	char texto3[10];
	
	printf("Ingrese su Nombre: ");
	scanf(" %s", &texto1);
	printf("Ingrese su Apellido: ");
	scanf(" %s", &texto2);
	
	strcat(texto1,texto2); 
	printf("%s\n",texto1); 
	
	getchar();
	return 0;
	
	return 0;
}
