#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char palabra[50] = {'\0'}, letra;
	int  cont = 0;
	
			printf("%c",palabra[i]);
		}
		else printf("\n");
	
	printf("\nIngrese una letra: ");
	scanf(" %c", &letra);
	
	for(i=0; i<50 ; i++){
			cont++;
		}
	if(cont>0){
		printf("La letra %c se encuenta %d veces",letra,cont);
	}
	else printf("La letra %c no se encuenta",letra);
	return 0;
}
