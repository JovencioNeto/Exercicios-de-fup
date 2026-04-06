#include <stdio.h>

void approved(int nota1, int nota2, int notaFInal);

int main(){
    int nota1,nota2,notaFinal;
    scanf("%d", &nota1);
    scanf("%d", &nota2);
    scanf("%d", &notaFinal);
    approved(nota1,nota2,notaFinal);
    return 0;
}

void approved(int nota1, int nota2, int notaFInal){
    int average = (nota1 + nota2)/2;
    int averageFinal = (average + notaFInal)/2;
    if(average >=7){
        printf("aprovado\n");
    }else if(average<4){
        printf("reprovado\n");
    }else{
        if (averageFinal >= 5){
            printf("aprovado na final\n");
        }else{
            printf("reprovado na final\n");
        }
    }
}