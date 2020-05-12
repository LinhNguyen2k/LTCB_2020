#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; i++){
        printf(" a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void DaoNguoc(int a[], int n){
    for(int i = n-1;i >=0; i--){
        printf("\n a[%d] = %d", i, a[i]);
    }
}

void XuatMang(int a[], int n){
    for(int i = 0;i < n; i++){
        printf("\n a[%d] = %d", i, a[i]);
    }
}

void SoChan(int a[], int n)
{
    printf("\nCac phan tu chan la:");
    for(int i=0;i<n;i++)
    {
        if(a[i] %2==0)
        {
            printf("\t%d",a[i]);
        }
    }
}
void Sum(int a[], int n)
{
   int S=0,dem=0;
   for(int i=0;i<n;i++)
   {
       if(a[i] %2!=0 && a[i] <0)

        {
        S+=a[i];
        dem++;
        }
   }
   if(dem ==0)
   {
       printf("\n Khong co phan tu nao chan va <0");
   }
   else
   {
         printf("\n\tTong cac phan tu chan va nho hon 0 = %d", S);

   }
}
int main()
{
    int a[100];
    int n;
    do
    {
        printf("\tNhap n:");
        scanf("%d",&n);
        if(n<10 || n> 20)
            printf("\tYeu Cau Nhap Lai");
    }
    while(n<10 || n> 50);
    printf("\nNhap mang");
   NhapMang(a,n);
   printf("\nMang vua nhap la":);
    XuatMang(a,n);
    printf("\nMang nguoc lai la");
    DaoNguoc(a,n);
    SoChan(a,n);
    Sum(a,n);
    return 0;
}
