#include <stdio.h>

int main() {
    int numero;
    int pares = 0;
    int impares = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Insira o %dº número: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            pares++;
        }
        else {
            impares++;
        }
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d", impares);

    return 0;
}
