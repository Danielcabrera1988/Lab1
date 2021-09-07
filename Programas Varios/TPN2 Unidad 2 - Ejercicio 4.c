#include <stdio.h>

int main() {
	
	int i=10, j=5, k=-2;
	char c1='w', c2='?';
	
	a = (i<10) && (j==5);//false porque a=10 y no menor.
	b = (i<=10) && (j==5);//true
	c = !(k>3);//true
	d = (k!=3) || (c1=='w');// si fuese && seria true, pero al ser || es false

	
	return 0;
}

