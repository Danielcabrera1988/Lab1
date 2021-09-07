/*Escribir un bucle que calcule la suma de cada tercer entero, comenzando por i=2 (es decir, calcular la suma de 2 + 5 + 8 +
11 + ….. ) para todos los valores de i menores que 100. Usar la sentencia switch para seleccionar el tipo de bucle a
utilizar para realizar el cálculo:
a) Utilizando una instrucción while.
b) Utilizando una instrucción do - while.
c) Utilizando una instrucción for.*/

#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	
	//a=1 while
	//b=2 do - while
	//c=3 for
	
	int i=2, j=0, select;
	
	printf("Selecione el bucle que desea 1=while 2=Do While 3=For: ");
	scanf("%d",&select);
	
	switch(select){
		
	case 1 : printf("Los numeros a sumar son:\n");
		while(i<100)		
	{
		printf("%d\n",i);//imprime los valores de la iteracion i
		j=j+i;//suma el valor de las iteraciones de i
		i+=3;//aumenta i en +3
	}			
			printf("El total de la suma de cada tercer entero con While %d\n",j);
	break;
	
	case 2 : printf("Los numeros a sumar son:\n");
	do
	{
		printf("%d\n",i);//imprime los valores de la iteracion i
		j=j+i;//suma el valor de las iteraciones de i
		i+=3;//aumenta i en +3
	}
	while(i<100);
	
	printf("El total de la suma de cada tercer entero con Do While %d\n",j);
	break;
	
	case 3 : printf("Los numeros a sumar son:\n");
		for(i=2 ; i<100 ; i=i+3)
	{
		printf("%d\n",i);//imprime los valores de la iteracion i
		j=j+i;//suma el valor de las iteraciones de i
	}
	printf("El total de la suma de cada tercer entero con For %d\n",j);
	break;
	
	default : printf("Ese valor no corresponde a un bucle asociado");
	}
	getch();
	return 0;
}

