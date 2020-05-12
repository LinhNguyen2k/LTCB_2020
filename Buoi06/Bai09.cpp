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
   int dem=0,S=0;
  for(int i=0;i<n;i++)
   {
       if( a[i] > 10 && a[i] <50)
       {
           S+=a[i];
           dem++;
       }
   }
       if(dem==0)
    {
        printf("\nKhong co phan tu nao lon hon 10 va nho hon 50");
    }
    else
    {
         printf("\nTBC chia het cho lon hon 10 va nho hon 50  = %d",dem);
    }

}

void Count2(int a[], int n,int x)
{
  printf("\n Nhap x:");
  scanf("%d",&x);
  int dem = 0;
  for(int i=0;i<n;i++)
  {
      if(a[i] ==x)
      {
          dem++;
      }
  }

      if(dem==0)
    {
        printf("\nKhong co phan tu x =%d",x);
    }
    else
    {
         printf("\nSo lan x xuat hien la : %d",dem);
    }
}

void Sum(int a[], int n)
{
    int S = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i] < 0 && a[i] > -10)

            S+=a[i];
    }
    printf("\nGia tri S = %d", S);

}
int main()
{
    int a[100],x;
    int n;
    do
    {
        printf("\tNhap n:");

        scanf("%d",&n);
        if(n<10 || n >= 30)
            printf("\tYeu Cau Nhap Lai");
    }
    while(n<10 || n >= 30);

    printf("\nNhap Mang");
    NhapMang(a,n);
     printf("\n Mang ban vua nhap la:");
     XuatMang(a,n);
     Count1(a,n);
     Count2(a,n,x);
     Sum(a,n);
    return 0;
}
