/*===========================================================
|
| File Name: ReverseArray.c
| Purpose: To practice pointers and array.
| Documentation: This program uses a function to reverse an array.
|	
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     -------------------
| 2020-08-08         Oleg Savelev          created
|
|===========================================================*/

#include <stdio.h>
#define ARR_SIZE 6

void reverseArray(int *);
void printArray(int *);

int main(void)
{
  int arr[ARR_SIZE];
  
  for (int i=1; i<=ARR_SIZE; i++)
  {
    printf("Please enter the array element #%d: ", i);
    scanf("%d", &arr[i-1]);
	}

  printArray(arr);
  printf("\n\n");
  reverseArray(arr);
  printArray(arr);

	return 0;
}

void printArray(int * arr)
{
  for (int i=0; i<ARR_SIZE; i++)
    printf("%d ", arr[i]);
}

void reverseArray(int * arr)	// This function reverses array
{
  int tempVar;
    
  tempVar = arr[0];
  arr[0] = arr[5];
  arr[5] = tempVar;
    
  tempVar = arr[1];
  arr[1] = arr[4];
  arr[4] = tempVar;
    
  tempVar = arr[2];
  arr[2] = arr[3];
  arr[3] = tempVar;
}

/*
void reverseArray(int * arr) { // Other option for the reverseArray() function

  int tempVar;
  int i; 
  for (i = 0; i < 6; i++)
  {
    tempVar = arr[i];
    arr[i] = arr[5 - i]; 
    arr[5 - i] = tempVar; 
  }
}
*/
