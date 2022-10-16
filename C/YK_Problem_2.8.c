/*If value of an angle is input through the keyboard, write a program to print all its Trigonometric ratios.*/
#include<stdio.h>
#include<math.h>
int main()
{
    float ang, angrad, ans;
    printf("Enter Angle = ");
    scanf("%f",&ang);
    angrad = ang * (3.14159265358979323846/180);
    ans = sin(angrad);
    printf("sin(%f) = %f\n", ang, ans);
    ans = cos(angrad);
    printf("cos(%f) = %f\n", ang, ans);
    ans = tan(angrad);
    printf("tan(%f) = %f\n", ang, ans);
    return 0;
}