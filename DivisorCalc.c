/*===========================================================
|
| File Name: DivisorCalc.c
| Purpose: To print out all the divisors of a user entered
|          number.
| Documentation:
|	Ask the user to enter a positive number or 0 to end.
|	Calculate and print out all the divisors of the entered
|	number, plus the number of printed divisors and their sum.
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ------------------
| 2020-07-07         Oleg Savelev          created
|
|===========================================================*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int number = 0;     //User’s number
  int divisor = 1;    //A divisor
  int counter = 0;    //A number of divisors
  int sum = 0;      //A sum of divisors

  printf("This program identifies and displays divisors of a given number.\n");
  printf("\nEnter a positive number. Enter 0 to end: ");
  scanf("%d", &number);

  if (number > 0)
  {
    for (divisor = 1; divisor <= number; divisor = divisor + 1)
      if (number % divisor == 0)
      {
        printf("%d ", divisor);
        counter = counter + 1;
        sum = sum + divisor;
      }
  printf("\n%d divisors", counter);
  printf("\nsum of divisors: %d\n", sum);
  }
  else if (number == 0)
  {
    printf("Thanks and bye!\n");
  }
  else
  {
    printf("Invalid input\n");
  }
}
