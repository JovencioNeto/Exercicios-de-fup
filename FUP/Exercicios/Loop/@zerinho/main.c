#include <stdio.h>

void zerinho(int player1,int player2,int player3);

int main(){
    int player1,player2,player3;

    scanf("%d", &player1);
    scanf("%d", &player2);
    scanf("%d", &player3);

    zerinho(player1,player2,player3);
    return 0;
}

void zerinho(int player1,int player2,int player3){
    if ((player1 == player2) && (player2 == player3)){
        printf("empate\n");
    }else{
        if (player1 != player2 && player1 != player3 && player2 == player3){
            printf("jog1\n");
        }if (player2 != player1 && player2 != player3 && player1 == player3){
            printf("jog2\n");
        }if (player3 != player1 && player3 != player1 && player1 == player2){
            printf("jog3\n");
        }
    }
    
}