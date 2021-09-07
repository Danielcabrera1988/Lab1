#include <stdio.h>
#include <conio.h>



int main(int argc, char *argv[]) {
	
	int j=0, acum=0;
	int n;
	
	do{
		printf("Ingrese un numero entero: ");
		scanf("%d",&n);
		acum=acum+n;
		printf("Desea introducir otro numero? <s/n>\n");
		j++;
		
	}
	while(getch()=='s');
	
	printf("Ha introducido %d numero<s>.\n",j);
	printf("La suma de todos ellos es: %d\n",acum);
	
	getch();
	return 0;
}

