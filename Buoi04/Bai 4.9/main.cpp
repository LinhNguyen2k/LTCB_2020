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
{ float s =0;
     printf("\nDay so duong:");
    for(int i=0; i<n; i++)
    {
        if(a[i]> 0)
        {
             printf("\t a[%d] =%f",i,a[i]);
             s+=a[i];
        }

    }
    printf("\tTong = %f",s);
    printf("\n");
}
void So_Am(float a[], int n)
{  float s = 0;
    printf("\nDay so am:");
    for(int i=0; i<n; i++)
    {
        if(a[i] < 0)
        {
             printf("\t a[%d] =%f",i,a[i]);
             s+=a[i];
        }

    }
     printf("\tTong = %f",s);
    printf("\n");
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
    printf("\nMang vua nhap la:");
    XuatMang(a,n);
    So_Duong(a,n);
    So_Am(a,n);


    return 0;
}
