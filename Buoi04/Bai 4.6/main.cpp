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
void Chen(float a[], int &n, float k, int vt)
{   n++;

    for(int i=n;i>vt;i--)
    {
        a[i] = a[i-1];

    }
  a[vt] = k;
}
void Chenk(float &a[], int &n)
{  float k;
    printf("\t Nhap k:");
    scanf("%f",&k);
  for(int i=0 ; i< n;i++)
  {
      if(k>a[i] || k<a[i])

        Chen(a,n,k,i);
        break;
  }
        printf("\nMang sau khi chen la:");
    XuatMang(a,n);
}
void sapxep(float a[] , int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nMang vua sap xep lai la:");
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
    printf("\nMang nguoc lai la:");
    XuatMang(a,n);
    sapxep(a,n);
    Chenk(a,n);
    return 0;
}
