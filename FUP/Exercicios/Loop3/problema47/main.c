#include <stdio.h>

void bancoStart(int op);
void adicao();
void subtracao();
void multiplicacao();
void divisao();

int main(){
    int op = -1;
    bancoStart(op);
    return 0;
}

void bancoStart(int op){
    while (op != 5){
        printf("\nBem vindo ao banco!\n");
        printf("[1] - Adicao\n");
        printf("[2] - Subtracao\n");
        printf("[3] - Multiplicacao\n");
        printf("[4] - Divisao\n");
        printf("[5] - Sair\n");
        printf("Escolha a opcao: ");
        scanf("%d", &op);

        if(op == 1){
            adicao();
        }else if(op == 2){
            subtracao();
        }else if(op == 3){
            multiplicacao();
        }else if(op == 4){
            divisao();
        }else if(op == 5){
            printf("Programa encerrado.\n");
        }else{
            printf("Opcao invalida!\n");
        }
    }
}

void adicao(){
    float num1, num2;
    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite outro numero: ");
    scanf("%f", &num2);

    float sum = num1 + num2;
    printf("Resultado: %.2f\n", sum);
}

void subtracao(){
    float num1, num2;
    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite outro numero: ");
    scanf("%f", &num2);

    float sub = num1 - num2;
    printf("Resultado: %.2f\n", sub);
}

void multiplicacao(){
    float num1, num2;
    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite outro numero: ");
    scanf("%f", &num2);

    float mult = num1 * num2;
    printf("Resultado: %.2f\n", mult);
}

void divisao(){
    float num1, num2;
    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite outro numero: ");
    scanf("%f", &num2);

    if(num2 != 0){
        float div = num1 / num2;
        printf("Resultado: %.2f\n", div);
    }else{
        printf("Erro: divisao por zero!\n");
    }
}