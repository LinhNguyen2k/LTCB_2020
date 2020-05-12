#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void NhapMang(float a[], int n){
    for(int i = 0;i < n; i++){
        printf(" a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

void XuatMang(float a[], int n){
    for(int i = 0;i<n; i++){
        printf("\n a[%d] = %f", i, a[i]);
    }
}
int max(float a[] , int n)
{
    float max1 = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=max1)
            max1 = a[i];
    }
   return max1;
}
int  min(float a[] , int n)
{
    float min1 = a[0];
    for(int i=0 ; i<n;i++)
    {
        if(a[i]<min1)
            min1 = a[i];
    }
    return min1;
}
void Liet_Ke(float a[] , int n)
{
printf("\nVi tri min la:");
    for(int i=0;i<n;i++)
    {
        if(a[i]==max(a,n))
        {
            printf("\t%d ",i);
            printf("\t Max = %f",a[i]);
        }

    }
    printf("\nVi tri min la:");
    for(int i=0;i<n;i++)
    {
        if(a[i]==min(a,n))
        {
             printf("\t%d ",i);
            printf("\t Min = %f",a[i]);
        }

    }
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
    Liet_Ke(a,n);
    return 0;
}
