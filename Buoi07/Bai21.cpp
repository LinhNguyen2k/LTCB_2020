#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void NhapMang(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf(" a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void XuatMang(int a[], int n)
{
    for(int i = 0; i<n; i++)
    {
        printf("\n a[%d] = %d", i, a[i]);
    }
}
void So_Duong(int a[], int n)
{  printf("\nDay so duong:");
    for(int i=0; i<n; i++)
    {
        if(a[i] < 0 && a[i] %2!=0)
            printf("\t a[%d] =%d",i,a[i]);

    }
    printf("\n");
    printf("\nDay so con lai:");
     for(int i=0; i<n; i++)
    {
        if(a[i] > 0  || a[i]<0 && a[i] %2==0)
            printf("\t a[%d] =%d",i,a[i]);

    }
}

void sapxepGiam(int a[] , int n)
{

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nMang vua sap xep giam dan:");
    XuatMang(a,n);
}
void sapxepTang(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nMang vua sap xep tang dan:");
    XuatMang(a,n);
}
int main()
{
    int a[100];
    int n;
    do
    {
        printf("\tNhap n:");
        scanf("%d",&n);
        if(n<=1 || n>= 50)
            printf("\tYeu Cau Nhap Lai");
    }
    while(n<=1 || n>= 50);
    NhapMang(a,n);
    So_Duong(a,n);
    sapxepGiam(a,n);
    sapxepTang(a,n);

    return 0;
}
