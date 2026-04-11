#include <stdio.h>

int main(){
    int n;
    double media = 0;

    scanf("%d", &n);

    double vetor[n];

    for(int i = 0; i < n; i++){
        scanf("%lf", &vetor[i]);

        media+= vetor[i];
    }

    media/=n;

    printf("%.2lf\n", media);

    for(int i = 0;i <n; i++){
        if (i == n-1){
            if (vetor[i] < media){
                printf("P");
            }else if (vetor[i] == media){
                printf("M");
            }else{
                printf("G");
            }  
        }else{
            if (vetor[i] < media){
                printf("P ");
            }else if (vetor[i] == media){
                printf("M ");
            }else{
                printf("G ");
            }        
        }
    }

    printf("\n");
    return 0;
}