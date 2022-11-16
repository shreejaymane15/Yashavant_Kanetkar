/*Write a program to receive Cartesian co-ordinates (x,y) of a point and convert them into polar co-ordinates (r,fhi)
Hint: r = sqrt(x^2 + y^2) and fhi = tan^-1(y/x)*/
#include<stdio.h>
#include<math.h>
int main()
{
    double x, y, r, fhi;
    printf("Enter Cartesian co-ordinates = ");
    scanf("%lf %lf", &x, &y);
    r = sqrt(pow(x, 2) + pow(y, 2));
    fhi = atan2(y, x);
    printf("Polar Co-ordinates = (%lf, %lf)", r, fhi);
    return 0;
}