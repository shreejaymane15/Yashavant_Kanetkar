/*Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not.*/
#include<stdio.h>
int main()
{
    int year, leap = 0;
    printf("Enter the year = ");
    scanf("%d",&year);
    leap = year%4;
    if(leap == 0){
        printf("This is leap year");
    }
    else{
        printf("This is not leap year");
    }
    return 0;
}