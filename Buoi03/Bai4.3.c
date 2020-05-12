#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
void Tong_TBC(int a[], int n)
{
    float s=0;
    int dem =0;
    for(int i=0; i< n ;i++)
    {
        if(a[i]< 0 && abs(a[i])>10)
        {
            s+=a[i];
        dem++;
        }

    }
    printf("\n Tong = %f",s);
    printf("\n TBC = %f",s/dem);
}
void sapxep(int a[], int n)
{
    for(int i=0 ; i< n ; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i] < a[j])
            {
                int temp = a[i];
                a[i]= a[j];
                a[j] = temp;
            }
        }
    }
    XuatMang(a,n);
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
    Tong_TBC(a,n);
    sapxep(a,n);
    return 0;
}
