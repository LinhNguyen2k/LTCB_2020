#include <stdio.h>
#include <stdlib.h>
#include<math.h>
using namespace std;
void Nhap(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n a[%d] =",i);
        scanf("%d",&a[i]);
    }
}
void Xuat(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n a[%d] =%d",i,a[i]);

    }
}
void function1(int a[], int n)
{  printf("\nCac phan tu nam tron khoang [50;100]");
    for(int i=0;i<n;i++)
    {
        if(a[i]>=50 && a[i]<=100)
        {
            printf("\n a[%d] =%d",i,a[i]);
        }
    }
    int max1 = a[0],dem=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max1)
        {
            max1 = a[i];

        }
    }
    printf("\nMax =%d",max1);
    for(int i=0;i<n;i++)
    {
        if(a[i]==max1)
            dem++;
    }
    printf("\nSo luong phan tu bang max la:%d",dem-1);
    float s1=0,s2=0;
    int dem2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
            s1+=a[i];
        else
        {
            s2+=a[i];
            dem2++;
        }
    }
    printf("\nTong cac so le =%f",s1);
    printf("\nTong TBC cac so chan =%f",s2*1.0/dem2);
    float TBC=0;
    int dem3=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=20 && a[i]<=200)
        {
            TBC+=a[i];
            dem3++;
        }
    }
    printf("\nTong TBC cac so doan [20,200] =%f",s2*1.0/dem2);


}
int main()
{
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
  function1(a,n);
  printf("\nSwap le o dau day cuoi day la chan");
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            b[m]=a[i];
            m++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }

    }


    for(j=0; j<k; j++)
        printf("\t%d",c[j]);
    for(j=0; j<m; j++)
        printf("\t%d",b[j]);


    return 0;
}

