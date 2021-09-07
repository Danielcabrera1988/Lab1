#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	char texto[100+1];
	char parrafos[100+1];
	char oraciones[100+1];
	int i, p, sum = 0, parra = 0, ora = 0;
	int oxp[20] = {'\0'}, op = 0;
	
	printf("Ingrese el texto: ");
	scanf("%s", &texto);
	
	p=strlen(texto);//limite de iteraciones para parrafos
	
	for(i = 0; i < p; i++){
		if(texto[i] != '.' && texto[i] != '*'){
			parrafos[i] = texto[i];
			//oraciones[i] = texto[i];			
		}
		else if(texto[i] == '.'){
			ora++;
			//oraciones[i] = '.';
			parrafos[i] = '.';
		}
		else if(texto[i] == '*'){
			parrafos[i] = '\n';
			//oraciones[i] = '\n';
			parra++;			
			oxp[op] = ora;
			op++;
			ora = 0;
		}		
	}
	//limpiando parrafos del - por espacios vacios
	for(i = 0; i < p; i++){
		if(parrafos[i] == '-'){
			parrafos[i] = ' ';
		}
	}
	//limpiando oraciones del - por espacios vacios
	/*
	for(i = 0; i < p; i++){
		if(oraciones[i] == '-'){
			oraciones[i] = ' ';
		}
	}
	*/
	printf("\nLa cantidad de parrafos son %d\n", parra);
	
	for(i = 0; i < 20; i++){
		sum+=oxp[i];
	}
	printf("\nLa cantidad de oraciones son %d\n\n", sum);
	
	for(i = 0; i < 20; i++){
		if(oxp[i] != 0){
			printf("El Parrafo N° %d tiene %d oraciones\n",i+1,oxp[i]);
		}
	}
	
	return 0;
}

