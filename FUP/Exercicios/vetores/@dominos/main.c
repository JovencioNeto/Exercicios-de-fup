#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);
    
    int vetor[n];

    for(int i = 0; i < n; i++){
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
        printf("ok\n");
    } else {
        printf("precisa de ajuste\n");
    }
    return 0;
}