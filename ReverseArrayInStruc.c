/*===========================================================
|
| File Name: ReverseArrayInStruc.c
| Purpose: To display today's calendar date through passing
|	structure to functions.
| Documentation: This program displays today's calendar date.
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ------------------
| 2020-08-09         Oleg Savelev          created
|
|===========================================================*/

#include <stdio.h>

struct date
{
        int year;
        int month;
        int day;
};

void readDate(struct date*);
void printDate(struct date);

int main(void)
{
	struct date today;
	readDate(&today);
	printDate(today);
	return 0;
}

void readDate(struct date * today)
{
  scanf("%d ", &(*today).year);
  scanf("%d ", &(*today).month);
  scanf("%d ", &(*today).day);
}

void printDate(struct date today)
{
  printf("%02d/", today.month);
  printf("%02d/", today.day);
  printf("%04d", today.year);
}
