#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Design a program that generates a random number between 1 and 100. The user is asked to guess the number. Use a do-while loop to continue prompting until the correct number is guessed.
*/
int main()
{
    int guess,count=0;
    srand(time(NULL));
    int randomNumber = (rand() % 100) + 1;

    // printf("%d", randomNumber);
    do
    {
        if(count==0){
            printf("Enter a number:");
            scanf("%d", &guess);
        }else{
            if(guess>randomNumber){
                printf("Guess Lower Number:");
                scanf("%d", &guess);
            }else if(guess<randomNumber){
                printf("Guess Higer Number:");
                scanf("%d", &guess);
            }
        }
        count++;
    } while (guess!=randomNumber);
    printf("Congratulations! You guesses the no in %d times",count);
    // int randomNumber = (rand());

    return 0;
}