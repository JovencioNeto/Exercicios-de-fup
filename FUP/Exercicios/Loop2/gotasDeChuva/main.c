#include <stdio.h>

void plingPlangPlong(int num);

int main(){
    int num;
    
    scanf("%d", &num);
    
    plingPlangPlong(num);
    
    return 0;
}

void plingPlangPlong(int num){
    int print = 0;

    if (num % 3 == 0){
        printf("Pling");
        print = 1;
    }if(num % 5 == 0){
        printf("Plang");
        print = 1;
    }if(num % 7 == 0){
        printf("Plong");
        print = 1;
    }if(!print){
        printf("%d", num);
    }
    printf("\n");
}