#include <stdio.h>
//crea una estructura
struct estructura_amigo {
	char nombre[30];
	char apellido[40];
	char telefono[10];
	int edad;
};
// invoca la estructura estructura_amigo asignando el nombre "amigo"
// y le asigna valores
struct estructura_amigo amigo = {
	"Juanjo",
	"López",
	"983403367",
	30
};
int main(int argc, char *argv[]) {
	//imprime la estructura con los valores
	printf( "%s tiene ", amigo.apellido );
	printf( "%i años ", amigo.edad );
	printf( "y su teléfono es el %s.\n" , amigo.telefono );
	
	return 0;
}

