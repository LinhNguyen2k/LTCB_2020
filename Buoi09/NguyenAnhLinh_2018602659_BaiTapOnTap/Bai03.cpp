#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
void Nhap(int &a, int &b, float &x)
{
    printf("\tNhap a:");
    scanf("%d",&a);
    printf("\tNhap b:");
    scanf("%d",&b);
    printf("\tNhap x:");
    scanf("%f",&x);
}
void ThucHien(int &a, int &b, float &x)
{
     float F = 0;
    if(a< -20 && b>=10)
    {
        F = (exp(x)+pow(x,5))/ (a+b);
    }
    if(a>=15 && b<=0)
    {
        for(int i=1; i<=a ; i++)
        {
            F+= (sqrt(x*x)+pow( -1,(a+1))*b)/(2*a+1);
        }

    }
    else
        F = fabs(x+cos(b*b));
        printf("\nGia Tri Cua F =%f", F);
}

int main()
{
    int a,b;
    float x;
    Nhap(a,b,x);
    ThucHien(a,b,x);
    return 0;
}
