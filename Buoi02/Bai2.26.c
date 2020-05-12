#include <stdio.h>
#include <stdlib.h>

int main()
{    int n,s=1;
    do{
        printf("\Nhap n:");
        scanf("%d",&n);
        if(n<2 || n>10)
        {
            printf("\tNhap la 2<=n<=10");
        }
    }while(n<2 || n>10);

    for(int i=0;i<=10;i++)
    {
       printf("%d * %d = %d \n",n,i,i*n);

    }
    return 0;
}
