#include <stdio.h>

int mcd(int a, int b);

int main(int argc, char *argv[]) {
	
	int x, y, res;
	printf("Ingrese un valor: ");
	scanf("%d", &x);
	printf("ingrese otro valor: ");
	scanf("%d", &y);
	
	
	if(y > x){
		res = mcd(y, x);
	}
	else{
		res = mcd(x, y);
	}
	printf("El MCD de %d y %d es %d",x , y, res); 

	return 0;
}

int mcd (int a, int b){
	
	if(b == 0)
		return a;
	else return mcd (b, a % b);
}
