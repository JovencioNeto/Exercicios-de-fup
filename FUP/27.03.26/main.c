#include <stdio.h>

int main (){
    int n, el, soma = 0;
    float media;
    int count = 0;
    int max = 0;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);
    int i = 0;
    while (i<n){
        printf("Digite o elemento: ");
        scanf("%d", &el);
        soma = soma + el;
        i++;
        
        if(el > max){
            max = el;
        }
        if(el ==0){
            count++;
        }
        
    }
    media = (float)soma / n;
    printf("Soma: %d\n", soma);
    printf("Media: %.2f\n", media);
    printf("Maior numero : %d\n", max);
    printf("Contador de zeros: %d", count);
}