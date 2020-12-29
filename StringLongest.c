/*===========================================================
|
| File Name: StringLongest.c
| Purpose: To find the longest word (string) in a text.
| Documentation: This C-program takes the number of words in
|	a text as an input, followed by all of the words in
|	the text. Then the program outputs the length of
|	the longest word in the text
|	with no punctuation or special characters of any kind. 
|	
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ------------------
| 2020-08-22         Oleg Savelev          created
|
|===========================================================*/

#include <stdio.h>
#include <string.h>
#define STR_SIZE 101

int main(void)
{
	int wordsCount;
	char string[STR_SIZE];
	int longestWord=0;

  printf("Please enter the number of words followed by words: ");
	scanf("%d\n",&wordsCount); //Specify the total number of words
 
  for (int i=0;i<wordsCount;i++)	//Go from the 1st to the last word
  {
	scanf("%s",string); //Scan the word (put it to RAM)...
    int l=0;
    while (string[l]!='\0')
    { //...and till the end of the word...
		  l++; //...count the number of letters in the word...
      if (l>longestWord) //...if the number of letters is bigger than the previous number of letters...
		      longestWord=l; //...then make it a new longest word
    }
  }
	
  printf("The longest word in this sentence has %d letters", longestWord);
  return 0;
}
