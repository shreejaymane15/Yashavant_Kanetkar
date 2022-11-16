/*According to Gregorian calender, it was Monday on the date 01/01/01. If any year is input through the keyboard write a program to
find out what is the day on 1st january of this year.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int w, k, Y, C, m;
    printf("Enter the date (DD MM YYYY) = ");
    scanf("%d %d %d", &k, &m, &C);
    if(00 < k < 32 && 0 < m < 13 && 0000 < Y < 9999){
        Y = C % 100;
        C = C / 100;
        if(m == 1){
            m = 11;
            Y = Y - 01;
        }
        else if(m == 2){
            m = 12;
            Y = Y - 01;
        }
        else{
            m = m - 2;
        }
        w = (int) (k + (2.6*m -0.2) - 2 * C + Y + Y/4 + C/4) % 7 ;
        printf("Day is ");
        switch(w){
            case(0):
                printf("Sunday.\n");
                break;
            case(1):
                printf("Monday.\n");
                break;
            case(2):
                printf("Tuesday.\n");
                break;
            case(3):
                printf("Wednesday.\n");
                break;
            case(4):
                printf("Thursday.\n"); 
                break;
            case(5):
                printf("Friday.\n");
                break;
            case(6):
                printf("Saturday.\n");
                break;
        }
    }
    else{
        printf("Date is Wrong");
    }
    return 0;
}