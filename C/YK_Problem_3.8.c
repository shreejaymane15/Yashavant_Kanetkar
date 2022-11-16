/*Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter.
For example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter.*/
#include<stdio.h>
int main()
{
    int length, breadth, area, perimeter;
    printf("Enter Length = ");
    scanf("%d", &length);
    printf("Enter Breadth = ");
    scanf("%d", &breadth);
    area = length * breadth ;
    perimeter = 2 * (length + breadth);
    if(area > perimeter){
        printf("The area is graeter than perimeter");
    }
    else{
        printf("The area is smaller than it's perimeter");
    }
    return 0;
}