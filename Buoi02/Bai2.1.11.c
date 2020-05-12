#include <stdio.h>
#include <stdlib.h>

int main()
{  int n,dem=0,s=0;
   do{
    printf("\tNhap n:");
    scanf("%d",&n);
    if(n>1000)
    {
        printf("\tYeu Cau nhap n<=1000 \n");
    }
   }while(n>1000);
   if(n>=0 && n<10)
   {
       printf("\tSo co 1 chu so \n");
       s=n;
       printf("\tS=%d \n",s);
       printf("\tChu so cuoi cung cua n la %d :\n",n);
       if(n==0)
       {
           printf("\tChu so dau tien khong co nghia");
       }
       else printf("\tChu so dau tien la: %d \n",n);

       printf("\tSo nay co 1 chu so => khong co chu so hang chuc");
   }
   else if(n<100)
   {
       printf("\tSo co 2 chu so \n");
        s=n%10+n/10;
       printf("\t S=%d \n",s);
       printf("\t Chu so cuoi cung cua n la %d:\n",n%10);
       printf("\tChu so dau tien la: %d \n",n/10);

       printf("\tChu so hang chuc la: %d",n/10);
   }
   else
   {
       printf("\tSo co 3 chu so \n");
       s = n/100+n/10%10+n%10;
         printf("\t S=%d \n",s);
         printf("\t Chu so cuoi cung cua n la %d:\n",n%10);
         printf("\tChu so dau tien la: %d \n",n/100);

         printf("\tChu so hang chuc la: %d",n/10%10);
   }

    return 0;
}
