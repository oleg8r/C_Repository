/*===========================================================
|
| File Name: FontCaseToggle.c
| Purpose: To print every lowercase character as an uppercase
|one and
|	vise versa.
| Documentation: This program uses the function that gets a string as a
|	parameter and prints every lowercase character as an
|	uppercase one and vise versa.
|	
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-07-29         Oleg Savelev          created
|
|===========================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define ARR_SIZE 200

void printToggled(char * myStr);

int main(void)
{
   char * myStr;

   printf("Please enter your text here\n");
   gets(myStr);
   printToggled(myStr);
   printf("Your text with toggled case: %s\n", myStr);
   return 0;
}

void printToggled(char * myStr)
{
for(int index = 0; index < strlen(myStr); index++)

   while (myStr[index] != '\0')
	{
    if(myStr[index] >= 'a' && myStr[index] <= 'z')
      {
        myStr[index] = myStr[index] - 'a' + 'A';
      }
       
	if(myStr[index] >= 'A' && myStr[index] <= 'Z')
      {
        myStr[index] = myStr[index] - 'A' + 'a';
      }
   }
}
