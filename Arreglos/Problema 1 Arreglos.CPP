#include <stdio.h>

int main(int argc, char *argv[]) {
	
	const int arreglo[10]={1,2,3,4,5,6,7,8,9,10};
	int acum = 0;
	int i, mayor=0, menor=0, pos, valor, promedio, prom;
	int flag = false;
	
	printf("Los valores dentro del arreglo son ");
	for(i=0; i<10 ; i++){
		printf("--%d", arreglo[i]);
		acum = acum + arreglo[i];
	}
	printf("\n\nLa suma de los valores del arreglo son %d", acum);
	
	promedio = acum/10;
	prom = promedio/2;
	
	for(i=0; i<10 ;i++){
		if(arreglo[i]>prom){
			mayor++;
		}
		else menor++;
	}
	printf("\n\nLos elementos que son mayor a la mitad del promedio son %d ", mayor);
	printf("\n\nLos elementos que son menores a la mitad del promedio son %d\n", menor);
	printf("\nIngrese una posicion para ver el valor del arreglo: ");
	scanf("%d", &pos);
	printf("El elemento que se encuentra en la posicion %d es el valor %d", pos, arreglo[pos]);
	printf("\n\nIngrese un 'valor' para comprobar si está en el arreglo: ");
	scanf("%d", &valor);
	
	i=0;
	while(i<10 && flag == false){
		if(arreglo[i] == valor){
			flag = true;
		}
		i++;
	}
	if(flag == true){
		printf("El valor %d está dentro del arreglo", valor);
	}
	else{
		printf("El valor %d no está dentro del arreglo", valor);	
	}
	return 0;
}
