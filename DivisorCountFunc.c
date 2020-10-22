/*===========================================================
|
| File Name: DivisorCountFunc.c
| Purpose: To return the number of divisors of an integer number
|	(by using a function).
| Documentation:
The function called unsigned divisorCount (unsigned num)
|	gets an integer number as an input parameter and returns 
|	the number of divisors of that number. For example, if you
|	send 15 to the function, it will return 4 as 15 has 4
|	divisors: 1, 3, 5, 15. The function will return 2 for 17
|	because 17 only has two divisors.
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     -------------------
| 2020-07-17         Oleg Savelev          created
|
|===========================================================*/

#include<stdio.h>
#include<stdlib.h>

unsigned divisorCount(unsigned num);

int main(void)
{
	int counter = 0;
	printf("This program returns the number of divisors of an integer number.\n");
	counter = divisorCount(counter);
	printf("%d ", counter);
}

unsigned divisorCount(unsigned num)   // The function to return the number of divisors of an integer number
{
  unsigned divisor = 1;    // A divisor
  int counter = 0;    // A number of divisors
  printf("\nEnter a positive number. Enter 0 to end: ");
 	scanf("%d", &num);
	if (num > 0)
 	{
  		for (divisor = 1; divisor <= num ; divisor++)
     			if (num % divisor == 0)
     	  		counter++;
  	}
  	else if (num == 0)
 		printf("Thanks and bye!\n");
 	else
    		printf("Invalid input\n");
  return counter;
}
