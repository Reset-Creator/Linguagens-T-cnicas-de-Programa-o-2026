#include <stdio.h>
#include <stdlib.h>

int comp_maior(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main(int argc, char *argv[]) {
    int valores[10];
    int maior, i;

    printf("Digite 10 numeros inteiros:\n");

    for (i = 0; i < 10; i++) {
        printf("Valor [%d]: ", i + 1);
        scanf("%d", &valores[i]);
    }
    
    for (i = 1, maior = valores[0]; i < 10; i = i + 2) {
        int comp_temp = comp_maior(valores[i], valores[i + 1]);
        maior = comp_maior(maior, comp_temp);
    }

    printf("\nO maior valor digitado foi: %d\n", maior);

    return 0;
}
