#include <stdio.h>

int main(){
    int vetor[100];
    int n, i;
    printf("Quantidade: ");
    scanf("%d", &n);
    printf("Digite a sequencia de numeros : \n");
    i = 0;
    while (i < n){
        scanf("%d", &vetor[i]);
        i++;
    }
    
    printf("Sequencia digitada: \n");
    i= 0;
    while (i<n){
        printf("v[%d] = %d \n", i,vetor[i]);
        i++;
    }

    return 0;
    
}