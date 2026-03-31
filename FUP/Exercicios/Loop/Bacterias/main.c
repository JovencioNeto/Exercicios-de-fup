#include <stdio.h>

void bactery(int quantityofBactery, int days);

int main(){
    int quantityOfBactery,days;

    scanf("%d %d", &quantityOfBactery, &days);

    bactery(quantityOfBactery,days);
    return 0;
}

void bactery(int quantityofBactery, int days){
    int i = 0;
    int day = 1;
    while (i < days){
        printf("Dia %d: %d bacteria(s)\n", day, quantityofBactery);
        i++;
        day++;
        quantityofBactery*=2;
    }
}