#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char palabra[50] = {'\0'}, letra;	int i=0;
	int  cont = 0;	/*Cargamos la Cadena*/	printf("Ingrese Palabra: ");	scanf("%s",&palabra);
		/* Recorremos la cadena y la mostramos en columna*/	while(palabra[i]!='\0')	{		if(palabra[i]!='*'){
			printf("%c",palabra[i]);
		}
		else printf("\n");		i++;	}
	
	printf("\nIngrese una letra: ");
	scanf(" %c", &letra);
	
	for(i=0; i<50 ; i++){		if(letra == palabra[i] && letra != '*' && letra != 0){
			cont++;
		}	}
	if(cont>0){
		printf("La letra %c se encuenta %d veces",letra,cont);
	}
	else printf("La letra %c no se encuenta",letra);
	return 0;
}

