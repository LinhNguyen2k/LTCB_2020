#include <iostream>
#include<stdio.h>
using namespace std;
void Nhap(float a[] , int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n a[%d] =",i);
        scanf("%f",&a[i]);
    }
}
void Xuat(float a[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n a[%d] = %f",i,a[i]);
    }
}
void xoa(float a[], int &n)

{

      for(int i=0;i<n-1;i++)

    for( int k=i+1;k<n;k++)

        if (a[k]==a[i])

        {

            for(int j=k;j<n-1;j++)

            a[j]=a[j+1];

                n--;

            k--;

        }

}
int main()
{
    float a[100];
    int n;
    printf("\nNhap n:");
    scanf("%d",&n);
    Nhap(a,n);
    printf("\nMang vua nhap la:");
    Xuat(a,n);
    xoa(a,n);
    printf("\nMang sau khi xoa la:");
    Xuat(a,n);
    return 0;
}
