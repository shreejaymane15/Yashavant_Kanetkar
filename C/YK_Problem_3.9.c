/*Given three points (X1, y1), (x2, y2) and (x3, y3), write a program to check if the three points fall on one straight line.*/
#include<stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3, m, n;
    printf("Enter (x1, y1) = ");
    scanf("%d %d", &x1, &y1);
    printf("Enter (x2, y2) = ");
    scanf("%d %d", &x2, &y2);
    printf("Enter (x3, y3) = ");
    scanf("%d %d", &x3, &y3);
    m = (x2 - x1)/(y2 - y1);
    n = (x3 - x2)/(y3 - y2);
    if(m == n){
        printf("The all three points are fall on straight line");
    }
    else
    {
        printf("The three points are not on straight line");
    }
    return 0;
}