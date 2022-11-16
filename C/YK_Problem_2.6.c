/*Write a program to recieve values of latitudes (L1, L2) and longitude (G1, G2), in degrees, of two places on the earth and output the 
distance (D)between them in nautical miles. The formula for distance in nautical miles is 
D = 3963 cos^-1(sin L1 sin L2 + cos L1 cos L2 * cos(G2 - G1))*/

#include<stdio.h>
#include<math.h>
int main()
{
    double L1, L2, G1, G2, D;
    printf("Enter latitude = ");
    scanf("%lf %lf", &L1, &L2);
    L1 = L1 * (	3.14159265358979323846/180);
    L2 = L2 * (	3.14159265358979323846/180);
    printf("Enter Longitude = ");
    scanf("%lf %lf", &G1, &G2);
    G1 = G1 * (	3.14159265358979323846/180);
    G2 = G2 * (	3.14159265358979323846/180);
    D = 3963 * acos((sin(L1)*sin(L2))+((cos(L1)*cos(L2))*(cos(G2-G1))));
    printf("Distance in nautical Miles = %lf",D);
    return 0;
} 