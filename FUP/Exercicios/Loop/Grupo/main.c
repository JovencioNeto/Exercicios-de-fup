#include <stdio.h>

void verifyGroup(int quantity);

int main(){
    int quantity;

    scanf("%d", &quantity);

    verifyGroup(quantity);
    
    return 0;
}

void verifyGroup(int quantity){
    int i = 0;
    int age;
    int adult = 0;

    while (i< quantity){
        scanf("%d", &age);

        if (age >= 18){
            adult= 1;
            break;
        }
        
        i ++;
    }
    
    if (adult){
        printf("Apto\n");
    }else{
        printf("Inapto\n");
    }
    
}