#include <stdio.h>
#include <stdbool.h>

int main()
{
	//Variables
	int n1, n2, aux = 0, count = 0;
	double s1, s2;
	bool control = false;

	printf("--Bienvenido a la maquina multiplicadora--\n\n");
	
	//Control de ingreso de valores
	while (!control)
	{
		printf("Ingrese los numeros que desea multiplicar separados por un espacio.(Solo enteros)\n");
		scanf("%lf %lf", &s1, &s2);
		n1 = s1;
		n2 = s2;

		if (s1 - n1 > 0 || s2 - n2 > 0)
		{
			printf("Datos invalidos, intente nuevamente.\n");
		}
		else
		{
			control = true;
		}
		
	}
	
	//Algortimo que raliza la multiplicacion usando el operador suma
	while (count < n2)
	{
		aux += n1;
		count++;
	}

	printf("El resultado es: %i\n\n", aux);

	
	return 0;
}
