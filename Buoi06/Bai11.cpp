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

void Duong(int a[], int n)
{
  printf("\tCac phan tu duong la:");
  for(int i=0;i<n;i++)
  {
      if(a[i]>0)
      {
          printf("\t %d",a[i]);
      }
  }
}

int Max(int a[], int n)
{
    int max1 = a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]> max1)

            max1 = a[i];
    }
    return max1;

}
 void inMax(int a[], int n)

 { int   b = Max(a,n);
      printf("\nCac vi tri cua max la:");
   for(int i=0;i<n;i++)
     {
         if(a[i] == b)
         {
             printf("\t%d",i);
         }
     }
 }

 void Sort(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
      for(int j=i ; j<n ;j++)
      {
          if(a[i] > a[j])
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
     Duong(a,n);
     inMax(a,n);
      printf("\n Mang sau khi sap xep giam dan la:");
      Sort(a,n);
    return 0;
}
