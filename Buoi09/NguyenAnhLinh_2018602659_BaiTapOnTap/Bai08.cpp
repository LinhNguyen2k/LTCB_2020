#include <stdio.h>
#include <stdlib.h>
#include<math.h>
using namespace std;
void Nhap(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("\n a[%d] =",i);
        scanf("%d",&a[i]);
    }
}
void Xuat(int a[], int &n)
{
    for(int i=0; i<n; i++)
    {
        printf("\n a[%d] =%d",i,a[i]);

    }
}
void function1(int a[], int n)
{  printf("\nVi tri cua so le va chia het cho 7 la:");
int dem = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!= 0 && a[i]%7==0)
        {

            printf("\n a[%d] =%d : vi tri la: %d",i,a[i],i);
            dem++;
        }
    }
    if(dem==0)
    {
        printf("\nKhong co so nao le va chia het cho7");
    }
}

int main()
{
    int d[100];
     int i,j,k,n,m,z;
    int a[100],b[100],c[100];

    j=0;
    k=0;
    m=0;
    z=0;
    do
    {
        printf("\tNhap n:");
        scanf("%d",&n);
        if(n<1 || n>50)
        {
            printf("\nYeu cau nhap lai");
        }
    }
    while(n<1 || n>50);
    Nhap(a,n);
    printf("\nMang vua nhap la:");
    Xuat(a,n);
    printf("\nMang moi la:");

    for(i=0;i<n;i++)
    {
       if(a[i]%2==0 && a[i]%3==0)
       {
	  b[m]=a[i];
	  m++;
       }
       else if(a[i]%2!=0 && a[i]%5==0)
	    {
	       c[k]=a[i];
	       k++;
	    }
	    else
        {
            d[z] = a[i];
            z++;
        }
    }

     for(j=0;j<m;j++)
       printf("\t%d",b[j]);

      for(j=0;j<z;j++)
       printf("\t%d",d[j]);
    for(j=0;j<k;j++)
       printf("\t%d",c[j]);
       function1(a,n);

    return 0;
}
