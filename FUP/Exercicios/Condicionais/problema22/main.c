#include <stdio.h>

void verify(int age,int time_of_service);

int main() {
    int age,time_of_service;
    printf("Digite sua idade: ");
    scanf("%d",&age);
    printf("Digite seu tempo de servico: ");
    scanf("%d",&time_of_service);

    verify(age,time_of_service);

    return 0;
}

void verify(int age,int time_of_service){
    if((age >=65)||(time_of_service >= 30) || ((age >=60) && (time_of_service >= 25))){
        printf("Voce pode se aposentar");
    } else {
        printf("Voce nao pode se aposentar");
    }
}
