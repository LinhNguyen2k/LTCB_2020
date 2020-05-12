#include<stdio.h>
#include<conio.h>
using namespace std;
void nhapmang(int a[], int &n)
{ printf("nhap so phan tu :" );
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  { printf(" phan tu thu %d :",i);
    scanf("%d",&a[i]);
  }
}
void xuatmang(int a[],int n)
 {
  for(int i=0;i<n;i++)
     {
        printf("%d \t",a[i]);
     }
 }
int timphantuamnhonhat(int a[],int n)
{
 int ln;
 for(int i=0;i<n;i++)
 {
 if(a[i]<0)
  {
   ln=a[i];
   for(int j=0;j<n;j++)
    {
     if(a[j]>ln && a[j]<0)
   ln=a[j];

    }
 }
 }
 return ln;
}
int timphantuduonnhonhat(int a[],int n)
{
 int ln;
 for(int i=0;i<n;i++)
 {
 if(a[i]>0)
  {
   ln=a[i];
   for(int j=0;j<n;j++)
    {
     if(a[j]<ln && a[j]>0)
   ln=a[j];

    }
 }
 }
 return ln;
}
int main()
{
 int a[50],n;
 nhapmang(a,n);
 xuatmang(a,n);
 printf("\nphan tu am lon nhat la: %d",timphantuamnhonhat(a,n));
  printf("\nphan tu duong nho nhat la: %d",timphantuduonnhonhat(a,n));

 return 0;
}
