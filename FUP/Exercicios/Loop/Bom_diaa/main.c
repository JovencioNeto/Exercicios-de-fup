#include <stdio.h>

void bom_dia(int n);

int main (){
    int n;
    scanf("%d", &n);
    bom_dia(n);
    return 0;
}

void bom_dia(int n){
    printf("bom di");
    while (n > 0)
    {
        printf("a");
        n--;
    }
    printf("!\n");
}