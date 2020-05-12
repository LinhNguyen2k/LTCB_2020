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

void TBC1(int a[], int n)
{
   int dem=0;
   float S= 0;
   for(int i=0;i<n;i++)
   {
       if( a[i]%5==0)
       {
           S+=a[i];
           dem++;
       }
   }
       if(dem==0)
    {
        printf("\nKhong co phan tu nao chia het cho 5");
    }
    else
    {
         printf("\nTBC chia het cho 5 = %f", S*1.0/dem);
    }

}

void TBC2(int a[], int n)
{
   int dem1=0,dem2=0;
   float S1= 0,S2=0;
   for(int i=0;i<n;i++)
   {
       if( a[i]%3==0)
       {
           S1+=a[i];
           dem1++;
       }
       if(a[i]<0)
       {
          S2+=a[i];
          dem2++;
       }
   }

     if(dem1==0)
    {
        printf("\nKhong co phan tu nao chia het cho 3");
    }
    else
    {
         printf("\nTBC chia het cho 3 = %f", S1*1.0/dem1);
    }
    if(dem2==0)
    {
        printf("\nKhong co phan tu nao < 0");
    }
    else
    {
        printf("\n Tong am = %f", S2);
    }
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
    int a[100];
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
     TBC1(a,n);
     TBC2(a,n);
     Sort(a,n);
    return 0;
}

