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
    int S = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i] %2 ==0)

            S+=a[i];
    }
    printf("\nGia tri S = %d", S);

}

void TBC1(int a[], int n)
{
   int dem=0;
   float S= 0;
   for(int i=0;i<n;i++)
   {
       if( a[i] >=-10 && a[i] <=10)
       {
           S+=a[i];
           dem++;
       }
   }
       if(dem==0)
    {
        printf("\nKhong co phan tu nao trong khoang -10 den 10");
    }
    else
    {
         printf("\nTBC cua cac phan tu trong khoang -10 den 10 = %f", S*1.0/dem);
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
        if(n<10 || n >= 40)
            printf("\tYeu Cau Nhap Lai");
    }
    while(n<10 || n> 40);

    printf("\nNhap Mang");
    NhapMang(a,n);
     printf("\n Mang ban vua nhap la:");
     XuatMang(a,n);
     Sum(a,n);
     TBC1(a,n);
     Sort(a,n);
    return 0;
}
