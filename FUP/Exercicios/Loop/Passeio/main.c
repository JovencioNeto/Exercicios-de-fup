#include <stdio.h>

void verifyGroup(int age1,int age2,int age3,int age4);

int main(){
    int age1,age2,age3,age4;

    scanf("%d %d %d %d", &age1, &age2,&age3,&age4);

    verifyGroup(age1,age2,age3,age4);
    return 0;
}

void verifyGroup(int age1,int age2,int age3,int age4){
    if (age1 >= 18 || age2 >= 18 || age3 >= 18 || age4 >= 18){
        printf("Apto\n");
    }else{
        printf("Inapto\n");
    }
    
}