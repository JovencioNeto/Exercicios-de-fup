#include <stdio.h>

void verifyOldestSon(int ageMonica,int son1, int son2);

int main(){
    int ageMonica, son1,son2;

    scanf("%d", &ageMonica);
    scanf("%d", &son1);
    scanf("%d", &son2);
    verifyOldestSon(ageMonica,son1,son2);
    
    return 0;
}

void verifyOldestSon(int ageMonica,int son1, int son2){
    int son3 = ageMonica - (son1 + son2);
    int max = son1;
    if (son2 > max && son2 > son3)    {
        max = son2;
    }if (son3 > max && son3 > son2){
        max = son3;
    }

    printf("%d\n", max);
}

