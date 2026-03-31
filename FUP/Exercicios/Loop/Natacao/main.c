#include <stdio.h>

void verifyAge(int age);

int main(){
    int age;

    scanf("%d", &age);

    verifyAge(age);

    return 0;
}

void verifyAge(int age){
    if(age <= 10){
       printf("Infantil\n");
    } else if(age >=11 && age <= 17){
        printf("Juvenil\n");
    } else if(age >= 18){
        printf("Adulto\n");
    }
}