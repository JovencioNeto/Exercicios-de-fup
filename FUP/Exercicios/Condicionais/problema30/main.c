#include <stdio.h>

void verifyBiggestNumber(int num1, int num2, int num3);

int main() {
    int num1, num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    verifyBiggestNumber(num1, num2, num3);

    return 0;
}

void verifyBiggestNumber(int num1, int num2, int num3) {

    int biggestNumber = num1;
    
    if (num1 == num2 && num2 == num3) {
        printf("Os numeros sao iguais\n");
    }
    else if (num2 > biggestNumber && num2 > num3) {
        biggestNumber = num2;
    }
    else if (num3 > biggestNumber && num3 > num2) {
        biggestNumber = num3;
    }

    printf("O maior numero e: %d\n", biggestNumber);
}