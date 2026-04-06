#include <stdio.h>

void conjecturaDeCollatz(int num1);

int main(){
    int num1;
    scanf("%d", &num1);
    conjecturaDeCollatz(num1);
    return 0;
}

void conjecturaDeCollatz(int num1){
    int i = 0;
    while (num1 >= 1){
        printf("%d\n", num1);
        if (num1 == 1){
            break;
        }
        if (num1 % 2 == 0){
            num1 = num1/2;
        }else{
            num1 = (num1*3)  + 1;
        }
        i++;
    }
    printf("passos: %d\n", i);
    
}