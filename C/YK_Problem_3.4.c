/*A five-digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine 
whether the original and reversed numbers are equal or not.*/
#include<stdio.h>
int main()
{
    int num, temp = 0, d1, d2, d3, d4, d5, rev_num;
    printf("Enter Five Digit Number = ");
    scanf("%d",&num);
    temp = num;
    d5 = temp % 10;
    temp = temp / 10;
    d4 = temp % 10;
    temp = temp / 10;
    d3 = temp % 10;
    temp = temp / 10;
    d2 = temp % 10;
    temp = temp / 10;
    d1 = temp % 10;
    rev_num = d1 + d2*10 + d3*100 + d4*1000 + d5*10000;
    printf("The Reverse Number  = %d\n",rev_num);
    if(num == rev_num){
        printf("The numbers are equal");
    }
    else{
        printf("The numbers are not equal");
    }
    return 0;
}