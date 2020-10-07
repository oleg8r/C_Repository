/*===========================================================
|
| File Name: StrinSwap.c
| Purpose: To practice swapping first and last name using strings.
| Documentation:
This program  first reads the total number of names (an
|	integer) in order to know how many index cards need to be
|	processed altogether.	Next, for each index card, this
|	program reads a patron's first name and last name and
|	then displays these names correctly, that is on one line,
|	the last name followed by one space, followed by the first
|	name.  This program prints the reversed name immediately
|	after reading the patron's names.	
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ------------------
| 2020-08-18         Oleg Savelev          created
|
|===========================================================*/


#include <stdio.h>
#define MAX_ARR_SIZE 101

int main(void) {
    int count;
    char firstName[MAX_ARR_SIZE];
    char lastName[MAX_ARR_SIZE];

    scanf("%d", &count);
    for (int i=1; i<=count; i++) {
      scanf("\n%s %s", firstName, lastName);
      printf("%s %s\n", lastName, firstName);
    }
    
    return 0;
}
