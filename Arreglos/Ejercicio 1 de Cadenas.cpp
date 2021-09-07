#include <stdio.h>
#include <string.h>
#define pos 5

int main(int argc, char *argv[]) {

	int i = 0, cont = 0, contador = 0;
	char car, letra, nom[pos];
	int inicio = 0, fin = pos-1;
	

	/* cargar una cadena caracter a caracter*/
	while (i < pos){
		printf ("Ingrese caracter:%d ==> ",i+1);
		scanf(" %c",&car);
		nom[i]=car;
		i++;
	}
	
	/* mostrar una cadena caracter a caracter*/
	while (i < pos)	{
		printf ("Caracter: '%c'\n",nom[i]);
		i++;
	}	
	
	//fin=strlen(nom)-1;
	while(inicio<fin && nom[inicio]<=nom[fin]){
		inicio++;
		fin--;
	}		
	if(inicio==fin){
		printf("\nLa Cadena es un palindromo\n\n");
	}else {
		printf ("\nLa Cadena no es palindromo\n\n");
	}
	
	printf("\nCaracteres invertidos\n\n");
	for(i = pos-1; i >= 0 ; i--){
		printf("** caracter: '%c' **\n", nom[i]);
	}
	printf("\nIngrese un caraceter: ");
	scanf(" %c",&letra);
	
	if(letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U'){
		for(i = 0 ; i< pos; i++){
			if(letra == nom[i]){
				cont++;	
			}
		}
		if(cont>0){
			printf("\nEl caracter %c esta %d veces\n",letra,cont);
		}
		else printf("\nLa Vocal %c no aparece en la cedena",letra);
	}else printf("\nEl caracater ingresado no es una vocal\n");
	
	for(i = 0; i < pos; i++){
		if('c' == nom[i] && 'a' == nom[i+1]){
			contador++;
		}
	}
	printf("\n** La secuencia 'ca' aparece %d vez/ces**", contador);
	
	return 0;
	}
