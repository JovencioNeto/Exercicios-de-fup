#include <stdio.h>

int main(){
    int n1,sum1 = 0;
    int n2,sum2 = 0;

    scanf("%d", &n1);
    
    int vetor1[n1];

    for(int i = 0; i < n1; i++){
        scanf("%d", &vetor1[i]);

        sum1+= vetor1[i];
    }
     
    scanf("%d", &n2);

    int vetor2[n2];

    for(int i = 0; i < n2; i++){
        scanf("%d", &vetor2[i]);
        sum2+= vetor2[i];
    }

    if(sum1 > sum2){
        printf("Vetor 1 ganha\n");
    }else if(sum2 > sum1){
        printf("Vetor 2 ganha\n");
    }else{
        printf("Empate\n");
    }

    return 0;
}