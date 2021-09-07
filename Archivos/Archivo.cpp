#include <stdio.h>// Todas las funciones como fread, fwrite, fopen, fclose y printf
#include <stdlib.h>// EXIT_FAILURE y EXIT_SUCCESS
#define TAMANIO_BUFER 16 // Cuántos bytes leer en cada iteración

int main() {
	unsigned char bufer[TAMANIO_BUFER];
	FILE *archivo;
	size_t bytesLeidos;
	
	archivo = fopen("test.dat", "r"); // Abrir en modo read
	// Si es NULL, entonces no existe, o no se pudo abrir
	if (!archivo) {
		printf("¡No se pudo abrir el archivo %s!", archivo);
		return EXIT_FAILURE;
	}
	
	// Mientras no alcancemos el EndOfLine del archivo...
	while (!feof(archivo)) {
		// Leer dentro del búfer; fread regresa el número de bytes leídos
		bytesLeidos = fread(bufer, sizeof(char), sizeof(bufer), archivo);
		// Para depurar, se imprime la cantidad de bytes leídos (se puede quitar esa parte)
		//printf("\nSe han leido %lu bytes:\n", bytesLeidos);
		// Y el contenido del búfer también es impreso
		fwrite(bufer, sizeof(char), bytesLeidos, stdout);
	}
	// Al final, se cierra el archivo
	fclose(archivo);
	return EXIT_SUCCESS;
}