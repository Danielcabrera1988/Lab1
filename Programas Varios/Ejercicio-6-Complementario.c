#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	int dia = 1, semana = 7, diaMax, diaMin; 
	float cantidadAgua, maxAgua = 0, minAgua = 1000, 
		promedioAgua, aguaTotal;
	
	while(semana >= dia){
		printf("Ingrese la cantidad de agua caida el dia %d: \n",dia);
		scanf("%f", &cantidadAgua);
		printf("El dia %d llovio %0.2f mm \n",dia,cantidadAgua);
		if(cantidadAgua > maxAgua){
			maxAgua = cantidadAgua;
			diaMax = dia;
		}
		
		if(cantidadAgua < minAgua){
			minAgua = cantidadAgua;
			diaMin = dia;
		}
		dia ++;
		aguaTotal += cantidadAgua; 
	}
	promedioAgua = aguaTotal / 7;
	printf("El dia que mas llovio fue el dia %d: " 
		   "lloviendo %0.2f mm \n",diaMax,maxAgua);
	printf("El dia que menos llovio fue el dia %d: "
		   "lloviendo %0.2f mm \n",diaMin,minAgua);
	printf("El promedio es: %0.2f ",promedioAgua);
	return 0;
}

