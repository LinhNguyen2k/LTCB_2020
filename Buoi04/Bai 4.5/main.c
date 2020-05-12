#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void NhapMang(float a[], int n){
    for(int i = 0;i < n; i++){
        printf(" a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

void XuatMang(float a[], int n){
    for(int i = n-1;i >=0; i--){
        printf("\n a[%d] = %f", i, a[i]);
    }
}
void Ktra( float a[], int n, float x)
{  int dem =0;
    printf("tNhap x can tim:");
    scanf("%f",&x);
    printf("\t\nCac Vi Tri Cua x:");
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            dem++;
            printf("%d \t", i);

        }
        if(dem==0)
        {
            printf("\tKhong co x trong mang");
        }
    }
    printf("x xuat hien %d",dem);
    printf("lan");
}
void Xoa(float a[], int &n, float k)
{

    for(int i=k;i<n;i++)
    {
        a[i] = a[i+1];

    }
 n--;
}
void XoaK(float a[], int n)
{  float k;
int vt =0;
    printf("\t Nhap k:");
    scanf("%f",&k);
    while(vt <n)
    {
        if(a[vt]==k)
        {
            Xoa(a,n,vt);
        }
        else vt++;
    }
    XuatMang(a,n);
}
int main()
{
    float a[100],x;
    int n;
    do
    {
        printf("\tNhap n:");
        scanf("%d",&n);
        if(n<=1 || n>= 50)
            printf("\tYeu Cau Nhap Lai");
    }
    while(n<=1 || n>= 50);
    NhapMang(a,n);
    XuatMang(a,n);
    Ktra(a,n,x);
    XoaK(a,n);
    return 0;

