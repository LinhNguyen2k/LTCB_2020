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
void Sum(int a[], int n)
{
   int S=0;
   for(int i=0;i<n;i++)
   {
       if(a[i] > 0 && a[i] %2 !=0)
        S+=a[i];
   }
   printf("\n\tTong cac phan tu duong le = %d", S);
}
void Min(int a[], int n)
{
    int min1 = a[0];
    for(int i=0;i<n;i++)
    {
       if(a[i]< min1 );
        min1 = a[i];
    }
    printf("\nGia tri nho nhat = %d", min1);
}

int main()
{
    int a[100],x;
    int n;
    do
    {
        printf("\tNhap n:");
        scanf("%d",&n);
        if(n<10 || n> 50)
            printf("\tYeu Cau Nhap Lai");
    }
    while(n<10 || n> 50);
    printf("\nNhap Mang");
    NhapMang(a,n);
     printf("\n Mang ban vua nhap la:");
     XuatMang(a,n);
     Sum(a,n);
     Min(a,n);
    return 0;
}
