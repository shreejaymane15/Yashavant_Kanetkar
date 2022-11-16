/*Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20%
of basic salary. write a program to calculate his gross salary*/

#include<stdio.h>
int main()
{
    float bs, da, hra, gs;
    printf("Enter Ramesh Salary:");
    scanf("%f",&bs);
    da = 0.4 * bs ;
    hra = 0.2 * bs ;
    gs = bs + da + hra ;
    printf("Basic salary of Ramesh = %f\n",bs);
    printf("Dearness Allowance = %f\n", da);
    printf("Rent allowance = %f\n",hra);
    printf("Gross Salary = %f\n",gs);
    return 0;
}