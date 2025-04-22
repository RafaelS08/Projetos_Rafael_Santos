#include <stdio.h>

int main() {
    float nota1;
    float nota2;
    float nota3;
    float media;

    printf("Insira a 1ª nota: ");
    scanf("%f", &nota1);

    printf("Insira a 2ª nota: ");
    scanf("%f", &nota2);

    printf("Insira a 3ª nota: ");
    scanf("%f", &nota3);

    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;

    printf("Média final: %.2f\n", media);

    if (media >= 6) {
        printf("APROVADO\n");
    }
    else {
        printf("REPROVADO\n");
    }

    return 0;
}
