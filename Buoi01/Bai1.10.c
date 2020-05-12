#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,n,a1;
    float S,An;
    printf("\tNhap d:");
    scanf("%d",&d);
     printf("\tNhap n:");
    scanf("%d",&n);
     printf("\tNhap a1:");
    scanf("%d",&a1);
    An = a1+(n-1)*d;
    S=(float)((a1+An)*n)/2;
    printf("\tTong CSC =%f", S);
    return 0;
}
