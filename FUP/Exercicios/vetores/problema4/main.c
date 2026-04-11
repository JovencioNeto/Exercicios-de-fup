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
    
    int ordenado = 1; 

    for(int i = 0; i < n - 1; i++){
        if(vetor[i] > vetor[i + 1]){
            ordenado = 0;
            break;
        }
    }

    if(ordenado){
        printf("O vetor esta em ordem crescente\n");
    } else {
        printf("O vetor NAO esta em ordem crescente\n");
    }
    return 0;
}