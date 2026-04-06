
#include <stdio.h>

void wall(int n);

int main(){
    int n;
    scanf("%d", &n);
    wall(n);
}

void wall(int n){
    int width, height, area = 0;
    int paintCans;
    while (n>0){
        scanf("%d %d", &width, &height);
        area= area + (width * height);
        n--;
    }
    paintCans = (area / 10) + 1;
    printf("%d\n", paintCans);

}