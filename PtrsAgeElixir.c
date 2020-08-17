/*===========================================================
|
| File Name: PtrsAgeElixir.c
| Purpose:
|	To practice pointers on the age elixir example.
|
| Documentation:
|	This program asks a user to enter his age and then lowers
|	his age by 5 years.
|	
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     -------------------
| 2020-08-08         Oleg Savelev          created
|
|===========================================================*/


//use pointers for age elixir

#include <stdio.h>

int main(void) {

    int age;

    int * ageptr;   // add a line here that declares an integer pointer named "ageptr"
    
    printf("Please specify your age: ");

    scanf("%d", &age);

    ageptr = &age; // add a line here that stores the address of age in ageptr  
    
    printf("The secret address is... ");

    printf("%p\n", ageptr); // add a line here that prints out the address stored in ageptr  
    
    printf("Now take three drops of the magic elixir. \n");

    *ageptr = *ageptr - 5;  // add a line that uses only ageptr to lower the age by 5 years
    

    printf("Did the elixir work? You are %d years old!", age);

    return 0;

}