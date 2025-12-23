// Number guessing game.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int NOG=0;  // NOG refers to number of guesses.
    int guess;
    srand(time(NULL));     // seed once
    int num = (rand() % 10) + 1; 
   
    // printf("%d\n", num);
   
    printf("Guess the number\n");
    do{
        scanf("%d" , &guess);
        NOG++;
        if(guess>num){
            printf("Enter a lower number\n");
        }
        else if(guess<num){
            printf("Enter a higher number\n");
        }
       } while(guess!=num);
     if(guess==num){
            printf("You guessed the number in %d attempts\n" , NOG);
        }
    return 0;
}