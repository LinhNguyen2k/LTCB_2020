#include <iostream>
#include <stdio.h>
#include<math.h>
void NhapMang(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n a[%d] = %d",i,(i*i+2));
    }
}
void function1(int a[], int n)
{
   int T=0;
    for(int i=0;i<n;i++)
    {
        if((i*i+2)%3==0)
            T+=(i*i+2);
    }
    printf("\nS1= %d",T);
}
void function2(int a[], int n)
{
    float S=0;
    for(int i=0;i<n;i++)
    {
        if((i*i+2)%7==4)
           S+=sqrt((i*i+2));
    }
    printf("\nS2= %f",S);
}
int main()
{
        int a[100];
    int n;
    do{
        printf("\tNhap n:");
    scanf("%d",&n);
    if(n<1 || n>50)
    {
        printf("\nYeu Cau Nhap Lai");

    }
    }while(n<1 || n>50);
    NhapMang(a,n);
    function1(a,n);
    function2(a,n);
    return 0;
}
