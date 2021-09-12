#include <stdio.h> 
#include <string.h> 
#include <conio.h> 
#define MAXLON 80 
int main()
{ 
	char a[MAXLON+1]; 
	int longitud; 
	printf ("Introduce una cadena (max. %d caracteres): ", MAXLON);
	scanf("%s",&a); 
	longitud = strlen(a); 
	printf ("\nLongitud de la cadena: %d\n", longitud); 
	getch();
	return 0; 
} 
