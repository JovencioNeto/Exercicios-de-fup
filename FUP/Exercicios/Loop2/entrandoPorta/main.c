#include <stdio.h>

void openDoor(int a, int b);

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    openDoor(a,b);
    return 0;
}

void openDoor(int a, int b){
    if(a==b){
        printf("fracasso\n");
    }else{
        printf("sucesso\n");
    }
}