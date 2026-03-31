#include <stdio.h>

void verify(int year);

int main() {
    int year;
    printf("Digite um ano: ");
    scanf("%d",&year);

    verify(year);

    return 0;
}

void verify(int year){
    if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))){
        printf("O ano e um ano bissexto.");
    }else{
        printf("O ano nao e um ano bissexto.");
    }
}
