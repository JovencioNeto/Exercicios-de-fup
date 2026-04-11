#include <stdio.h>

int main(){
    int vetor[5];

    for (int i = 0;i < 5; i++){
        printf("Digite um valor para atribuir ao vetor: ");
        scanf("%d", &vetor[i]);
    }

    for (int i = 4; i >= 0 ; i--){
        printf("A[%d] = %d \n", i, vetor[i]);
    }
    
    return 0;
}