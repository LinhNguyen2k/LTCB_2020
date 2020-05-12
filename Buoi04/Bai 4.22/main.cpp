#include <stdio.h>
#include <stdlib.h>
#include<math.h>
using namespace std;


int main()
{

    int n,a[50],i;


    do
    {
        printf("\tNhap n:");
        scanf("%d",&n);
        if(n<10 || n>500)
        {
            printf("\nYeu cau nhap lai");
        }
    }
    while(n<10 || n>500);

 for(i=0;n>0;i++)
{
a[i]=n%2;
n=n/2;
}
printf("\nDang nhi phan la: ");
for(i=i-1;i>=0;i--)
{
printf("%d",a[i]);
}

    return 0;
}
