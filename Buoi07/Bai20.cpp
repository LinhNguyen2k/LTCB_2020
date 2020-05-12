#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void NhapMang(float a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf(" a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

void XuatMang(float a[], int n)
{
    for(int i = 0; i<n; i++)
    {
        printf("\n a[%d] = %f", i, a[i]);
    }
}
void So_Duong(float a[], int n)
{  printf("\nDay so duong:");
    for(int i=0; i<n; i++)
    {
        if(a[i]> 0 && a[i] %2==0)
            printf("\t a[%d] =%f",i,a[i]);
    }
    printf("\n");
}
void So_Am(float a[], int n)
{printf("\nDay so con lai:");
    for(int i=0; i<n; i++)
    {
        if(a[i] < 0)
            printf("\t a[%d] =%f",i,a[i]);
    }
    printf("\n");
}
void sapxepGiam(float a[], int n)
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
void sapxepTang(float a[], int n)
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
    float a[100],x;
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
    So_Am(a,n);
    sapxepGiam(a,n);
    sapxepTang(a,n);

    return 0;
}
