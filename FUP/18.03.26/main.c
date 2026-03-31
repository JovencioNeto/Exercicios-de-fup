#include <stdio.h>

int verify(int x){
    if (x % 2 == 0) {
        printf ("O numero %d e par.\n", x);
    } else {
        printf ("O numero %d e impar.\n", x);
    }
    return 0;
}
int main() {
    int x;
    printf ("Digite um numero inteiro: ");
    scanf("%d", &x);
    
    verify(x);
    return 0;
}