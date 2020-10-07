/*===========================================================
|
| File Name: StrLen.c
| Purpose: To practice string lengths.
| Documentation: This program shows if the name has even number
|   of letters or odd number of letters.
|	
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ------------------
| 2020-08-18         Oleg Savelev          created
|
|===========================================================*/

#include <stdio.h>
#include <string.h>
#define MAX_ARR_SIZE 51

int main(void) {
  char name[MAX_ARR_SIZE];
  
  printf("Please enter the name: ");
  scanf("%s", name);
    if (strlen(name)%2==0)
      printf("The name has even number of letters\n");
    else (printf("The name has odd number of letters\n"));
        
  return 0;
}
