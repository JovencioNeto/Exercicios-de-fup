#include <stdio.h>

void bancoStart(int op, float saldo);
float depositar(float saldo);
float sacar(float saldo);
void verSaldo(float saldo);

int main(){
    int op = -1;
    float saldo = 0;
    int senha = 0;

    while (senha != 1234){
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha == 1234){
        bancoStart(op, saldo);
        }else{
            printf("Senha incorreta\n");
        }
    } 
}

void bancoStart(int op, float saldo){
        while (op != 0){
        printf("Bem vindo ao banco!\n");
        printf("[1] - Depositar\n");
        printf("[2] - Sacar\n");
        printf("[3] - Verificar Saldo\n");
        printf("[0] - Sair\n");
        printf("Escolha a opcao: ");
        scanf("%d", &op);
        if(op == 1){
            saldo = depositar(saldo);
        }else if(op == 2){
            saldo = sacar(saldo);
        }else if(op == 3){
            verSaldo(saldo);
        }else if (op == 0){
            printf("O programa foi encerrado, bye");
            break;
        }
        
    }
}

void verSaldo(float saldo){
    printf("Seu saldo: %.2f\n", saldo);
}

float depositar(float saldo){
    float deposito = 0;
    printf("Digite o valor a ser depositado: ");
    scanf("%f", &deposito);
    if (deposito> 0){
        printf("O valor depositado foi de: %.2f\n", deposito);
        saldo += deposito;
    }else{
        printf("O deposito precisa ser positivo\n");
    }

    return saldo;
}

float sacar(float saldo){
    float saque = 0;
    printf("Digite o valor a ser sacado: ");
    scanf("%f", &saque);

    if (saque> 0){
        if (saldo >= saque){
            printf("O valor sacado foi de: %.2f\n", saque);
            saldo-=saque;
        }else{
            printf("Saldo insuficientezn");
        } 
    }else{
        printf("O saque precia ser positivo\n");
    }
    
    return saldo;
}