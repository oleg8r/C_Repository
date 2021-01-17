/*===========================================================
|
| File Name: StringSearchLetter.c
| Purpose: To find where a specific letter is contained in a
|   word.
| Documentation: This program shows what half of the word contains
|   a specific letter. If there is no specific letter in the word
|   at all, the program also says about this. The word entered
|   should not have more than 50 letters.
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ------------------
| 2020-09-13         Oleg Savelev          created
|
|===========================================================*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_STR_SIZE 51

int main(void)
{
  char word[MAX_STR_SIZE];
  char letter;
  int i=0;
  int position=0;
  printf("Please enter your word (50 letters max): ");
  scanf("%50s", word); //Leaves a newline in the input
  printf("Please enter the letter you need to search in your word: ");
  scanf(" %c",&letter); //Add a leading whitespace to ignore the previous newline

  for(i=0; i<strlen(word); i++)
  {
    //printf("Index is %d\n",i);
    if(word[i]==letter)
    {
      position=i+1;
      printf("Letter %c is in the position number %d in the word.\n", letter, position);
      if(strlen(word) % position ==0 && position <= strlen(word) /2 && position > 0) //for even words
        printf("Letter %c is in the first half of the word.\n", letter);
        //return 1;
      else if(strlen(word) % position ==0 && position > strlen(word) /2 && position > 0) //for even words
        printf("Letter %c is in the second half of the word.\n", letter);
        //return 2;
  
      else if(strlen(word) % position !=0 && position-1 <= strlen(word) /2 && position >0) //for odd words
        printf("Letter %c is in the first half of the word.\n", letter);
        //return 1;
      else if(strlen(word) % position !=0 && position-1 > strlen(word) /2 && position > 0) //for odd words
        printf("Letter %c is in the second half of the word.\n", letter);
        //return 2;
    }
  }
  
  if(position ==0)
    printf("There is no letter %c in the word at all. The search is case sensitive.\n", letter);
    //return -1;
}
