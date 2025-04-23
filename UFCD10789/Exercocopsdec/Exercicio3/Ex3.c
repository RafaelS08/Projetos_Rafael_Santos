#include <stdio.h>

int main(){
    int num1;
    int num2;

    printf("Escolha o 1 numero: ");
    scanf("%d", &num1);
    printf("Escolha o 2 numero: ");
    scanf("%d", &num2);

    printf("Os 2 numeros selecionados foram: %d, %d\n", num1, num2);

    if(num1 > num2){
        printf("Por ordem crescente: %d, %d\n", num2, num1);
        printf("Por ordem decrescente: %d, %d\n", num1, num2);
    }
    else if(num2 > num1){
        printf("Por ordem crescente: %d, %d\n", num1, num2);
        printf("Por ordem decrescente: %d, %d", num2, num1);
    }

}
