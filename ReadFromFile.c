/*===========================================================
|
| File Name: ReadFromFile.c
| Purpose: To practice reading numbers from a file.
| Documentation: This program reads numbers from a file and
|       displays an average grade.
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     -------------------
| 2020-08-10         Oleg Savelev          created
| 2020-08-19         Oleg Savelev          updated
|
|===========================================================*/

#include <stdio.h>

calcGradeAvg(int *);

int main(void) {

    FILE *ifile;
    int i, num, N;
    
    ifile = fopen("studentGrades.txt", "r");    
    fscanf(ifile, "%d", &N);                                
    printf("There are %d numbers in the file.\n", N);
    
    for (i = 0; i<N; i++) {
        fscanf(ifile, "%d", &num);
        printf("I read %d from the file. \n", num);
    	gradeAvg = calcGradeAvg();
        printf("Average grade is: %d\n", gradeAvg);
    }
    
    fclose(ifile);
    
    return 0;
}

void calcGradeAvg(int * arr) {
    int i;
    int gradeSum = 0;
    float gradeAvg;

    for (int i=0; i<num; i++) {
        gradeSum = gradeSum + arr[i];
        gradeAvg = gradeSum / num;
    }
    return gradeAvg;
}
