#include <iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
void function1(float &km)
{
    float F= 0;
    char loaiHang[30],*s;
    printf("\tNhap loai hang:");
    fflush(stdin);
    gets(loaiHang);
    if(s=strstr(loaiHang,"hang nhe"))
    {
        if(km <= 2)
        {
            F = 150000;
        }
        else
        {
            F = 25000*km;
        }
    }
    if(s=strstr(loaiHang,"hang cong kenh"))
    {
        if(km <= 2)
        {
            F = 260000;
        }
          else
        {
            F = 35000*km;
        }
    }
    if(s=strstr(loaiHang,"hang nhe"))
    {
        if(km <= 2)
        {
            F = 370000;
        }
          else
        {
            F = 42000*km;
        }
    }
     printf("\nSo tien hoa don %s ",loaiHang );
    printf(" La: %f ",F);

}

void function2(int &n )
{
    do{
        printf("\nNhap n:");
        scanf("%d",&n);
        if(n<1 || n>50)
            printf("\nYeu cau nhap lai n thoa man 1≤n≤50 ");

    }while (n<1 || n>50);
}
void Xoa(int a[] , int &n, int k)
{
    for(int i = k ; i < n;i++)
        a[i] = a[i+1];
    n--;
}

void function3(int a[], int &n, int &x )
{
    function2(n);
    printf("\nNhap mang");
   for(int i = 0;i < n; i++){
        printf(" a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\nMang dao nguoc la");
    for(int i =n-1;i>=0; i--){
        printf("\n a[%d] = %d", i, a[i]);
    }
    int max1 = a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max1)
            max1 = a[i];
    }
    printf("\nGia tri max trong mang la:%d",max1);

    int dem=0,vt=0;
    printf("\nNhap x:");
    scanf("%d",&x);
    printf("\nVi tri cua %d la:",x);
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
        printf("\nMang sau khi xoa %d la:",x);
        printf("\nMang dao nguoc la");
    for(int i =0;i<n; i++){
        printf("\n a[%d] = %d", i, a[i]);
    }
    }

}
using namespace std;

int main()
{
    float km;
    int a[100],n,k,x;
    function1(km);
    function3(a,n,x);
    return 0;
}
