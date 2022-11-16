/*Given a point (x,y), write a program to find out if it lies on the X-axis, Y-axis on the origin.*/
#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter points (x, y) = ");
    scanf("%d %d", &x, &y);
    if(x == 0 && y != 0){
        printf("The point lies on X axis.");
    }
    else if(x != 0 && y == 0){
        printf("The point lies on Y axis.");
    }
    else if(x == 0 && y == 0){
        printf("The point is origin.");
    }
    else{
        printf("The point is somewhere in abyss.");
    }
    return 0;
}