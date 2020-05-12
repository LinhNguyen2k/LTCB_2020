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
   int S= 0,dem=0;

   for(int i=0;i<n;i++)
   {
       if(a[i] %3==0 && a[i]%4==0)
       {
           S+=a[i];
           dem++;
       }
   }
   if(dem!=0)
   {
       printf("\nTBC = %f", S*1.0/dem);
   }
   else
   {
       printf("\nKhong co phan tu nafo chia hest cho 3 & 4 ");
   }

}
void Count(int a[], int n,   int x)

{
    printf("\nNhap x can tim:");
    scanf("%d",&x);
    int dem = 0;
    for(int i=0;i<n;i++)
    {
        if(x == a[i])
        {
            dem++;
        }
    }
    printf("\nSo lan xuat hien cua %d",x);
    printf(" la : %d",dem);
}

void Sort(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
      for(int j=i ; j<n ;j++)
      {
          if(a[i] < a[j])
          {
              int temp = a[i];
              a[i] = a[j];
              a[j] = temp;
          }
      }
    }
    XuatMang(a,n);
}

int main()
{
    int a[100],x;
    int n;
    do
    {
        printf("\tNhap n:");

        scanf("%d",&n);
        if(n<10 || n> 100)
            printf("\tYeu Cau Nhap Lai");
    }
    while(n<10 || n> 100);

    printf("\nNhap Mang");
    NhapMang(a,n);
     printf("\n Mang ban vua nhap la:");
     XuatMang(a,n);
     Sum(a,n);
     Count(a,n,x);
     printf("\n\tMang sau khi sap xep tang dan la:");
     Sort(a,n);
    return 0;
}

