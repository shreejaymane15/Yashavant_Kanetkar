/*If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made 
profit or incurred loss. Also determine how much profit he made or loss he incurred.*/
#include<stdio.h>
int main()
{
    float cp, sp, p, l;
    printf("Enter the cost price = ");
    scanf("%f",&cp);
    printf("Enter the sell price = ");
    scanf("%f",&sp);
    if(sp>=cp){
        printf("Profit = %f",sp-cp);
    }
    else{
        printf("Loss = %f",cp-sp);
    }
    return 0;
}