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
    for(int i = 0; i <n; i++)
    {
        printf("\n a[%d] = %f", i, a[i]);
    }
}
void Tong_TBC(float a[], int n)
{
    float s=0;
    int dem = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] < 0 && fabs(a[i])>10)
        {
            s+=a[i];
            dem++;
        }

    }


    if(dem==0)
    {
        printf("\nKhong co phan tu duong nao < 0 va fabs >10");
    }
    else
    {
        printf("\nTBC = %f", s*1.0/dem);
         printf("\nTong = %f", s);
    }


}
void sapxep(float a[], int n)
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
    printf("\nMang vua sap xep lai la:");
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
        if(n<1 || n>30)
            printf("\tYeu Cau Nhap Lai");
    }
    while(n<1 || n> 30);
    NhapMang(a,n);
    printf("\nMang vua nhap la:");
    XuatMang(a,n);
    Tong_TBC(a,n);
    sapxep(a,n);
    return 0;
}
