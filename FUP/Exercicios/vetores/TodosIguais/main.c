#include <stdio.h>

int main(){
    int n;
    int soldiers = 0, doctors = 0;
    scanf("%d", &n);
    
    int vetor[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);

    }

    int soldiersAlone = 0;

    for(int i = 0; i < n; i++){
        if(vetor[i] == 0){ 

            int doctors = 0;

            if(i > 0 && vetor[i - 1] == 1){
                doctors = 1;
            }

            if(i < n - 1 && vetor[i + 1] == 1){
                doctors = 1;
            }

            if(!doctors){
                soldiersAlone++;
            }
        }
    }


    printf("%d\n", soldiersAlone);
    return 0;
}