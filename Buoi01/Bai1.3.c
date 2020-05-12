#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    float n,R,a,CV,S;

    printf("\tNhap n :");
    scanf("%f", &n);
    printf("\tNhap ban kinh R:");
    scanf("%f", &R);
    a = (float)(2*R*sin(M_PI/n));
    CV = (float)n*a;
    S = (n*1.0/2)*R*R*sin(2*M_PI*1.0/n);
    printf("CV =%f \n",CV);
    printf("S =%f \n",S);
    return 0;
}
