#include <stdio.h>

int main() {
    float notas[10];
    float soma = 0;
    float media;
    int i;
    int acimadamedia = 0;

    for (i = 0; i < 10; i++){
        printf("Digite a nota do aluno %d (0 a 20): ", i + 1);
        scanf("%f", &notas[i]);
        if (notas[i] < 0 || notas[i] > 20) {
            printf("Nota inv�lida! Digite um valor entre 0 e 20.\n");
            }
        }
    while (notas[i] < 0 || notas[i] > 20){
        soma += notas[i];
    }

    media = soma / 10;

    for (i = 0; i < 10; i++) {
        if (notas[i] >= media) {
            acimaMedia++;
        }
    }

    printf("\nM�dia da turma: %.2f\n", media);
    printf("N�mero de alunos com nota igual ou acima da m�dia: %d\n", acimaMedia);

    return 0;
}
