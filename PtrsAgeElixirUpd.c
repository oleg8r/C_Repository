/*===========================================================
|
| File Name: PtrsAgeElixirUpd.c
| Purpose: To practice pointers on the age elixir advanced example.
| Documentation: This program asks a user to enter his age and
|	then lower shis age by 10 years if he's 21 and older, and
|	twice
|	multiplies his age if he's younger than 21.
|	
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     -------------------
| 2020-08-08         Oleg Savelev          created
|
|===========================================================*/

//use pointers to improve age elixir

#include <stdio.h>

void ageModifyer(int *); //Write your function prototype here

int main(void){
	int age;
	int * ageAddr = &age;

	printf("Please specify your age: ");
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	ageModifyer(&age); //Write your function call here

	printf("Your new age will be %d!\n", age);
	return 0;
}

//Write your function here
void ageModifyer(int * ageAddr)
{
  if (* ageAddr >= 21)
     * ageAddr = * ageAddr - 10;
  if (* ageAddr < 21)
     * ageAddr = * ageAddr * 2;
}
