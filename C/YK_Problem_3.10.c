/*Given the coordinates (x, y) of center of a circle and its radius, write a program that will determine wheather a point lies inside 
the circle, on the circle or outside the circle. (Hint: Use sqrt() and pow() functions*/
#include<stdio.h>
#include<math.h>
int main()
{
    int x, y, r, a, b, equ;
    printf("Enter Center Coordinates (X,Y) = ");
    scanf("%d %d", &x, &y);
    printf("Enter Radius = ");
    scanf("%d",&r);
    printf("Enter Point Coordinates = ");
    scanf("%d %d", &a, &b);
    equ = sqrt(pow(x-a,2) + pow(y-b,2));
    if(equ == r){
        printf("The point lies on the circle");
    }
    else if(equ > r){
        printf("The point lies outside the circle");
    }
    else if(equ < r){
        printf("The point lies in the circle");
    }
    else{
        printf("Something went wrong");
    }
    return 0;
}