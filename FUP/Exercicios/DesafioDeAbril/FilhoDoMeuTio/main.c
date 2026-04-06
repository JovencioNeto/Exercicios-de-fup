#include <stdio.h>

int main() {
    int n;
    int i = 2;
    int primo = 1;

    scanf("%d", &n);

    if (n <= 1) {
        primo = 0;
    } else {
        while (i * i <= n) {
            if (n % i == 0) {
                primo = 0;
                break;
            }
            i++;
        }
    }

    if (primo == 1) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }

    return 0;
}