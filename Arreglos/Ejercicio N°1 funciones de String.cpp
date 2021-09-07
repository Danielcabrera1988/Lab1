#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
	
	char cadena[20+1];
	int c;
	
	printf("Ingrese 2 nombres separados por punto: ");
	scanf("%s", &cadena);
	
	c = strlen(cadena);
	
	while(c<20){
		cadena[c]='a';
		c++;
	}
	printf("%s", cadena);
	
	return 0;
}

