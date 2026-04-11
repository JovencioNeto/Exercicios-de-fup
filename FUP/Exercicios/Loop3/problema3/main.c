#include <stdio.h>

void count();

int main(){
    count();
}

void count(){
    int i = 10;
    while (i>=0){
        printf("%d\n", i);
        i--;
    }
    
    printf("FIM!\n");
}

