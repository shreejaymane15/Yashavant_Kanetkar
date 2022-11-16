/*Write a program to find the absolute value of a number entered through the keyboard.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float num;
    printf("Enter Number = ");
    scanf("%f", &num);
    num = abs(num);
    printf("The absolute value is %f", num);
    return 0;
}