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
void function1(int a[], int n, int x)
{
    printf("\n Nhap x:");
    scanf("%d",&x);
    a[2] = x;
    printf("\nMang sau khi thay gia tri x la:");
    Xuat(a,n);
    for(int i=0;i<n;i++)
    {
        if(a[i] < 0)
            a[i] = 0;
    }
    printf("\nMang sau khi thay a[i] <0 = 0");
    Xuat(a,n);
    int dem=0;
    printf("\nChi so le la:");
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            dem++;
        }
        else
            printf("\t %d",i);
    }
    printf("\n So phan tu chan la: %d",dem);
}

int main()
{

    int a[100],x,n;


    do
    {
        printf("\tNhap n:");
        scanf("%d",&n);
        if(n<3 || n>50)
        {
            printf("\nYeu cau nhap lai");
        }
    }
    while(n<3 || n>50);
    Nhap(a,n);
    printf("\nMang vua nhap la:");
    Xuat(a,n);

    function1(a,n,x);

    return 0;
}
