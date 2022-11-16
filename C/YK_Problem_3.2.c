/*Any integer is input through the keyboard. Write a program to find out whether it is an odd number or even number.*/
#include<stdio.h>
int main()
{
    int num, ans = 0;
    printf("Enter Number = ");
    scanf("%d",&num);
    ans = num%2;
    if(ans == 0){
        printf("This is even number");
    }
    else
        printf("This is odd number");
    return 0;
}