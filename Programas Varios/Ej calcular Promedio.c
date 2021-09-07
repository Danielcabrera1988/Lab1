#include<stdio.h>
#include<conio.h>

int main()
{
	float n1, n2, n3, promedio;
	
	printf("Ingrese 1 nota: ");
	scanf("%f", &n1);
	printf("\nIngrese 2 nota: ");
	scanf("%f", &n2);
	printf("\nIngrese 3 nota: ");
	scanf("%f", &n3);
	
	promedio = (n1 + n2 + n3) / 3;
	
	printf("\nEl alumno esta ");
		
		if (promedio >= 7)
			printf("promocionado...");	
		else 
			if (promedio >= 4) printf("regular...");		
			else printf("desaprobado...");		
		
	getch();
return 0;
}
