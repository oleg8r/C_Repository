/*===========================================================
|
| File Name: FourOperCalc.c
| Purpose: To calculate the result based on the operation and
|	numbers chosen by the user
| Documentation: Ask the user to choose an arithmetical operation
|  type from the list and let the user enter two numbers.
|Calculate the
|	result of the arithmetical operation on the two entered
|	numbers and show the result to the user.
|
| Revision History:
| Date               Name                 Revision
| --------------     -----------------    -------------------
| 2020-06-25 	     Oleg Savelev   	    created
|
|===========================================================*/

#include <stdio.h>
int main(void)
{
   char calcOperation;
   float num1, num2;

   printf("4-operation calculator.\nEnter an operation type: A for add, S for subtract, M for multiply and D for divide.\n");
   scanf(“%c”, &calcOperation);            /* the type of the calculator operations a user chose */
   printf("Enter two numbers.\n");
   scanf(“%f” %f, &num1, &num2);
   switch (calcOperation)
   {
   case ‘A’:
      res = num1 + num2;
      break;
   case ‘S’:
      res = num1 - num2;
      break;
   case ‘M’:
      res = num1 * num2;
      break;
   case ‘D’:
      res = num1 / num2;
      break;
   default:
      printf("Invalid operation\n");
   }
}
