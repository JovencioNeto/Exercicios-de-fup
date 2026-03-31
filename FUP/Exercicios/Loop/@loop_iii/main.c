#include <stdio.h>

void count(int num1, int num2);

int main (){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    count(num1, num2);
    return 0;
}

void count(int num1, int num2){
    printf("[");
    while (num1 > num2)
    {
        printf(" %d", num1);
        num1--;
    }

    printf(" ]\n");
    
}