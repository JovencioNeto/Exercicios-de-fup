#include <stdio.h>

void sky(int stone);

int main(){
    int stone;
    scanf("%d", &stone);
    sky(stone);
    return 0;
}

void sky(int stone){
    int i=0;
    printf("[ ");
    while (i<= 10){
        if (i == stone){
            i++;
        }else{
            if (i == 10){
                printf("ceu ");
                i++;
            }else{
                printf("%d ", i);
                i++;
            }
        }
    }
    printf("]\n");
}