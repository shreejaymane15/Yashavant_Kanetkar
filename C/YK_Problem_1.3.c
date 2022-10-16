/* If the marks obtained by student in five subjects are input through the keyboard, write the program to find out the aggregate marks 
and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100*/

#include<stdio.h>
int main()
{
    int sub1, sub2, sub3, sub4, sub5, agg;
    float per;
    printf("Enter Marks = ");
    scanf("%d %d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
    agg = (sub1 + sub2 + sub3 + sub4 + sub5);
    per = (agg/5);
    printf("Enter Aggregate = %d\n", agg);
    printf("Enter Percentage = %f", per);
    return 0;
}  