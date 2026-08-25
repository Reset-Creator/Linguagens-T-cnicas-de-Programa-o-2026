#include <stdio.h>
#include <stdlib.h>

/*

int main(int argc, char *argv[]) {

    int a, b, c;
    int resultado;
    
    printf("Insira os valores A, B, C: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a>b){
       resultado = a;
	   }
	else{
	   resultado = b;
	}
	
	if (c>resultado){
		resultado = c;
	}
	
	printf("%d eh o maior", resultado);
	
	return 0;
}
*/

int main(int argc, char *argv[]) {
	
	int a;
    int r;
    
    printf("selecione o seu numero: ");
    scanf("%d", &a);
    
    if (a>=0){
    	r = a*-1;
	}
    else{
    	r = a*a;}
	    printf("%d", r);
    return 0;
}
