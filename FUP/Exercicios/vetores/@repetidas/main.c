#include <stdio.h>

int main(){
    int n,modelRobot,robots;
    int countRobot = 0;

    scanf("%d", &modelRobot);
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &robots);

        if(robots == modelRobot){
            countRobot++;
        }
    }

    printf("%d\n", countRobot);

    return 0;
}