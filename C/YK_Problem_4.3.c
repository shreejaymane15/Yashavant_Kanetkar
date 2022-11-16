/*If the lengths of three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is valid
or not. The triangle is valid if the sum of two sides is greater than the largest of three sides.*/

#include<stdio.h>
int main(){
    int side1, side2, side3, largestside, sum;
    printf("Enter Three Sides of Triangle = ");
    scanf("%d %d %d", &side1, &side2, &side3);
    if(side1 >= side2 && side1 >= side3){
        largestside = side1;
        sum = side2 + side3;
    }
    else if(side2 >= side1 && side2 >= side3){
        largestside = side2;
        sum = side1 + side3;
    }
    else {
        largestside  = side3;
        sum = side1 + side3;
    }
    if(largestside < sum){
        printf("The triangle is valid.");
    }
    else{
        printf("The triangle is not valid.");
    }
    return 0;
}