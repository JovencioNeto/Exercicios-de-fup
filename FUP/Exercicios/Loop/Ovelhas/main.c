#include <stdio.h>

void countSheep(int sheep);

int main(){
    int sheep;

    scanf("%d", &sheep);

    if (sheep >= 1){
        countSheep(sheep);
    } else{
        printf("Nao tem ovelhas");
    }

    return 0;
}

void countSheep(int sheep){
    int i = 2;

    printf("1 ovelha\n");   
    sheep--;
    while (sheep > 0){
        printf("%d ovelhas\n", i);
        sheep--;
        i++;
    }
}