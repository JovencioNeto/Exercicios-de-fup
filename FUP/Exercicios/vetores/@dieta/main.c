#include <stdio.h>

int main(){
    int n;
    float media = 0;

    scanf("%d", &n);

    float vetor[n];

    for(int i = 0; i < n; i++){
        scanf("%f", &vetor[i]);

        media+= vetor[i];
    }

    media/=n;

    printf("%.1f\n", media);

    return 0;
}