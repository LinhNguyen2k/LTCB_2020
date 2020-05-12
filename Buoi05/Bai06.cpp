#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; i++){
        printf(" a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void XuatMang(int a[], int n){
    for(int i = 0;i < n; i++){
        printf("\n a[%d] = %d", i, a[i]);
    }
}

void Count1(int a[], int n)

{

    int dem = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i] >10)
        {
            dem++;
        }
    }
    if(dem ==0)
    {
        printf("\nKhong co phan tu nao nho hon 10");
    }
    else
    {
        printf("\nSo lan xuat hien cua cac pt lon hon 10 la: %d",dem);
    }

}

void Count2(int a[], int n)
{
    int dem = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i] %3==0 || a[i] % 5 ==0)
        {
            dem++;
        }
    }
    printf("\nSo lan xuat hien cac pt boi cua 3 & 5 la:%d",dem);
}
void Min(int a[], int n)
{ int vt =0;
    for(int i=0;i<n;i++)
    {  int min1 = a[0];
        if(a[i]< min1)
         vt = i;
    }
    printf("\nVi tri dau tien cua min la:%d",vt);
}

int main()
{
    int a[100],x;
    int n;
    do
    {
        printf("\tNhap n:");

        scanf("%d",&n);
        if(n<10 || n >= 20)
            printf("\tYeu Cau Nhap Lai");
    }
    while(n<10 || n> 20);

    printf("\nNhap Mang");
    NhapMang(a,n);
     printf("\n Mang ban vua nhap la:");
     XuatMang(a,n);
     Count1(a,n);
     Count2(a,n);
     Min(a,n);
    return 0;
}

