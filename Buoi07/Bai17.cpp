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
void Tong_TBC(int a[], int n)
{
    float s=0;
    int dem = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0 && a[i] < 0)
        {
            s+=a[i];
            dem++;
        }

    }

     if(dem==0)
    {
        printf("\nKhong co phan tu duam chan nao");
    }
    else
    {
        printf("\nTBC = %f", s*1.0/dem);
         printf("\nTong = %f", s);
    }
}
void sapxep(int a[] , int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {

        if(a[i]<0 || a[j] <0)
        {

             if(a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }


        }
    }
    printf("\nMang vua sap xep lai la:");
    XuatMang(a,n);
}
int main()
{
    int  a[100],x;
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
    printf("\nMang vua nhap la:");
    XuatMang(a,n);
    Tong_TBC(a,n);
    sapxep(a,n);
    return 0;
}
