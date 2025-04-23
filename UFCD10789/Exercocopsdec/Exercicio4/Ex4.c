#include <stdio.h>

int main(){
    int saldo;
    int cheque;
    int desconto;

    printf("Insira o seu saldo aqui: ");
    scanf("%d", &saldo);

    printf("Insira o valor do seu cheque aqui: ");
    scanf("%d", &cheque);

    desconto = saldo - cheque;

    if(cheque <= saldo){
        printf("Foi poss�vel realizar o desconto no cheque, ficou com o valor de %d como o seu saldo atual", desconto);
    }
    else if(cheque > saldo){
        printf("N�o � poss�vel realizar o desconto no cheque pois o valor do cheque � superior ao seu saldo atual");
    }
}
