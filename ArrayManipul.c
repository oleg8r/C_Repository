/*===========================================================
|
| File Name: ArrayManipul.c
| Purpose: To do array manipulation.
|
| Documentation:
|	This program is for array manipulation. The program is
|	completely modular and has a menu, where separate functions
|	should be called for separate menu options.
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-07-20         Oleg Savelev          created
|
|===========================================================*/

#include <stdio.h>
#include <stdlib.h>

void printMenu();
void swap(float *x, float *y);
void sortArrayAsc(float *arr, int n);
void sortArrayDesc(float *arr, int n);
void printArray(float *arr, int n);
void searchArray(float *arr, int n, float num);
void printRevArray(float *arr, int n);

int main()
{
	int menuOption;
    	int arrSize = -1;
    	float* array;
    	int size = *(&array + 1) - array;
    
	do
	{
    		printMenu ();
    		scanf("%d",&menuOption);
    
    		while(menuOption < 1 || menuOption > 7)
    		{
        		printf("That's not a valid choice\n\n");
        		printf("Please enter your choice: ");
        		scanf("%d",&menuOption);
    		}
    
    		switch(menuOption)
    		{

		case 1:
		printf("What is the size of your array (1-20)? ");
     		scanf("%d", &arrSize);
                
     		while(arrSize < 1 || arrSize > 20)
     		{
                    printf("Array size should be between 1 and 20\n\n");
                    printf("What is the size of your array (1-100)? ");
                    scanf("%d",&arrSize);
            }
                printf("Array size set\n\n");
        	break;

        	case 2:
        	if(arrSize == -1)
        	{
           	printf("You should first set the size of the array\n\n");
        }
        	else
		{
           	array = malloc(arrSize * sizeof(float));
                for(int count = 0; count < arrSize ; count = count + 1)
           	{
           		float val;
           		printf("Enter array element %d: ",(count + 1));
           		scanf("%f",&val);
           		*(array + count) = val;
           	}
            	printf("Array elements have been received\n\n");
        	}
        break;

        case 3:
        size = *(&array + 1) - array;
		if(size == 0)
        	{
            printf("Your array is not initialized yet!\n\n");
        	}
		else
		{
            char order;
            printf("Sorting the array.\n");
            printf("Please choose Ascending/Descending (A/D)? ");
            scanf(" %c",&order);
            while(order!='A' && order!='a' && order!='D' && order!='d')
            {
                printf("That's not a valid choice\n\n");
                printf("Please choose Ascending/Descending (A/D)? ");
                scanf(" %c",&order);
            }
            if(order == 'A' || order == 'a')
            {
                printf("Array sorted (Ascending)\n");
                sortArrayAsc(array, arrSize);
                printArray(array, arrSize); 
            }
            if(order == 'D' || order == 'd')
            {
                printf("Array sorted (Descending)\n");
                sortArrayDesc(array, arrSize);
                printArray(array, arrSize);
            }
        }
        break;

        case 4:
        size = *(&array + 1) - array;
        if(size == 0)
        {
            printf("Your array is not initialized yet!\n\n");
        }
        else
        {
            float num;
            printf("Please enter a number to be searched in the array: ");
            scanf("%f", &num);
            searchArray(array, arrSize, num);
        }
        break;
        case 5:
        size = *(&array + 1) - array;
        if(size == 0)
        {
            printf("Your array is not initialized yet!\n\n");
        }
        else
        {
            printf("Printing the array\n");
            printArray(array, arrSize);
        }
        break;

        case 6:
        size = *(&array + 1) - array;
        if(size == 0)
        {
            printf("Your array is not initialized yet!\n\n");
        }
        else
        {
            printf("Reverse printing the array\n");
            printRevArray(array, arrSize);
        }
        break;
	
	case 7:
	printf("Thanks and bye!\n\n");
	break;
     }

    } while(menuOption != 7);

   return 0;
}


void printMenu()
{
    printf("1- Enter the size of the array\n");
    printf("2- Enter the array elements\n");
    printf("3- Sort the array\n");
    printf("4- Find a number within the array\n");
    printf("5- Print the array\n");
    printf("6- Reverse print the array\n");
    printf("7- Quit\n");
    printf("Please enter your choice: ");
}


void swap(float *x, float *y)
{ 
    float tempVar = *x; 
    *x = *y; 
    *y = tempVar; 
} 


void sortArrayAsc(float *arr, int size)  
{  
    int var1, var2;  
    for (var1 = 0; var1 < size - 1; var1 = var1 + 1)      
        for (var2 = 0; var2 < size - var1 - 1; var2 = var2 + 1)  
            if (arr[var2] > arr[var2 + 1])  
                swap(&arr[var2], &arr[var2 + 1]);  
} 


void sortArrayDesc(float *arr, int size)
{  
    int var1, var2;
    for (var1 = 0; var1 < size - 1; var1 = var1 + 1)
        for (var2 = 0; var2 < size - var1 - 1; var2 = var2 + 1)  
            if (arr[var2] < arr[var2 + 1])  
                swap(&arr[var2], &arr[var2 + 1]);  
}


void printArray(float *arr, int size) 
{ 
    	int count; 
	for (count = 0; count < size; count = count + 1)
        printf("%.1f ", *(arr + count));
        printf("\n\n");
} 


void searchArray(float *arr, int size, float searchedVal)
{
    int count;
    int foundVal = 0; 
    for (count = 0; count < size; count = count + 1)
    {
        if(*(arr + count) == searchedVal)
        {
            foundVal = 1;
            break;
        }
    }

    if(foundVal == 1)
    {
        printf("%.1f was found at the position %d in the array\n\n", searchedVal, (count + 1));
    }
    else{
        printf("%.1f was not found in the array\n\n", searchedVal);    
    }
}


void printRevArray(float *arr, int size)
{ 
	int count;
   	for (count = size - 1; count >= 0 ; count--) 
        printf("%.1f ", *(arr + count));
        printf("\n\n");
}
