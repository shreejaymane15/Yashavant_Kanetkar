/*Temprature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this tempreture into 
Centigrade degrees*/
#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter Temprature in Fahrenheit = ");
    scanf("%f",&f);
    c = ((f-32.0)*(5.0/9.0));
    printf("Celsius = %f",c);
    return 0; 
}