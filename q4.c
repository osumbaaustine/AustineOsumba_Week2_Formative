/*Let's code a game

*This program will read a random number (like the program generates a random number)  and ask the user to guess it.
*The user has to guess the number that the program generated. 
*The program will give 10 attempts to guess the number, on each attempt,
*the program will inform that the entered number is less than or greater than the randomly generated number 
*so that the user can easily guess that particular number. 

*If the user guesses the number, you congratulate them and you tell them the number of guesses they made.

*Eg: congratulations, you made 5 guesses.*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void) {
  srand(time(NULL));
// Generate a random number
  int r = rand() % 10 + 1;
  bool correct = false;
  int guess;
  int counter = 0;

  while(!correct)
  {
    // Prompts the user to guess the number
    printf("Guess my number! ");
    scanf("%d", &guess);
    getchar();
    
    //compares the guess with the random number

    if (guess < r) {
        printf("Your guess is too low. Guess again.\n");
    }
    else if (guess > r) {
        printf("Your guess is too high. Guess again.\n");
    }
    else /* if (guess == r) */ {
        printf("You guessed correctly in %d attempts! Congratulations!\n", counter);
        correct = true;
    }

    counter++;
    if(counter==10){
            printf("\n\n MAXIMUM LIMIT OF ATTEMPT FINISHED!\n");
            break;
    }
  }

  return 0;
}

