/*===========================================================
|
| File Name: TextTrianForm.c
| Purpose: To print a user string in the triangle format.
| Documentation: The program's function gets a string from the user
|	up to length 20 and prints it in the triangle format.
|	For example, if the user enters "Hello” the code should
|	print:
|	H
|	He
|	Hel
|	Hell
|	Hello
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     -------------------
| 2020-07-29         Oleg Savelev          created
|
|===========================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define STR_SIZE 20

void printTriangle(char * str);

int main(void)
{
	char str[STR_SIZE];	
	
	printf("Please enter your word here: ");
	scanf("%19s", str);	/* It should be 19. 20 doesn't work, because it requires to leave one spot for the null */
	printTriangle(str);
	return 0;
}

 void printTriangle(char * str)
{
	for(int index = 1; index <= strlen(str); index++)
  {
    printf("%.*s\n", index, str); // Use %.*s to show a specific amount of string characters
  }
}
