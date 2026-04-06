#include <stdio.h>

void evenNumber(int a, int b);

int main(){
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b){
        printf("invalido\n");
    }else{
        evenNumber(a,b);
    }
    
    return 0;
}

void evenNumber(int a, int b){
    int i = a;
    int sum = 0;

    while (i <=b){
        if(i % 2 == 0){
            sum+= i;
        }
        i++;
    }

    printf("%d\n", sum);
    
}