#include <stdio.h>

void verify(int num);

int main() {
    int num1;
    printf("Digite um numero: ");
    scanf("%d", &num1);

    verify(num1);
    return 0;
}


void verify(int num) {
    if (num % 2 == 0) {
        printf("O numero %d e par\n", num);
    } else{
        printf("O numero %d e impar\n", num);
    }
}