#include <stdio.h>

void minutes(int quantityBasket, int bananas, int guavas, int mangos);

int main(){
    int quantityBasket,bananas,guavas,mangos;

    scanf("%d", &quantityBasket);
    scanf("%d", &bananas);
    scanf("%d", &guavas);
    scanf("%d", &mangos);

    minutes(quantityBasket, bananas,guavas,mangos);
    
    return 0;
}

void minutes( int quantityBasket, int bananas, int guavas, int mangos){
    int fruits = bananas + mangos + guavas;
    int trips = (fruits + quantityBasket - 1) / quantityBasket;

    printf("%d\n", trips);
}