#include <stdio.h>
#include <stdlib.h>



int main()
{
    int number;
    int guess;
    int nguesses=0;

    srand(time(0)); //srand is used to initialize the rand function. Time 0 returns time in seconds and in 0 second will give a random number.
    number = rand();// rand() is a function which gives you a random number.
    // And %100 + 1 makes the number to be in between 1 - 100.
    //printf("The random number is %d.\n", number); <-- THIS SHOWS WHAT IS THE RANDOM NUMBER CREATED.

    //Keep running the loop until the number is guessed.

    do{
            printf("Guess the number between 1 to 100.\n");
    scanf("%d", &guess);
    if (guess>number){
        printf("Lower Number please.\n");
    }
    else if(guess<number){
        printf("Higher Number please.\n");
    }
    else(
         printf("You guessed the number in %d number of attempts.\n",nguesses);
         );
    nguesses++;
    }while (guess!=number);


    return 0;
}
