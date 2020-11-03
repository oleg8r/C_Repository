/*===========================================================
|
| File Name: GcdCalc.c
| Purpose: To get two positive integers and calculate their
|	greatest
|	common divisor or GCD. GCD is the greatest number that
|	the two positive numbers are both divisible by.
| Documentation:
|	This program picks a candidate for GCD to be the smaller
|	of the two numbers. It checks if that candidate satisfies
|	the GCD condition. If not, it reduces the candidate by one
|	and tries again. The first number that satisfies the
|	conditions will be the GCD.
|	
| Revision History:
| Date              Name                  Revision
| --------------    -----------------     ---------------------
| 2020-07-28        Oleg Savelev          created
|
|===========================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int gcd(int num1, int num2);

int main()
{
 	int num1, num2;
	int gcdVar;
 	printf("Enter two positive integer numbers: ");
 	scanf("%d %d", &num1, &num2);
	gcdVar = gcd(num1, num2);
 	printf("GCD(%d,%d) = %d because %d is the biggest number that %d %% %d == 0 and %d %% %d == 0\n", num1, num2, gcdVar, gcdVar, num1, gcdVar, num2, gcdVar);
}

int gcd(int num1, int num2)
{
    int gcdCandidate ;
    if (num1 < num2)	 // To pick a candidate for GCD to be the smaller of the two integer numbers
        gcdCandidate = num1;
    else
        gcdCandidate = num2;
    while (gcdCandidate >= 1)
    {
        if (num1 % gcdCandidate == 0 && num2 % gcdCandidate == 0)
            return gcdCandidate;
        gcdCandidate = gcdCandidate - 1;
    }
	return 0;
}
