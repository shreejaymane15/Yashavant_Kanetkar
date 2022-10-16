/*Paper of size A0 has dimensions 1189 mm * 841 mm. Each subsquent size A(n) is defined as A(n-1) cut in half, parallel to its shorter
sides. Thus, paper of size A1 would have dimensions 841 mm * 594 mm. Write a program to calculate and print paper sizes 
A0, A1, A2,..,A8*/

#include<stdio.h>
int main()
{
    int len = 1189, width = 841, temp = 0;
    printf("A0 = %d * %d\n",len, width);
    len = len/2;
    printf("A1 = %d * %d\n", width, len);
    width = width/2;
    printf("A2 = %d * %d\n", len, width);
    len = len/2;
    printf("A3 = %d * %d\n", width, len);
    width = width/2;
    printf("A4 = %d * %d\n", len, width);
    len = len/2;
    printf("A5 = %d * %d\n", width, len);
    width = width/2;
    printf("A6 = %d * %d\n", len, width);
    len = len/2;
    printf("A7 = %d * %d\n", width, len);
    width  = width/2;
    printf("A8 = %d * %d", len, width);
    return 0;
}