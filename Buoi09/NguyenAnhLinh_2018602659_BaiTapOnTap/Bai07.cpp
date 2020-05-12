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
void Xuat(int a[], int &n)
{
    for(int i=0; i<n; i++)
    {
        printf("\n a[%d] =%d",i,a[i]);

    }
}
void Xoa(int a[] , int &n, int k)
{
    for(int i = k ; i < n;i++)
        a[i] = a[i+1];
    n--;
}
void function1(int a[], int &n)
{  printf("\nXoa cac so chan va chia het cho 3:");
int vt=0;
     while(vt<n)
     {
         if(a[vt]%2==0 && a[vt]%3==0)
         {
             Xoa(a,n,vt);
         }
         else
            vt++;
     }
     Xuat(a,n);

}
void function2(int a[], int &n)
{  printf("\nXoa cac so trong khoang [10,30] la:");
int vt=0;
     while(vt<n)
     {
         if(a[vt]>=10 && a[vt]<=30)
         {
             Xoa(a,n,vt);
         }
         else
            vt++;
     }
     Xuat(a,n);

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
    printf("\nMang vua nhap la:");
    Xuat(a,n);
    function1(a,n);
    function2(a,n);
    return 0;
}
