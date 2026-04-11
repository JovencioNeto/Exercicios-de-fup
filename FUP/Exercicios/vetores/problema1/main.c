#include <stdio.h>

int main(){
    int A[] = {1,0,5,-2,-5,7};
    int sum = 0;
    int num1, num2;

    for(int i = 0; i < 6; i++){
        printf("v[%d] = %d \n", i, A[i]);
    }

    sum = A[0] + A[1] + A[5];

    printf("O valor da soma A[0] + A[1] + A[5]: %d \n", sum);

    A[4] = 100;

    for(int i = 0; i < 6; i++){
        printf("v[%d] = %d \n", i, A[i]);
    }

    printf("Digite uma posicao ao lado esquerdo: ");
    scanf("%d", &num1);
    printf("Digite uma posicao ao lado direito: ");
    scanf("%d", &num2);

    int i = num1;

    if ( num1 >= 0 && num1 < 6 && num2 >= 0 && num2 <6){
        if (num1 <= num2){
            while (i <= num2){
                printf("v[%d] = %d \n", i, A[i]);
                i++;
            }
        }else{
            printf("O valor da esquerda precisa ser menor ou igual ao da direita \n");
        }
    } else{
        printf("O valor do lado esquerdo ou direito precisa estar entra 0 e 6 \n");
    }
    
}