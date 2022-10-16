/*The distance between two cities (in kilometers) is input through the keyboard. Write a program to covert and print this distance 
in meters, feet, inches and centimeters*/

#include<stdio.h>
int main()
{
    float km, m, ft, cm, inch;
    printf("Enter Distance in Kilometers = ");
    scanf("%f", &km);
    m = km*1000;
    cm = m*100;
    inch = cm/2.54;
    ft = inch/12;
    printf("Distance in Meters = %f\n", m);
    printf("Distance in Feet = %f\n", ft);
    printf("Distance in inches = %f\n", inch);
    printf("Distance in Centimeters = %f\n", cm);
    return 0;
}