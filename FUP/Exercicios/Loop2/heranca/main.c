#include <stdio.h>

void heranca(float x,float y,float z);

int main(){
    float x,y,z;
    
    scanf("%f %f %f", &x, &y, &z);
    
    heranca(x, y, z);
    
    return 0;
}

void heranca(float x,float y,float z){
    //Comentando pra não me perder nessa bagaça
    float alice = x;
    float benice = y;
    float clarice = z;

    // 1.Alice distribui 30% do seu ouro igualmente para as outras duas.
    benice += alice * 0.15;
    clarice += alice * 0.15;
    alice -= alice * 0.30;

    // 2.Benice pega 30 gramas da irmã mais rica e entrega para a mais pobre.
     if (alice > benice && alice > clarice){
        if (benice < clarice){
            alice -= 30;
            benice += 30;
        } else {
            alice -= 30;
            clarice += 30;
        }
    }
    else if (benice > alice && benice > clarice){
        if (alice < clarice){
            benice -= 30;
            alice += 30;
        } else {
            benice -= 30;
            clarice += 30;
        }
    }
    else {
        if (alice < benice){
            clarice -= 30;
            alice += 30;
        } else {
            clarice -= 30;
            benice += 30;
        }
    }

    // 3.Clarice furta 20% do ouro de Alice e 10% do ouro de Benice.
    float theftAlice = alice * 0.20;
    float theftBenice = benice * 0.10;

    clarice += theftAlice + theftBenice;
    alice -= theftAlice;
    benice -= theftBenice;

    // 4.Alice e Benice trocam sua quantia de ouro entre si.
    float temp = alice;
    alice = benice;
    benice = temp;

    // 5.Clarice é presa e deve pagar 100 g em ouro como fiança (se ela não tem o suficiente, seu ouro é zerado).
    if (clarice >= 100){
        clarice -= 100;
    }
    else{
        clarice = 0;
    }

    // 6.Alice doa metade do seu ouro para caridade.
    alice /= 2;

    // 7. Se Alice não for a mais rica, ela coleta 20% do ouro da irmã mais rica em troca de sua parte do terreno da família.
    if (!(alice > benice && alice > clarice)){
        if (benice > clarice){
            float taxa = benice * 0.20;
            alice += taxa;
            benice -= taxa;
        } else {
            float taxa = clarice * 0.20;
            alice += taxa;
            clarice -= taxa;
        }
    }

    //PFVR FUNCIONA

    printf("Alice: %.1f\n", alice);
    printf("Benice: %.1f\n", benice);
    printf("Clarice: %.1f\n", clarice);
}