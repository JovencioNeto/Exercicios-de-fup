#include <stdio.h>

void verify(int num1,int num2){
    if(num1 > num2 || num2 > num1){
        int maior = num1;
        if(num2 > num1){
            maior = num2;
        }
        printf("O maior numero e: %d",maior);
    } else {
        printf("Os numeros sao iguais");
    }
}

int main() {
    int num1,num2;
    printf("Digite um numero: ");
    scanf("%d",&num1);
    printf("Digite outro numero: ");
    scanf("%d",&num2);

    verify(num1,num2);

    return 0;
}