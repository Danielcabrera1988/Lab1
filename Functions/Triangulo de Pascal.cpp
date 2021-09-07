#include <stdio.h>


int factorial(int n);
int pascal (int a, int b);

int main(int argc, char *argv[]) {
	
	
	int i, j, c;
	printf("ingrese las filas que desea ver del Triangulo de Pascal: ");
	scanf("%d", &c);
	
	
	for(i=0 ; i<=c ; i++){
		for(j=c-i ; j>=0 ; j--){
			printf(" ");
		}		
		for(j=0 ; j<=i ; j++){
			printf(" %d ", pascal(i, j));
		}
		printf("\n");
	}	
	return 0;
}
int factorial(int n){
	
	int res=1;
	for(int i=1; i<=n ; i++){
		res*=i;
	}
	return res;
}
int pascal (int a, int b){
	return factorial(a)/(factorial(b)*factorial(a-b));
}
