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
        printf("Foi possovel realizar o desconto no cheque, ficou com o valor de %d como o seu saldo atual", desconto);
    }
    else if(cheque > saldo){
        printf("Nao e possivel realizar o desconto no cheque pois o valor do cheque e superior ao seu saldo atual");
        printf("Foi possível realizar o desconto no cheque, ficou com o valor de %d como o seu saldo atual", desconto);
    }
    else if(cheque > saldo){
        printf("Não é possível realizar o desconto no cheque pois o valor do cheque é superior ao seu saldo atual");
    }
}
