/*===========================================================
|
| File Name: GuessNumGame.c
| Purpose: A guessing number game with a computer.
| Documentation: A computer chooses a random number between 1
| and 100, and a user tries to guess it with 10 attempts.
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ----------------
| 2020-07-16         Oleg Savelev          created
|
|===========================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  char answer = 'Y';
 do
 {
  int counter = 0;
  int guess = 0;
  int r;
  char answer;
  srand(time(NULL));
  int win = 0;

  printf("\nWelcome to the Number Guess Game! ");
  printf("\nI choose a number between 1 and 100 and you have only 10 chances to guess it!\n\n");
  r = rand() % 100 + 1;
  printf("OK, I made my mind!");
  
  for (counter = 0; counter < 10; counter++) /
  {
    printf("\nWhat is your guess? > ");
    scanf("%d", &guess);
      while (guess < 1 || guess > 100)
        { printf("\nInvalid input. Please choose a number between 1 and 100. > ");
          scanf("%d", &guess);
        }
    if (guess > r)
    {
      printf("\nMy number is smaller than %d", guess);
      printf("\n%d guesses left.", 9-counter);
    }
    if(guess < r)
    { printf("\nMy number is larger than %d", guess);
      printf("\n%d guesses left.", 9-counter);
    }
    if(guess == r)
    { printf("\nYou did it! My number is %d!", r);
      printf("\nYou found it with just %d guesses.", counter);
      win = 1; //assignment
      counter = 10;
    }
  }  
  
  if (win == 0) //relation
    printf("\n\nSORRY! You couldn’t find it with 10 guesses!\nMy number was %d. Maybe next time!", r);

  printf("\n\nDo you want to play again? (Y/N) > ");
  scanf("%s", &answer);
  if (answer == 'N' || answer == 'n')
  { printf("\n\nThanks for playing! See you later.\n");
    break;
  }
  
 } while (answer == 'Y' || answer == 'y');
}
