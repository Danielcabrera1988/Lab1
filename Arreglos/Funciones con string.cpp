#include <stdio.h>
#include <string.h>
void buscandoANemo(char n[], char d);
int busquedaCaraceter(char a[], char x, int z);
int main(int argc, char *argv[]) {
	
	char letra;
	char texto[50];
	int repetidos = 0;
	printf("ingrese una cadena: ");
	scanf("%s", &texto);
	printf("Ingrese un caracater: ");
	scanf(" %c", &letra);
	
	repetidos = busquedaCaraceter(texto, letra, repetidos);
	if(repetidos>0){
		printf("El caracter %c aparece %d veces en la cadena",letra,repetidos);
	}
	else printf("El caracter %c no aparece en la cadena",letra);
	
	return 0;
}
int busquedaCaraceter(char a[], char x, int z){
	
	int i, cant;
	z = 0;
	cant = strlen(a);
	for(i = 0; i < cant; i++){
		if(a[i] == x){
			z++;
		}
	}
	
	return z;
}
void buscandoANemo(char n[], char d){
	
	int j, total, nemo=0;
	total = strlen(n);
	for(j = 0; j < total; j++){
		if(n[j] == d){
			nemo++;
		}
	}
	if(nemo>0){
		printf("El caracter %c aparece %d veces en la cadena",d,nemo);
	}
	else printf("El caracter %c no aparece en la cadena",d);
}
