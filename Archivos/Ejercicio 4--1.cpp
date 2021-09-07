#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	int longitud, cont = 0;
	char nombres[40] = {'\0'};
	FILE *alumnos;
	alumnos = fopen("Prueba.txt", "w");
	if(alumnos != NULL){
		printf("Creacion del Archivo Exitosa\n\n");
		printf("Ingrese los nombres separados por un punto: ");
		scanf("%s", &nombres);
		fprintf(alumnos,"Los nombres de los alumnos son:\n");
		longitud = strlen(nombres);
		printf("Los nombres ingresados son: \n");
		for(int i = 0; i < longitud && cont<5; i++){
			if(i == 0){
				fprintf(alumnos,"%d ==> %c",cont+1, nombres[i]);
				printf("%d ==> %c",cont+1, nombres[i]);
			}
			else if(nombres[i] != '.'){
				fprintf(alumnos,"%c", nombres[i]);
				printf("%c",nombres[i]);
			}
			else if(nombres[i] == '.'){
				cont++;				
				if(cont<5){
					fprintf(alumnos,"\n");
					printf("\n");
					printf("%d ==> ",cont+1);
					fprintf(alumnos,"%d ==> ",cont+1);
				}			
			}
		}
		if(fclose(alumnos) == 0){
			printf("\nArchivo cerrado exitosamente");
		}
		else printf("\nError al cerrar el archivo");
	}
	else printf("Error al leer el archivo");
	
	return 0;
}

