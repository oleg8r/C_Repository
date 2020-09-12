/*===========================================================
|
| File Name: ManipulStructsWFuncs.c
| Purpose:
To practice manipulation structures with functions.
|
| Documentation:
|	This program manipulates structures with functions.
|	
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ------------------
| 2020-08-09         Oleg Savelev          created
|
|===========================================================*/


/* To display tomorrow's calendar date */

#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void readDate(struct date *);
struct date advanceDay(struct date);
void printDate(struct date);

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
  printDate(today);
  tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

void readDate(struct date * today) {
  scanf("%d ", &(*today).year);
  scanf("%d ", &(*today).month);
  scanf("%d ", &(*today).day);
}

void printDate(struct date today) {
  printf("%02d/", today.month);
  printf("%02d/", today.day);
  printf("%04d", today.year);
  printf("\n");
}

/* advanceDay() function definitions */
struct date advanceDay(struct date today) {
  
  today.year = today.year;

  if (today.month == 1 || today.month == 3 || today.month == 5 || today.month == 7 || today.month == 8 || today.month == 10)
    if (today.day < 31)
    {
      today.month = today.month;
      today.day = today.day + 1;
    }
    else
    {
      today.day = 01;
      today.month = today.month + 1; 
    }

  if (today.month == 4 || today.month == 6 || today.month == 9 || today.month == 11)
    if (today.day < 30)
    {
      today.month = today.month;
      today.day = today.day + 1;
    }
    else
    {
      today.day = 01;
      today.month = today.month + 1; 
    }

  else if (today.month == 02)
    if (today.day < 31)
    {
      today.month = today.month;
      today.day = today.day + 1;
    }
    else
    {
      today.day = 01;
      today.month = today.month + 1; 
    }
  
  else if (today.month == 12)
    if (today.day < 31)
    {
      today.month = today.month;
      today.day = today.day + 1;
    }
    else
    {
      today.day = 01;
      today.month = 01;
      today.year = today.year + 1;
    }
  
  return today;
}
