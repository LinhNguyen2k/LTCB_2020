#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    float a,b,c,CV,S,R,p;
    printf("\tNhap canh a:");
    scanf("%f",&a);
    printf("\tNhap canh b:");
    scanf("%f",&b);
    printf("\tNhap canh c:");
    scanf("%f",&c);
    if(a+b<=c || b+c<=a || c+a <=b)
    {
        printf("Day Khong Phai Tam Giac");
        return 0;
    }
    else
    p = (a+b+c)/2;
    CV = 2*p;
    S = sqrt(p*((p-a)*(p-b)*(p-c)));
    R = (a*b*c)/(4*S);
    printf("S =%f \n",S);
    printf("R =%f \n",R);
    printf("CV =%f \n",CV);

    return 0;
}
