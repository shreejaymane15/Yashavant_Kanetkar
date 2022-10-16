/*The length and breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to calculate the area
and perimeter of the rectangle, and the area and circumference of the circle*/

#include<stdio.h>
int main()
{
    float len, breadth, rad, per, area, cir;
    printf("Enter Length = ");
    scanf("%f", &len);
    printf("\nEnter Breadth = ");
    scanf("%f",&breadth);
    printf("\nEnter radius = ");
    scanf("%f",&rad);
    per = 2 * ( len + breadth );
    area = len * breadth ;
    cir = 2 * 3.14 * rad;
    printf("\nPerimeter of Rectangle = %f\n", per);
    printf("Area of Rectangle  = %f\n",area);
    printf("Circumferance of Circle = %f",cir);
    return 0;
}