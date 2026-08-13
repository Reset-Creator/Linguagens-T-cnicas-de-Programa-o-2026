#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int primeiro, segundo, aux;
	
	printf("Digite o primeiro Valor: ");
	scanf("%d", &primeiro);
	printf("Digite o segundo Valor: ");
	scanf("%d", &segundo);
	
	aux = primeiro;
	primeiro = segundo;
	segundo = aux;
	
	
	printf("Seus resultados Foram: %d, %d", primeiro, segundo);
	
	return 0;
}
