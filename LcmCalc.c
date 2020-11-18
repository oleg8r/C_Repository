/*===========================================================
|
| File Name: LcmCalc.c
| Purpose: To get two integers from the user and calculate and
|	print their least common multiplier or LCM. LCM is
|	the smallest  number that divides both given integers.
| Documentation: This program gets two numbers from the user,
|	calls a function to calculate their gcd and then uses
|	the formula lcm(x,y) = xy/gcd(x,y) to calculate and
display their LCM.
|	
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-07-28         Oleg Savelev          created
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
  int lcmVar;
 	printf("Enter two positive integer numbers: ");
 	scanf("%d %d", &num1, &num2);
	gcdVar = gcd(num1, num2);
	lcmVar = num1 * num2 / gcdVar; // Using the formula lcm(x,y) = xy/gcd(x,y)
 	printf("LCM(%d,%d) = %d\n", num1, num2, lcmVar);
}

int gcd(int num1, int num2)
{
    int gcdCandidate ;
    if (num1 < num2) // To pick a candidate for GCD to be the smaller of the two integer numbers

        gcdCandidate = num1;
    else
        gcdCandidate = num2;

    while (gcdCandidate >= 1)
    {
        if (num1 % gcdCandidate == 0 && num2 % gcdCandidate == 0)
            return gcdCandidate;
        gcdCandidate--;
    }
    return 0;
}
