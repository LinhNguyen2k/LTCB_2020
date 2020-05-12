#include <iostream>
#include <stdio.h>
#include<math.h>
void NhapMang(float a[], int n){
    for(int i = 0;i < n; i++){
        printf(" a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

void xuat(float a[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n a[%d] = %f",i,a[i]);
    }
}
void TinhT1(float a[], int n)
{  float s=0;
    for(int i=0;i<=n;i++)
    {
        s+=pow(-1,i)*a[i-1];
    }
    printf("\nS1 =%f",s);
}
void TinhT2(float a[], int n)
{
    float s=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            break;
        }
        else
        {
            s+=pow(-1,i)*(1*1.0/a[i]);
        }
    }
    printf("\nS2 =%f",s);
}
int main()
{
    float a[100];
    int n;
    do{
        printf("\tNhap n:");
    scanf("%d",&n);
    if(n<1 || n>50)
    {
        printf("\nYeu Cau Nhap Lai");

    }
    }while(n<1 || n>50);

    NhapMang(a,n);
    xuat(a,n);
    TinhT1(a,n);
    TinhT2(a,n);
    return 0;
}
