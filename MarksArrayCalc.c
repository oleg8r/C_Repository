/*===========================================================
|
| File Name: MarksArrayCalc.c
| Purpose: To print out average, highest and lowest marks, a
|   number of failed students, a number of students with a grade
|A
|   and higher, a number of above average marks.
| Documentation: The program asks a user to enter a class size
|   and marks. Then it calculates and prints out a class average,
|   best and worst marks, a number of failed students, a number
|   of students with a grade A and higher (80 or above), and
|   number of students who got a mark above average.
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ----------
| 2020-07-12         Oleg Savelev          created
|
|===========================================================*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int main(void)
{
  int classSize; // The class size
  int index; // The index of the class marks array. The student number
  float marks[SIZE]; // The array of marks of the class students. The maximum class size
  float sum = 0; // The sum of all marks of the class
  float avg; // The class average mark
  int best, worst; // Best mark and worst mark
  int numFailed = 0; // A number of failed students with a grade of F (49 or below)
  int numGradeA = 0; // A number of students with a grade of A and higher (80 or above)
  int numAboveAvg = 0; // A number of students who got a mark above average
  float GradeA = 80; // Grade A and higher
  float GradeFailed = 49; // Grade F and lower

  printf("Please enter a class size. Maximum 100 students: ");
  scanf("%d", &classSize);

  while (classSize < 1 || classSize > SIZE) //Do not use 'if', otherwise this filter will not be in a pre-test loop and will stop working after the first attempt
  {
      printf("\nInvalid input. Class size should be between 1 and 100.");
      printf("\nPlease enter a class size again. Maximum 100 students: ");
      scanf("%d", &classSize);
  }

    for (index = 0; index < classSize; index++)
    {
      printf("Please enter the percentage mark (0 to 100) for student #%d: ", index + 1);
      scanf("%f", &marks[index]);
        while (marks[index] <= 0 || marks[index] >= 100 || index > classSize)
        { printf("\nInvalid input. Percentage mark should be between 0 and 100.");
          printf("\nPlease enter a percentage mark (0 to 100) again: ");
          scanf("%f", &marks[index]);
        }
      sum = sum + marks[index];     // sum up all array elements (marks of the class)
    }
  
  avg = (float)sum / classSize;     // find average of all array elements (marks of the class)
  printf("\nClass average mark is: %.2f", avg);

  // find the maximum and the minimum of the array values (marks of the class) for best and worst marks
  best = marks[0];
  worst = marks[0];

  for (index = 0; index < classSize; index++)
  {
    if (marks[index] > best )
        best = marks[index];
    if (marks[index] < worst)
        worst = marks[index];
  }

  printf("\nClass best mark is: %d \nClass worst mark is: %d ", best , worst);

  for (index = 0; index < classSize; index++)
  {
    if (marks[index] <= GradeFailed)
      numFailed++;
  }
  printf("\nNumber of failed students with a grade of F (49 or below) is: %d", numFailed);  // print Number of Failed Students

  for (index = 0; index < classSize; index++)
  {
    if (marks[index] >= GradeA)
      numGradeA++;
  }
  printf("\nNumber of students with a grade of A and higher (80 or above) is: %d", numGradeA);     // print Number of Students with a grade of A and higher (80 or above)

  for (index = 0; index < classSize; index++)
  {
    if (marks[index] > avg)
      numAboveAvg++;
  }
  printf("\nNumber of students who got a mark above average is: %d", numAboveAvg);     // print Number of students who got a mark above average

  printf("\n\n");
}
