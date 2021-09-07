#include <stdio.h>
#include <conio.h>
int main () 
{ 
	float precio_libro, precio_neto; 
	float descuento; 
	int cod_cliente;
	
	printf("Introduzca el precio del libro:\n"); 
	scanf("%f", &precio_libro); 
	printf("Introduzca el código del cliente:\n"); 
	scanf("%d", &cod_cliente); 
	
	switch (cod_cliente) {
	
		case 1 : /* Clientes registrados */ 
		descuento = 0.1; 
		precio_neto = precio_libro - (precio_libro * descuento); 
		break; 
					  
		case 2 : /* Mayoristas */ 
		descuento = 0.15; 
		precio_neto = precio_libro - (precio_libro * descuento); 
		break; 
					  
		case 3: /* Empleados de la empresa */ 
		descuento = 0.17; 
		precio_neto = precio_libro - (precio_libro * descuento); 
		break; 
					  
		default: /* Nuevos clientes */ 
		descuento = 0.05; 
		precio_neto = precio_libro - (precio_libro * descuento); 
		break; 
				  }  
				  
		printf("El precio neto del libro es %f\n", precio_neto); 
		getch();
		return 0;
}


