// Snake water gun game with computer.

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int player,computer,play;
    
    // 0---> snake
    // 1---> water
    // 2---> gun

    srand(time(NULL));     // seed once
    computer = (rand() % 3);
    
    while(play){
        printf("Choose 0 for snake , 1 for water and 2 for gun\n");
        scanf("%d" , &player);
        if(player==0 && computer==0){
      printf("It is a draw\n");
    }
    else if(player==0 && computer==1){
        printf("You win\n");
}
    else if(player==0 && computer==2){
        printf("Computer wins\n");
    }
    else if(player==1 && computer==0){
         printf("Computer wins\n");
    }
    else if(player==1 && computer==1){
        printf("It is a draw\n");
    }
    else if(player==1 && computer==2){
         printf("You win\n");
    }
    else if(player==2 && computer==0){
         printf("You win\n");
    }
    else if(player==2 && computer==1){
         printf("Computer wins\n");
    }
    else if(player==2 && computer==2){
        printf("It is a draw\n");
    }
    printf("Do you want to play again.?\n");
    printf("Press 1 to play again and 0 not to play again.\n");
    scanf("%d" , &play);
}
    if(play==0){
        printf("Thank you!!!");
    }
    return 0;
}