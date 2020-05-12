#include <stdio.h>
#include <stdlib.h>

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
void Max(int a[], int n)
{  int max1 = 0;
    for(int i=0;i < n; i++)
    {
        if(max1 < a[i])
            max1 = a[i];
    }
    printf("\n Gia Tri Lon Nhat = %d",max1);
}
void Tong_TBC(int a[], int n)
{
    float s=0;
    int dem =0;
    for(int i=0; i< n ;i++)
    {
        s+=a[i];
        dem++;
    }
    printf("\n Tong = %f",s);
    printf("\n TBC = %f",s/dem);
}
int main()
{
    int a[40],n;
    do
    {
        printf("\tNhap n:");
        scanf("%d",&n);
        if(n<=1 || n>= 30)
            printf("\tYeu Cau Nhap Lai");
    }
    while(n<=1 || n>= 30);
    NhapMang(a,n);
    XuatMang(a,n);
    Max(a,n);
    Tong_TBC(a,n);
    return 0;
}
