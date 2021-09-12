#include <stdio.h>
#include <string.h>
#include <stdbool.h>
struct alumnos{
	
	int edad;
	int dni;
	char nombre[40];
	char apellido[40];
};
int main(int argc, char *argv[]) {
	
	bool flag = true;
	int i, promedio = 0, total, promMenor, promMayor;
	int mayor, menor, menor2=0, mayor_Igual=0;
		
	struct alumnos alumnos[5];
	
	for(i = 0; i < 5 ; i++)	{
		
		total = i+1;
		printf("\nNombre del Estudiante: ");
		scanf(" %s", &alumnos[i].nombre);
		printf("\nApellido del Estudiante: ");
		scanf(" %s", &alumnos[i].apellido);
		printf("\nEdad del Estudiante: ");
		scanf("%d", &alumnos[i].edad);
		promedio+=alumnos[i].edad;
		printf("\nDNI del Estudiante: ");
		scanf("%d", &alumnos[i].dni);
		
	}
	printf("            Listado de Alumnos\n");
	printf("   DNI          APELLIDO       NOMBRE   AÑOS\n");
	for(i = 0; i < 5; i++){
		//printf(" Registro de Estudiantes : %d \n", i+1);
		printf("%d \t", alumnos[i].dni);
		printf("%s \t", alumnos[i].apellido);
		printf("%s \t", alumnos[i].nombre);
		printf(" %d", alumnos[i].edad);
		printf("\n");
	}
	
	printf("\nLos alumnos son %d en total\n", total);
	printf("El promedio de edad de los alumnos es %d\n",promedio/total);	
	
	for(i = 0; i < 5; i++){
		
		if(flag == true){
		mayor = alumnos[i].edad;
		menor = alumnos[i].edad;
		flag = false;
		}
		else if (alumnos[i].edad > mayor){
			mayor = alumnos[i].edad;
		}
		else if(alumnos[i].edad < menor){
			menor = alumnos[i].edad;
		}
	}	
	printf("El de mayor edad tiene %d\n\n",mayor);
	printf("El de menor edad tiene %d\n\n",menor);
	
	for(i = 0; i < 5; i++){
		if(alumnos[i].edad < 7){
			menor2++;
		}
		else if(alumnos[i].edad >=7){
			mayor_Igual++;
		}		
	}
	
	printf("\nLa cantidad de alumnos con promedio menor a 7 es ==> %d\n",menor2);
	printf("La cantida de alumnos con promedio de mayor o igual a 7 son %d",mayor_Igual);
	promMenor = (menor2*100)/total;
	promMayor = (mayor_Igual*100)/total;
	printf("\nEl porcentaje de alumnos con promedio menor a 7 es del %d",promMenor);
	printf("\nEl porcentaje de alumnos con promedio mayor o igual a 7 es del %d", promMayor);	
	
	return 0;
}
