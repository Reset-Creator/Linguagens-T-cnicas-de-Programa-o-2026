#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {		
	//area do trapézio descendente, bora buscar
	
	float a, B, b, h;
    	
	printf("Insira o valor de B: \n");
	scanf("%f", &B);
	
	printf("Insira o valor de b: \n");
	scanf("%f", &b);
	
	printf("Insira o valor de h: \n");
	scanf("%f", &h);
	
	a = h*B + h*b / 2;
	
	printf("a area do trapezio e: %f", a);
    return 0;
	
}

