#include <stdio.h>

void verifyAge(int age);

int main() {
    int age;
    printf("Digite sua idade: ");
    scanf("%d", &age);
    verifyAge(age);
    return 0;
}

void verifyAge(int age) {
    if (age >= 5 && age <= 7) {
        printf("Categoria: Infantil A\n");
    } else if (age >= 8 && age <= 10) {
        printf("Categoria: Infantil B\n");
    } else if (age >= 11 && age <= 13) {
        printf("Categoria: Juvenil A\n");
    } else if (age >= 14 && age <= 17) {
        printf("Categoria: Juvenil B\n");
    } else if (age >= 18) {
        printf("Categoria: Senior\n");
    } else {
        printf("idade invalida.\n");
    }
}