#include <stdio.h>
#include <stdlib.h>
float gt(float n)
{
    if(n==1)
        return 1;
    else
        return n*gt(n-1);
}
int main()
{  int n,m;

    printf("\tNhap n:");
    scanf("%d",&n);
    printf("\tNhap m:");
    scanf("%d",&m);
    float s=0;
    s = (gt(n)+gt(m))/(gt(n+m));
    printf("Ket Qua =%f",s);
    return 0;
}
