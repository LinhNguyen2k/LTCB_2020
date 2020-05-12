#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    float a,b,c,R,S;

    printf("\tNhap canh a:");
    scanf("%f",&a);
    printf("\tNhap canh b:");
    scanf("%f",&b);
    c = sqrt(a*a + b*b);
    R = (float)(c/2);
    S = (a*b)/2;
       printf("S =%f \n",S);
    printf("R =%f \n",R);
    printf("c =%f \n",c);
    return 0;
}
