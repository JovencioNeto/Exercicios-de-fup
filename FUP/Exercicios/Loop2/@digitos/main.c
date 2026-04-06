#include <stdio.h>

void count(int num1, int num2);

int main(){
    int num1,num2;
    
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    count(num1, num2);
    
    return 0;
}

void count(int num1, int num2){
    int i = 0;

    if (num1 == 0 && num2 == 0){
        printf("1\n");
    }else{
        while (num2 != 0){
            int digit = num2 % 10;
                
            if (digit == num1){
                i++;
            }

            num2/=10;
         }

        printf("%d\n", i);
    }
    
}