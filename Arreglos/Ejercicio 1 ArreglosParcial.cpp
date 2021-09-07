#include <stdio.h>
#define MAX 20
int insertar(int a[MAX], int f[MAX],int n, int m);
int eliminar(int b[MAX], int newMatriz[MAX], int k, int l);
int buscar(int c[], int s);
int ordenar(int d[MAX], int matrizOrdenada[MAX]);
void mostrarArregloInv(int x[]);
void mostrarArreglo(int x[]);
void titulo();
int main(int argc, char *argv[]) {
	
	int numero, i, select, preg, cant, repetido;
	int array[MAX] = {'\0'};
	int arreglo[MAX] = {'\0'};
	char continuar, fin;	
	
	
	do{
		titulo();
		printf("Desea trabajar con el maximo de posiciones? <s/n>: ");
		scanf(" %s", &continuar);
		if(continuar == 's' || continuar == 'S'){
			cant = MAX;
			for(i = 0; i < MAX; i++){
				printf("Ingrese los numeros: ");
				scanf("%d", &arreglo[i]);
			}
			i=0;
			do{
				printf("\nIngrese la operacion que desea: ");
				scanf("%d", &select);
				if(select<6 && select>0){
					break;
				}
				else printf("\nOpcion erronea, por favor reintente\n");
				i++;
				if(i==3){
					printf("Demasiados intentos fallidos");
					return 0;
				}
			}
			while(i<3);
		}
		else{
			
			i=0;
			do{
				printf("Cuantos numeros desea cargar?: ");
				scanf("%d", &preg);
				cant = preg;
				if(preg>1 && preg<21){
					for(i = 0; i < preg; i++){
						printf("Ingrese los numeros: ");
						scanf("%d", &arreglo[i]);
					}
					break;
				}
				else printf("Cantidad de posiciones invalidas, reintente\n");
				i++;
				if(i==3){
					printf("Demasiados intentos fallidos");
					return 0;
				}
			}
			while(i<3);
			
			i=0;
			do{
				printf("\nIngrese la operacion que desea: ");
				scanf("%d", &select);
				if(select<6 && select>0){
					break;
				}
				else printf("\nOpcion erronea, por favor reintente\n");
				i++;
				if(i==3){
					printf("Demasiados intentos fallidos");
					return 0;
				}
			}
			while(i<3);
		}	
		
		switch(select){
		case 1: 
			printf("\n=========================\n");
			printf("||OPERACION DE INSERTAR||\n");
			printf("=========================\n\n");
			printf("Ingrese el numero a insertar: ");
			scanf("%d", &numero);
			if((array[MAX] = insertar(arreglo, array, MAX, numero)) == -1){
				printf("Arreglo lleno\n");
			}
			else{
				printf("El arreglo generado compone los siguientes elementos\n");
				mostrarArreglo(array);
			}		
			break;
		case 2:
			printf("\n=========================\n");
			printf("||OPERACION DE ELIMINAR||\n");
			printf("=========================\n");
			printf("Ingrese el numero que desea eliminar: ");
			scanf("%d", &numero);
			array[MAX] = eliminar(arreglo, array, cant, numero);
			printf("El arreglo generado compone los siguientes elementos\n");
			mostrarArreglo(array);
			break;
		case 3:
			printf("\n=======================\n");
			printf("||OPERACION DE BUSCAR||\n");
			printf("=======================\n");
			printf("Ingrese el numero a buscar: ");
			scanf("%d", &numero);
			//array [MAX]= ordenar(arreglo, array);
			if((repetido = buscar(arreglo, numero)) != -1){
				printf("\nEl elemento %d se encuentra %d veces en el arreglo", numero, repetido);
			}
			else printf("\nEl elemento %d no se encuentra dentro del arreglo", numero);
			printf("\nEl arreglo generado compone los siguientes elementos\n");
			mostrarArreglo(arreglo);
			break;
		case 4:
			printf("\n=============================\n");
			printf("||OPERACION DE ORDENAMIENTO||\n");
			printf("=============================\n");
			printf("Arreglo ordenado de menor a MAYOR\n");
			array[MAX] = ordenar(arreglo, array);
			mostrarArreglo(array);
			break;
		case 5:
			printf("\n=============================\n");
			printf("||OPERACION DE ORDENAMIENTO||\n");
			printf("=============================\n");
			printf("Arreglo ordenado de MAYOR a menor\n");
			array[MAX] = ordenar(arreglo, array);
			mostrarArregloInv(array);
			break;
		default: printf("La opcion %d no es valida",select);
		}
		array[MAX] = {'\0'};
		arreglo[MAX] = {'\0'};
		printf("\nDesea volver a intentarlo? <s/n>: ");
		scanf(" %c",&fin);
	}
	while(fin == 's' || fin == 'S');
	return 0;
}
void mostrarArreglo(int x[]){
	for(int c = 0; c < MAX; c++){
		if(x[c] != 0){
			printf("Pos %d => %d\n",c,x[c]);
		}
	}
}
void mostrarArregloInv(int x[]){
	for(int c = MAX-1; c >=0; c--){
		if(x[c] != 0){
			printf(" %d -", x[c]);
		}
	}
}
int insertar(int a[MAX], int f[MAX], int n, int m){
	
	int i, pos2, num, posi;
	int cont = 0, cont2 = 0;
	char s;
	int rep[MAX] = {'\0'};
	for(i = 0; i < n; i++){
		if(a[i] != 0){
			f[i] = a[i];
			cont++;
		}
		else f[i] = 0;
	}
	if(cont == 20){
		printf("Todas las posiciones estan ocupadas\n");
		printf("Desea sobrescribir algun numero? <s/n>: ");
		scanf(" %c", &s);
		if(s == 's' || s == 'S'){
			printf("Ingrese que numero del arreglo que desea reemplazar: ");
			scanf("%d", &num);
			for(i = 0; i < n; i++){
				if(a[i] == num){
					rep[i] = 1;
					cont2++;
				}
			}
			if(cont>1){
				printf("El numero %d se encuentra en las posiciones:\n",num);
				for(i = 0; i < n; i++){
					if(rep[i] == 1){
						printf("Pos %d ==> %d\n",i, a[i]);
					}
				}
				printf("Que posicion desea sobrescribir?: ");
				scanf("%d", &posi);
				f[posi] = m;
			}
			else{
				for(i = 0; i < n; i++){
					if(a[i] == num){
						f[i] = m;
					}
				}
			}
		}
		else return -1;
	}
	else{
		printf("Las posiciones vacias son\n");
		for(i = 0; i < n; i++){
			if(f[i] == 0){
				printf("Pos => %d vacia\n",i);
			}
		}
		printf("En que posicion desea insertar su numero?: ");
		scanf("%d", &pos2);
		f[pos2] = m;
	}
	return f[MAX];
}
int eliminar(int b[MAX], int newMatriz[MAX], int k, int l){
	int i, cont = 0, pos;
	int posiciones[MAX];
	
	for(i = 0; i < k; i++){
		if(b[i] == l){
			posiciones[i] = 1;
			newMatriz[i] = b[i];
			cont++;
		}
		else newMatriz[i] = b[i];
	}
	if(cont>0){
		printf("El elemento %d se encuentra repetido en las posiciones\n",l);
		for(i = 0; i < k; i++){
			if(posiciones[i] == 1){
				printf("=> %d\n",i);
			}
		}
		printf("Que posicion desea eliminar?: ");
		scanf("%d", &pos);
		for(i = pos; i < k; i++){
			newMatriz[i] = newMatriz[i+1];
		}
		return newMatriz[MAX];
	}
	else printf("\nEl elemento %d no esta dentro del arreglo\n",l);
	return newMatriz[MAX];
}
int buscar(int c[], int s){
	int i, cont = 0;
	i=0;
	while(i<MAX){
		if(c[i] == s){
			cont++;
		}
		i++;
	}
	if(cont>0){
		return cont;
	}
	else return -1;
}
int ordenar(int d[MAX], int matrizOrdenada[MAX]){
	int i, pos, aux;
	
	for(i = 0; i < MAX; i++){
		pos = i;
		aux = d[i];
		matrizOrdenada[i] = d[i];
		while((pos>0) && (d[pos-1] > aux)){
			d[pos] = d[pos-1];
			matrizOrdenada[pos] = d[pos-1];
			pos--;
		}
		d[pos] = aux;
		matrizOrdenada [pos]= aux;
	}
	return d[MAX];
}

void titulo(){
	printf("===========================================================================\n");
	printf("|| Este programa realiza las siguientes operaciones dentro de un arreglo ||\n");
	printf("===========================================================================\n\n");
	printf("=> 1: INSERTAR\n");
	printf("=> 2: ELIMINAR\n");
	printf("=> 3: BUSCAR\n");
	printf("=> 4: ORDENAR MENOR A MAYOR\n");
	printf("=> 5: ORDENAR MAYOR A MENOR\n\n");
	printf("*****************************************************\n");
	printf("** EL ARREGLO CUENTA CON 20 POSICIONES COMO MAXIMO **\n");
	printf("*****************************************************\n");
	printf("SE TOMARA EL VALOR 0 COMO POSICION VACIA\n\n");
}
