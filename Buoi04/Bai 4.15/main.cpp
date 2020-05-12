#include <iostream>
#include <stdio.h>
#include<conio.h>
using namespace std;
void Nhap(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n a[%d] =",i);
        scanf("%d",&a[i]);
    }
}
void Xuat(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n a[%d] =%d",i,a[i]);

    }
}
void ThucHien(int a[], int &n)
{  printf("\nCac phan tu chia het cho 3 la:");
int i=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%3==0)
            printf("\n a[%d] =%d",i,a[i]);

    }
    printf("\nCac Phan tu con lai la:");
     for(int i=0;i<n;i++)
    {
        if(a[i]%3!=0)
            printf("\n a[%d] =%d",i,a[i]);

    }
    printf("\nCac Phan tu tren la:");
    Xuat(a,n);
    printf("\nDua so min ve dau roi swap theo chieu giam dan:");
    int min1 = a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min1)
           min1 = a[i];

    }
     printf("\n ",min1);

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j] && a[i]>min1)
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
         printf("\n a[%d] =%d",i,a[i]);
    }


}
int main()
{
    int a[100],n;
    printf("\nNhap n:");
    scanf("%d",&n);
    Nhap(a,n);
    ThucHien(a,n);
    return 0;
}
