/*If a five-digit number is input through the keyboard, write a program to reverse the number.*/

#include<stdio.h>
int main()
{
    int d1, d2, d3, d4, d5, n;
    printf("Enter the number = ");
    scanf("%d",&n);
    d1 = n%10;
    n = n/10;
    d2 = n%10;
    n = n/10;
    d3 = n%10;
    n = n/10;
    d4 = n%10;
    n = n/10;
    d5 = n%10;
    printf("%d%d%d%d%d",d1,d2,d3,d4,d5);
    return 0;
}