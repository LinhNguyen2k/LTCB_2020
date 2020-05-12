#include <stdio.h>
#include <stdlib.h>
int SNT(int n)
{
    if(n<2)
        return 0;
    else
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
                return 0;
        }
    }
    return 1;
}
int main()
{  int n;
    printf("\tNhap n:");
    scanf("%d",&n);
    if(SNT(n)==0)
    {
        printf("%d",n);
        printf("\t khong la SNT");
    }
    else
    {
        printf("%d",n);
        printf("\t  la SNT");
    }
    return 0;
}
