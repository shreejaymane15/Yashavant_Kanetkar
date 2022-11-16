/*If ages of Ram, Shyam, and Ajay are input through the keyboard, write a program to determine the youngest of the three.*/
#include<stdio.h>
int main()
{
    int age_ram, age_shyam, age_ajay;
    printf("Enter age of Ram = ");
    scanf("%d",&age_ram);
    printf("Enter age of Shyam = ");
    scanf("%d",&age_shyam);
    printf("Enter age of Ajay = ");
    scanf("%d",&age_ajay);
    if(age_ram < age_shyam && age_shyam < age_ajay){
        printf("The Ram is youngest");
    }
    else if(age_shyam < age_ram && age_shyam < age_ajay){
        printf("The Shyam is Youngest");
    }
    else if(age_ajay < age_ram && age_ajay < age_shyam){
        printf("The Ajay is youngest");
    }
    else
    {
        printf("The ages of Ram, Shyam and Ajay are same");
    }
}