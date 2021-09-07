#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define a "d:/alumnos.dat"

struct registro {
	int dni;
	char nombre[20];
	char apellido[20];
	float nota;
};
void inicio();
void lista();
int main(int argc, char *argv[]) {
	
	FILE *archivo;
	struct registro reg;
	char seguir, signo = '%';
	bool flag = false;
	int i, tAlumnos = 0, notaBaja = 0, notaAlta = 0;
	int notas[10] = {'\0'}, mayor = 0, menor = 0, acum = 0;
	float promGeneral = 0;
	
	//creacion del archivo
	if((archivo = fopen(a,"wb")) != NULL){
		
		inicio();
		i=0;
		do{
			tAlumnos = tAlumnos+1;
			printf("[%d]-Ingrese el DNI: ",i+1);
			scanf("%d", &reg.dni);
			printf("[%d]-Ingrese el Apellido: ",i+1);
			scanf("%s", &reg.apellido);
			printf("[%d]-Ingrese el Nombre: ",i+1);
			scanf("%s", &reg.nombre);			
			printf("[%d]-Ingrese la Nota: ",i+1);
			scanf("%f", &reg.nota);
			notas[i] = reg.nota;
			promGeneral = promGeneral + reg.nota;
			fwrite(&reg, sizeof(reg), 1, archivo);			
			printf("Desea terminar de cargar alumnos? s/n: ");
			scanf(" %c", &seguir);
			i++;
		}while(seguir != 's');
		fclose(archivo);	
	}
	
	//calculo de nota mas alta y mas baja
	for(i = 0; i < tAlumnos; i++){
		if(flag == false){
			notaAlta = notas[i];
			notaBaja = notas[i];
			flag = true;
		}
		else if(notas[i]>notaAlta){
			notaAlta = notas[i];
		}
		else if(notas[i]<notaBaja){
			notaBaja = notas[i];
		}
	}
	
	//calculo de cantidad de alumnos con nota mayor e igual a 6 y menor a 6
	for(i = 0; i < tAlumnos; i++){
		if(notas[i] >= 6){
			mayor++;
		}
		else if(notas[i] < 6){
			menor++;
			acum +=notas[i];
		}
	}
	
	//muestra el archivo creado anteriormente
	lista();
	archivo = fopen(a,"rb");
	fread(&reg, sizeof(reg), 1, archivo);
	while (!feof(archivo)){
		
		printf("%d    ", reg.dni);
		printf("%s       ", reg.apellido);
		printf("%s     ", reg.nombre);
		printf("%.2f\n", reg.nota);
		fread(&reg, sizeof(reg), 1, archivo);
		
	}
	fclose(archivo);
	
	//calculos aux	
	acum = acum/menor;
	promGeneral = promGeneral/tAlumnos;
	
	printf("\n\nEl total de alumnos es %d\n",tAlumnos);
	printf("El alumno con la nota mas alta fue de %d\n",notaAlta);
	printf("El alumno con la nota mas baja fue de %d\n",notaBaja);	
	printf("El promedio general de los alumnos es %.2f\n",promGeneral);
	printf("La cantidad de alumnos con nota mayor e igual a 6 son %d\n",mayor);
	printf("La cantidad de alumnos con nota menor a 6 son %d\n",menor);	
	mayor = (mayor*100)/tAlumnos;
	printf("El porcentaje de alumnos con nota mayor e igual a 6 es del %d%c\n", mayor,signo);	
	printf("El promedio de alumnos con nota menor a 6 es de %d\n",acum);
	
	return 0;
}
void inicio(){
	printf("Trabajo Practico de Archivos Ejercicio N° 5\n");
	printf("============================================\n");
	printf("|| Listado de alumnos con un maximo de 10 ||\n");
	printf("============================================\n");	
}
void lista(){
	printf("============================================\n");
	printf("||           LISTADO DE ALUMNOS           ||\n");
	printf("============================================\n");
	printf("   DNI      Apellido     Nombre      Nota\n");
}
