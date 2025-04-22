#include <stdio.h>

int main(){
    int num1;
    int num2;
    int num3;

    printf("Escolha 3 numeros inteiros para que eles sejam apresentados em forma crescente e em forma decrescente\n");

    printf("1 Numero: ");
    scanf("%d", &num1);

    printf("2 Numero: ");
    scanf("%d", &num2);

    printf("3 Numero: ");
    scanf("%d", &num3);

    printf("Os 3 Numeros selecionados foram: %d, %d, %d\n", num1, num2, num3);

    if(num1 >= num2 && num2 >= num3){
        printf("Decrescente: %d, %d, %d\n", num1, num2, num3);
        printf("Crescente: %d, %d, %d", num3, num2, num1);
    }
    else if(num1 >= num2 && num3 >= num2){
        printf("Decrescente: %d, %d, %d\n", num1, num3, num2);
        printf("Crescente: %d, %d, %d\n", num2, num3, num1);
    }
    else if(num2 >= num1 && num1 >= num3){
        printf("Decrescente: %d, %d, %d\n", num2, num1, num3);
        printf("Crescente: %d, %d, %d", num3, num1, num2);
    }
    else if(num2 >= num1 && num3 >= num1){
        printf("Decrescente: %d, %d, %d\n", num2, num3, num1);
        printf("Crescente: %d, %d, %d", num1, num3, num2);
    }
    else if(num3 >= num1 && num1 >= num2){
        printf("Decrescente: %d, %d, %d\n", num3, num1, num2);
        printf("Crescente: %d, %d, %d", num2, num1, num3);
    }
    else if(num3 >= num1 && num2 >= num1){
        printf("Decrescente: %d, %d, %d\n", num3, num2, num1);
        printf("Crescente: %d, %d, %d", num1, num2, num3);
    }
}
