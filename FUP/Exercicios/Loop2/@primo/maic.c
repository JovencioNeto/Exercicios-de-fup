#include <stdio.h>

void verifyNumberPrime(int num1);

int main(){
    int num1;
    scanf("%d", &num1);
    verifyNumberPrime(num1);
    return 0;
}

void verifyNumberPrime(int num1){
    int prime = 1;

    if (num1 <= 1) {
        prime = 0;
    } else {
        for(int i = 2; i < num1; i++){
            if (num1 % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    printf("%d\n", prime);
}