/*If a five-digit number is input through the keyboard, write a program to calculate the sum of digits. Use Modulus operator (%)*/
#include<stdio.h> 
int main()
{
    int num, d1, d2, d3, d4, d5, total;
    printf("Enter Number = ");
    scanf("%d",&num);
    d1 = num%10;
    num = num/10;
    d2 = num%10;
    num = num/10;
    d3 = num%10;
    num = num/10;
    d4 = num%10;
    num = num/10;
    d5 = num%10;
    num = num/10;
    total = d1+d2+d3+d4+d5;
    printf("Sun of digits = %d",total);
    return 0;
}