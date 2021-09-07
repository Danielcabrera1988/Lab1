#include <stdio.h>
#include <string.h>
#define a "d:/arch.dat"

struct registro {
	int cliente;
	char nombre[20];
	float saldo;
};

int main(int argc, char *argv[]) {
	
	FILE *archivo;
	struct registro reg;
	char seguir;
	
	if((archivo = fopen(a,"ab")) != NULL){
		do{
			printf("Ingrese numero de cliente: ");
			scanf("%d", &reg.cliente);
			printf("Ingrese el nombre: ");
			scanf("%s", &reg.nombre);
			printf("Ingrese el saldo: ");
			scanf("%f", &reg.saldo);	
			fwrite(&reg, sizeof(reg), 1, archivo);			
			printf("Desea terminar? s/n: ");
			scanf(" %c", &seguir);
			
		}while(seguir != 's');
		fclose(archivo);	
		
		archivo = fopen(a,"r");
		while (!feof(archivo))
		{
			printf("Numero de cliente %d\n", reg.cliente);
			printf("Nombre del Cliente %s\n", reg.nombre);
			printf("Sado del cliente %.0f\n", reg.saldo);
			fread(&reg, sizeof(reg), 1, archivo);
		}
		fclose(archivo);
	}
	else printf("Error, no se pudo crear el archivo");			
	
	return 0;
}

