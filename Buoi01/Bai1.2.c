#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,Tong,Tich,TBC;

    printf("\tNhap a:");
    scanf("%f", &a);
    printf("\tNhap b:");
    scanf("%f", &b);
    printf("\tNhap c:");
    scanf("%f", &c);
    printf("\tNhap d:");
    scanf("%f", &d);

    Tong = (float)(a+b+c+d);
    Tich = (float)(a*b*c*d);
    TBC = (float)Tong/4;
    printf("Tong = %f \n",Tong);
    printf("Tich = %f \n",Tich);
    printf("TBC = %f \n",TBC);

    return 0;
}
