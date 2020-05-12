#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    int a,b;
    float x, F=0;
    printf("\tNhap a:");
    scanf("%d",&a);
    printf("\tNhap b:");
    scanf("%d",&b);
    printf("\tNhap x:");
    scanf("%f",&x);

    if(a> 2 && b<1)
    {
       F = pow((x*log(x)), 3)/ (a*a+b*b);
    }
    else if(a==1 && b>=10)
    {
        for(int i=1 ; i<=b ;i++)
        {
            F+= (pow(x,(2*b)+1))/(3*b);
        }
    }
    else
        fabs(a*sin(x) +b);
    printf("\nGia Tri Cua F =%f", F);
    return 0;
}
