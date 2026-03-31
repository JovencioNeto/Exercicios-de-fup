#include <stdio.h>

void count (int n);

int main() {
    int n;
    scanf("%d", &n);
    count(n);
    return 0;
}

void count (int n) {
    int i = 1;
    while (i <= n)
    {
        printf("i: %d\n", i);
        i++;
        sleep(1);
    }
    
}