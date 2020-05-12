#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int a;
    printf("\tNhap 1 ky tu:");
    scanf("%d",&a);
   if(a<=90 &&  a >=65 || a <=122 && a>=97)
   {
       printf("\tKy tu vua nhap vao la ky tu chu cai");
   }
   else if(a <=57 && a>=48)
   {
       printf("\tKy tu cua nhap vao la ky tu so");
   }
   else
    printf("\tKy tu khac");

    return 0;
}
