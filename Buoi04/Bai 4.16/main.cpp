#include <stdio.h>
#include <stdlib.h>
#include<math.h>
using namespace std;
void Nhap(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\na[%d] = ",i);
        scanf("%d",&a[i]);
    }
}
void Xuat(int a[], int &n)
{
    for(int i=n-1;i>=0;i--)
    {
        printf("\na[%d] = %d",i,a[i]);
    }
}
void function1(int a[] , int n)
{  int max1 = a[0],min1 = a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i] < min1 && a[i]%2==0)
        {
            min1 = a[i];
        }
    }
    printf("\nGia Tri Nho nhat trong cac so chan la: %d", min1);
    for(int i=1;i<n;i++)
    {
        if(a[i]>max1 && a[i]%2!=0)
        {
            max1 = a[i];
        }
    }
      printf("\nGia Tri lon nhat trong cac so le la: %d", max1);
}
void Xoa(int a[] , int &n, int k)
{
    for(int i = k ; i < n;i++)
        a[i] = a[i+1];
    n--;
}
void function2(int a[],  int &n)
{
    int x,dem=0,vt=0;
    printf("\nNhap x:");
    scanf("%d",&x);
    printf("\nVi tri cua x=%d la:",x);
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
            printf("\t %d",i);
    }
    printf("\n");
    while(vt <n)

    {
        if(a[vt]==x)
            {
            Xoa(a,n,vt);
            dem++;
            }
        else
            vt++;
    }
    if(dem==0)
    {
        printf("\nKhong co x trong mang");
    }
    else
    {
        printf("\nCo %d phan tu x=%d trong mang",dem,x);
        printf("\nMang sau khi xoa x =%d la:",x);q
        Xuat(a,n);
    }


}
int main()
{
    int a[100],n;
    printf("\nNhap n:");
    scanf("%d",&n);
    Nhap(a,n);
    Xuat(a,n);
    printf("\n");
    function1(a,n);
    function2(a,n);
    return 0;
}
