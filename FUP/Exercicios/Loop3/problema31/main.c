#include <stdio.h>

void count();

int main(){
    count();
}

void count(){
    float numerador = 1;
    float denominador = 1;
    float s = 0;
    while (numerador < 99 && denominador < 50){
        s+= numerador/denominador;
        numerador+=2;
        denominador++;
    }
    printf("O valor de S: %.2f", s);
    
}

