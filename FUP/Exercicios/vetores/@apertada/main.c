#include <stdio.h>

int main(){
    int n;
    int menor;

    scanf("%d", &menor);

    for(int i = 0; i < 5; i++){
        scanf("%d", &n);

        if (n < menor){
            menor = n;
        }
    }

    printf("%d\n", menor);

    return 0;
}