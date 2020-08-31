/*===========================================================
|
| File Name: ArrayDescenSort.c
| Purpose: To sort an array in a descending order and to show the
|	number of elements that did not change their positions
|	after the sorting.
| Documentation:
|	This program uses the function that gets an array as a
|	parameter, sorts it in a descending fashion and returns the
|	number of elements that did not change position in the sort
|	(they were originally in the right position).
|	
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-07-29         Oleg Savelev          created
|
|===========================================================*/

#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE 5

void sortDESCEN(int * myArray, int arSize);
void swapVar(int * num1, int * num2);
void printArray(int * myArray, int arSize);

int main(void) 
{
	int myArray[]={2, 3, 1, 0, -1};
	int arSize = 5;
  
	printf("\nMy array before calling the function: ");
	printArray(myArray, arSize);

	sortDESCEN(myArray, arSize);

	printf("\nMy array after calling the function: ");
	printArray(myArray, arSize);
 }

void sortDESCEN(int * myArray, int arSize)
{
    int index;
    int indexLast;
    
    for(index = 0; index < arSize - 1; index++)	
    		for(indexLast = index + 1;	 indexLast < arSize; indexLast++)
      	  if(myArray[index] < myArray[indexLast])      
        		swapVar(&myArray[index],&myArray[indexLast]);
}


void swapVar(int * num1, int * num2)
{
  int tempVar;
  tempVar = *num1;
  *num1 = *num2 ;
  *num2 = tempVar;
}


void printArray(int * myArray, int arSize)
{
  int index;
  for (index = 0; index < arSize; index++)
    printf(" %d ", myArray[index]);
}
