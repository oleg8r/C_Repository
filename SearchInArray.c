/*===========================================================
|
| File Name: SearchInArray.c
| Purpose: To check if number exists in the array and show its
|	location.
| Documentation: Write a function that gets an array as a
|	parameter (address and size) and a number and checks
|	to see if that number exists in the array. The function
|	should report every single occurrence of the number in
|	the array.  It should 
|	also report how many occurrences were detected in total 
|	
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-07-29         Oleg Savelev          created
|
|===========================================================*/

#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE 13

void findnReport(int * array, int size, int num);
void printArray(int * array);

int main()
{
int array[] = {2,5,3,5,12,13,14,15,0,5,-1,11,5};
int size;
int num = 5;

size = sizeof(array) / sizeof(array[0]);
printArray(array);
findnReport(array, size, num);
return 0;
}

void printArray(int * array)
{
  int index;
  for (index = 0; index < ARR_SIZE; index++)
      printf("index#%d = %d\n", index, array[index]);
}

void findnReport(int * array, int size, int num)
{
	int count = 0;
	int index;
	for(index = 0; index < size; index++)
	{
		if(num == * array)
		{
			printf("Number 5 found in array index #%d\n", index);
			count++;
		}
		array++;
	}
	printf("\nTotal of %d occurences of number 5\n", count);
}
