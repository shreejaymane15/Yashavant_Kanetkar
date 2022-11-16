/*Write a program to check wether a triangle is valid or not, if three angles of the triangle are entered through the keyboard. 
A triangle is valid if the sum of all the three angles is equal to 180 degrees. */
#include<stdio.h>
int main()
{
    float a, b, c;
    printf("Enter Angles = ");
    scanf("%f %f %f", &a, &b, &c);
    if((a+b+c) == 180){
        printf("The triangle is valid.");
    }
    else
    {
        printf("The triangle is not valid");
    }

}