#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int snt(int n)
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
using namespace std;

int main()
{
    int n,a[100000],i=0;
    printf("\tNhap n:");
    scanf("%d",&n);
    while(n<=99999)
    {
        a[i] = n;
        printf("\n a[%d] =%d",i,a[i]);
        if(a[i]%2==0 && a[i]%5==0)
            printf("\n a[%d] =%d chia het cho 2 va 5",i,a[i]);
            if(snt(i))
            printf("\n a[%d] =%d SNT",i,a[i]);
        n++;
        i++;
    }

    return 0;
}
