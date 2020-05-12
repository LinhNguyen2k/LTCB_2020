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
    for(int i = n-1;i >=0; i--){
        printf("\n a[%d] = %f", i, a[i]);
    }
}
void Max1(float a[], int n)
{
   float max2= 0;
   for(int i=0;i<n;i++)
   {
       if(a[i]<max2)
        max2 = a[i];
   }
   printf("\nGia Tri Min = %f", max2);
}
void Tong_TBC(float a[], int n)
{
    float s=0;
    int dem = 0;
    for(int i=0;i<n;i++)
    {
        s+=a[i];
        dem++;
    }
    printf("\nTong = %f", s);
    printf("\nTBC = %f", s*1.0/dem);
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
    printf("\nMang dao nguoc la:");
    XuatMang(a,n);
    Max1(a,n);
    Tong_TBC(a,n);
    return 0;
}
