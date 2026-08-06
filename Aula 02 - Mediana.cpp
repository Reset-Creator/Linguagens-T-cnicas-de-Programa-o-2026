#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	float resultado;
	
	a = 10;
	b = 10;
	c = 10;
	
	resultado = (a+b+c)/3;
	
	printf("Valor de A = %d\n", a);
	printf("Valor de B = %d\n", b);
	printf("Valor de C = %d\n", c);
	
	printf("Valor da Media da coisa e = %f\n", resultado);
	return 0;
}
