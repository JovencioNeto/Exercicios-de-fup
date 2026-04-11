#include <stdio.h>

int main(){
    int n;

    printf("Digite uma quantidade para o vetor: ");
    scanf("%d", &n);

    int vetor[n];

    for(int i = 0; i < n; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    int maior = vetor[0];
    int menor = vetor[0];

    for(int i = 1; i < n; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }

        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }

    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    
    return 0;
}