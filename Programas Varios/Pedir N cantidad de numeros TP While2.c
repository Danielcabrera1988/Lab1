#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main(int argc, char *argv[]) {
	
	int maximo;
	int minimo;
	int mami;
	int flag = TRUE;
	
	do
	{
		printf("INGRESE UN NUMERO: \"000\" FINALIZA EN INGRESO: ");
		scanf("%d", &mami);
		if(flag == TRUE)
		{
			maximo = mami;
			minimo = mami;
			flag = FALSE;
		}
		else
		{
			if(mami == 000)
			{
				break;
			}
			else
			{
				if(mami > maximo)
				{
					maximo = mami;
				}
				if(mami < minimo)
				{
					minimo = mami;
				}
			}
		}
	}
	while(mami!=000);
	
	printf("El maximo es %d y el minimo es %d", maximo, minimo);
	return 0;
}

