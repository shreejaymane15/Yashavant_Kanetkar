/*In a digital world colors are specified in Red-Green-Blue (RGB) format, with values of R, G, B varying on an integer scale from 0 to 255.
In print publishing the colors are mentioned in Cyan-Mangta-Yellow-Black (CMYK) format, with values of C M Y and K varying on a real scale from
0.0 to 1.0. Write a program that converts RGB color to CMYK color as per the following formulae:
White = Max(Red/255, Green/255, Blue/255)
Cyan = ((White - Red/255)/White)
Mangeta = ((White - Green/255)/White)
Yellow = ((White - Blue /255)/White)
Black = 1 - White
Note that if the RGB values are all 0, then the CMY values are all 0 and the K value is 1.*/

#include<stdio.h>
#include<math.h>
float max(float x, float y, float z);
int main()
{
    float R, G, B, x, y ,z, W, C, M, Y, K;
    printf("Enter Scale of Red = ");
    scanf("%f",&R);
    printf("Enter Scale of Green = ");
    scanf("%f",&G);
    printf("Enter Scale of Blue = ");
    scanf("%f",&B);
    if(0<=R<=255 && 0<=G<=255 && 0<=B<=255)
    {
        if( R == 0 && G == 0 && B == 0)
        {
            C, M, Y = 0;
            K = 1;
            printf("Cyan = 0\nMagneta = 0\nYellow = 0\nBlack = 1");
        }
        else
        {
            x = R/255, y = G/255, z = B/255;
            W = max(x, y, z);
            printf("x = %f, y = %f, z = %f, W = %f", x, y, z);
            C = (W - x)/W;
            M = (W - y)/W;
            Y = (W - z)/W;
            K = 1 - W;
            printf("Cyan = %f\nMagneta = %f\nYellow = %f\nBlack = %f", C, M, Y, K);
        }
    }
    else
    {
        printf("Write Scale Between 0 to 255");
    }
    return 0;
}

float max(float x, float y, float z)
{
    if(x>y && x>z)
    {
        return x;
    }
    else if(y>x && y>z)
    {
        return y;
    }
    else
    {
        return z;
    }
}