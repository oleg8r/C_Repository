/*===========================================================
|
| File Name: PrimeNumCalc.c
| Purpose: To print all the prime numbers smaller and equal
|	to the user's positive integer number.
| Documentation: To print all the prime numbers smaller and
|	equal to the user's positive integer number, the function
|	int isPrime(unsigned num) gets a number as a parameter
|	and returns 1 if the number is prime and returns 0 if
|	the number is not prime.
|	
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-07-18         Oleg Savelev          created
|
|===========================================================*/

#include <stdio.h>
#include <stdlib.h>

unsigned divisorCount(unsigned num);
int isPrime(unsigned num);

int main(void)
{
	unsigned num;
	int primesCount;
	printf("Please enter a positive integer number (0 to end): ");
	scanf("%u", &num);

	while(num > 0)
	{
		primesCount = 0;
		int counter;
		printf("Primes before %d are: ", num);

		for(counter = 2; counter <= num; counter++) // To find all the divisors which are primes for the user's number
		
  		{
			if (isPrime(counter) == 1)	//To call a function to check if a counter value is a prime number
			{
				printf("%d ", counter); // To display the counter value which is a prime number 
				primesCount++; // To count the number of primes for the user's integer number
			}
		}
		
		printf("\n%d Prime numbers smaller than %u\n\n", primesCount, num);
        	printf("Please enter a positive integer number(0 to end): ");
        	scanf("%u",&num);
 	}
	printf("Thanks and have a good day!");
}

int isPrime(unsigned num)   // The function to return 1 if the number is prime and return 0 if the number is not prime
{
	unsigned divisor = 1;    // A divisor
  	int numOfDiv = 0;    // A number of divisors

	for (divisor = 1; divisor <= num ; divisor++)
     		if (num % divisor == 0)
     	  		numOfDiv++;

	if (numOfDiv == 2) // If it's 2, then a number is prime. If it's grater than 2, then a number is not prime. 
		return 1;
	else
		return 0;
}
