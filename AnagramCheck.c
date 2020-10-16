/*===========================================================
|
| File Name: AnagramCheck.c
| Purpose: To check if two words are anagrams
| Documentation: This program asks users to enter two words,
|	one after the other and checks if these words are
anagrams (permutations
|	of the same letters).
|	
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     -------------------
| 2020-07-20         Oleg Savelev          created
|
|===========================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int strAnagram(char *strA,char *strB); // To check if two words are anagrams
void strCopy(char *to, char *from); // To make a copy of a string for manupulation
void strLower(char* str); // To lower the text string font case
void strSort(char *str); // To sort the copies of strings in order

int main()
{
    char word1[200];
    char word2[200];

    printf("Please enter first word: ");
    scanf("%s", word1);

    printf("Please enter second word: ");
    scanf("%s", word2);

    if (strAnagram(word1, word2))
        printf("Yes! '%s' and '%s'  are anagrams", word1, word2);
    else
        printf("Sorry! '%s' and '%s'  are not anagrams", word1, word2);

 return 0;
}

int strAnagram(char *strA, char *strB) // To call the number of functions for string manipulation and return the True or False value indicating if strings are anagrams or not
{
    if (strlen(strA) != strlen(strB))
        return 0;

    char strACopy[200];
    char strBCopy[200];
    strCopy(strACopy, strA);
    strCopy(strBCopy, strB);
    strLower(strACopy);
    strLower(strBCopy);
    strSort(strACopy);
    strSort(strBCopy);

    if (strcmp(strACopy, strBCopy) == 0) // To compare two strings. 0 means there's no difference between two strings 
        return 1;
    else
        return 0;
}

void strCopy(char *to, char *from) // To make a copy of a string for manupulation
{
    int index = 0;
    while (from[index])
    {
        to[index] = from[index];
        index++;
    }
    to[index] = 0;
}

void strLower(char* str) // To lower the text string font case
{
    int index = 0;
    while (str[index])
    {
        if (str[index] >= 'A' && str[index] <= 'Z')
            str[index] = str[index] - 'A' + 'a';
        index++;
    }
}

void strSort(char *str) // To sort the copies of strings in order
{
	int size = strlen(str);
 	int index1, index2;
	for (index1 = 0 ; index1 < size - 1; index1++ )
        for (index2 = index1 + 1; index2 < size ; index2++)
            if (str[index1] > str[index2])
            {
                char tempVar = str[index1];
                str[index1] = str[index2];
                str[index2] = tempVar;
            }
}
