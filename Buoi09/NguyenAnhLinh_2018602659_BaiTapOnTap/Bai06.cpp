#include <stdio.h>
#include <stdlib.h>
#include<math.h>
using namespace std;
void Nhap(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("\n a[%d] =",i);
        scanf("%d",&a[i]);
    }
}
void Xuat(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("\n a[%d] =%d",i,a[i]);

    }
}
void function1(int a[], int n)
{  int s1=0,s2=0;
    for(int i=0; i<n; i++)
    {
       if(a[i]%2==0 && a[i]>0)
       {
           s1+=a[i];
       }
       if(abs(a[i]<i*i))
        s2+=a[i];
    }
   printf("\nS1 = %d",s1);
   printf("\nS2 = %d",s2);

}
int main()
{
    int a[100],n;
    do
    {
        printf("\tNhap n:");
        scanf("%d",&n);
        if(n<1 || n>50)
        {
            printf("\nYeu cau nhap lai");
        }
    }
    while(n<1 || n>50);
    Nhap(a,n);
    function1(a,n);
    return 0;
}
