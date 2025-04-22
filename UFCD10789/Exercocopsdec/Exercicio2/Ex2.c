#import <stdio.h>

int main(){
    int num1;
    int num2;
    int num3;

    printf("Diga 3 números para que possam ser analisados e informem o maior número e o menor: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int maior;

    if(num1 >= num2 && num1 >= num3){
        maior = num1;
        printf("\nO maior número é: %d", maior);
    }
    else if(num2 >= num1 && num2 >= num3){
        maior = num2;
        printf("\nO maior número é: %d", maior);
    }
    else{
        maior = num3;
        printf("\nO maior número é: %d", maior);
    }

    int menor;

    if(num1 <= num2 && num1 <= num3){
        menor = num1;
        printf("\nO menor numero e: %d", menor);
    }
    else if(num2 <= num1 && num2 <= num3){
        menor = num2;
        printf("\nO menor numero e: %d", menor);
    }
    else{
        menor = num3;
        printf("\nO menor numero e: %d", menor);
    }

    printf("\nO conjunto dos números selecionados são: %d, %d, %d", num1, num2, num3);
}
