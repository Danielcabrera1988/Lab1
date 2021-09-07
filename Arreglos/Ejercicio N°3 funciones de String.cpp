#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
	
	char cadena1[30];
	char cadena2[30];
	char cadena3[30];
	int c1,c2,c3;
	
	printf("Ingrese una cadena: ");
	scanf("%s", cadena1);
	printf("Ingrese una cadena: ");
	scanf("%s", cadena2);
	printf("Ingrese una cadena: ");
	scanf("%s", cadena3);
	
	c1 = strlen(cadena1);
	c2 = strlen(cadena2);
	c3 = strlen(cadena3);

	
	
	if(c1<c2 && c2<c3){
		printf("cadenas %s %s %s",cadena1,cadena2,cadena3);
	}
	else if(c2<c1 && c1<c3){
		printf("cadenas %s %s %s",cadena2,cadena1,cadena3);
	}
	else if(c3<c1 && c1<c2){
		printf("cadenas %s %s %s",cadena3,cadena1,cadena2);
	}
	else if(c1<c2 && c3<c2){
		printf("cadenas %s %s %s",cadena1,cadena3,cadena2);
	}
	else if(c2<c1 && c3<c1){
		printf("cadenas %s %s %s",cadena2,cadena3,cadena1);
	}
	else if(c3<c1 && c2<c1){
		printf("cadenas %s %s %s",cadena3,cadena2,cadena1);
	}
	else printf("\nLas cadenas tiene la misma longitud\n'%s'='%d' caracteres \n'%s'='%d' caracteres \n'%s'='%d' caracteres",cadena1,c1,cadena2,c2,cadena3,c3);
	
	return 0;
}

