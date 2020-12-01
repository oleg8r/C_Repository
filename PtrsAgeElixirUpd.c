/*===========================================================
|
| File Name: PtrsAgeElixirUpd.c
| Purpose: To lower user's age using pointers and a condition.
| Documentation: This program asks a user to enter his age and
|	then lower shis age by 10 years if he's 21 and older, and
|	twice multiplies his age if he's younger than 21.
|	
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     -------------------
| 2020-08-08         Oleg Savelev          created
|
|===========================================================*/

#include <stdio.h>
void ageModifyer(int *); // Function prototype

int main(void)
{
	int age; // Variable declaration
	int * ageAddr = & age; // Using a pointer to integer "age"

	printf("Please specify your age: ");
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	ageModifyer(&age); // Function call
	printf("Your new age will be %d!\n", age);
	
	return 0;
}

void ageModifyer(int * ageAddr)
{
  if (* ageAddr >= 21)
     * ageAddr = * ageAddr - 10;
  if (* ageAddr < 21)
     * ageAddr = * ageAddr * 2;
}
