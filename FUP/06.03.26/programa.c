// Algoritmo pode ser dividido em descrição, fluxograma e pseudocódig


//Tipos de variáveis: int, float, char, double, void

//int : guarda números inteiros
//float e double: guarda números decimais
//char: guarda caracteres
//void: tipo de função que não retorna valor

//Variável: informação guardada na memória do computador, necessária para resolver um problema.
//Variáveis possuem um nome, um tipo e um valor.

//O nome de variáveis deve obdecer alguns critérios como:
//Pode ser formado por letrar, números ou underscores
//Não pode começar com número
//Não pode conter espaços
//Não pode ser igual a palavras reservadas da linguagem

#include <stdio.h>

// int main() {
//     printf("Boa Tarde!\n");
//     printf("Valor inteiro: %d\n", 64+10);
//     printf("Valor decimal: %.4f\n", 3.14159);
//     printf("Caractere: %c\n", 'B');
//         return 0;
// }

// int main(){
//     printf("Digite o valor de ai's que vc quer ouvir : ");
//     int i = scanf("%d", &i);

//     while (i < 10) {
//         printf("ai\n");
//         i++;
//         sleep(1);
//     }
//         return 0;
// }

// #include <stdio.h>

// int main(){
//     printf("1\n");
//     printf("2\n");
//     printf("3\n");
//     printf("4\n");
//     printf("5\n");
//     printf("6\n");
//     printf("7\n");
//     printf("8\n");
//     printf("9\n");
//     printf("10\n");
    
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int x = 7;
    
//     printf("%d x %d = %d\n",x,1, x*1);
//     printf("%d x %d = %d\n",x,2, x*2);
//     printf("%d x %d = %d\n",x,3, x*3);
//     printf("%d x %d = %d\n",x,4, x*4);
//     printf("%d x %d = %d\n",x,5, x*5);
//     printf("%d x %d = %d\n",x,6, x*6);
//     printf("%d x %d = %d\n",x,7, x*7);
//     printf("%d x %d = %d\n",x,8, x*8);
//     printf("%d x %d = %d\n",x,9, x*9);
//     printf("%d x %d = %d\n",x,10, x*10);
    
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     printf("Hello world!");
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     float pi = 3.1415926;
//     float r = 2.5;
//     float h= 3.1;
    
//     float capacity = pi*(r*r) *h;

//     printf("%f\n",capacity);

//     return 0;
// }

#include <stdio.h>

int main(){

    float premio = 780000.00;
    float premio_1 = premio * (46.00/100.00);
    float premio_2 = premio * (32.00/100.00);
    float premio_3 = premio * (22.00/100.00);
    printf("O primeiro colocado recebera: R$ %.2f \n", premio_1);
    printf("O segundo colocado recebera: R$ %.2f \n", premio_2);
    printf("O terceiro colocado recebera: R$ %.2f \n", premio_3);
    
    return 0;
}
