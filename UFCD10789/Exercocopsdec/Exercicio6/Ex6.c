#include <stdio.h>

int main() {
    char nome[100];
    float valorcomp;
    float descontopercent;
    float valordesc;
    float total;

    printf("Insira o nome do cliente: ");
    scanf("%s", nome);

    printf("Insira o valor da compra (€): ");
    scanf("%f", &valorcomp);

    if (valorcomp <= 200.00) {
        descontopercent = 10;
    } else if (valorcomp <= 500.00) {
        descontopercent = 15;
    } else {
        descontopercent = 20;
    }

    valordesc = (descontopercent / 100) * valorcomp;
    total = valorcomp - valordesc;

    printf("Cliente: %s\n", nome);
    printf("Valor da compra: %.2f€\n", valorcomp);
    printf("Desconto aplicado: %.0f%%\n", descontopercent);
    printf("Valor do desconto: %.2f€\n", valordesc);
    printf("Valor total a pagar: %.2f€\n", total);

    return 0;
}
