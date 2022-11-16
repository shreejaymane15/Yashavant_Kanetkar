/*Wind-chill factor is the felt air temprature on exposed skin due to wind. The wind-chill tempreture is always lower than the air 
tempreture, and is calculated as per the following formula: wcf = 35.74 + 0.6215t + (04275t - 35.75) * v^0.16 where t is tempreture
and v is wind velocity. Write a program to receive values of t and v and calculate wind-chill factor(wcf).*/

#include<stdio.h>
#include<math.h>
int main()
{
    float t, v, wcf;
    printf("Enter Temprature = ");
    scanf("%f", &t);
    printf("Enter Wind Speed = ");
    scanf("%f", &v);
    wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);
    printf("Wind-chill coefficient = %f", wcf);
    return 0; 
}