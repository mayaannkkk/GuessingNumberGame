#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int random,guess;
    int no_of_guess=0;

    srand(time(NULL));
    random=rand() % 100 +1;
      printf(" Welcome to the Number Guessing Game!\n");
    printf("Try to guess the number between 1 and 100.\n");
    
    do{
        printf("\nEnter your guess number:");
        scanf("%d",&guess);
        no_of_guess++;

        if(guess>random){
            printf("\nGuess smaller number");
        }else if(guess<random){
            printf("\nGuess larger number");

        }else{
            printf("\nYour guess is right in %d attempts.\n",no_of_guess);

        }
    }while(guess!=random);

    printf("\nThanks for playing the game\n");

    }
