#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int chon;
    printf("\t==============MENU=============\n");
    printf("\t1. Function 1 \n");
    printf("\t2. Function 2 \n");
    printf("\t3. Function 3  \n");
    printf("\t0. Thoat \n");
    do
    {
        printf("\tNhap lua chon phep toan:");
        scanf("%d",&chon);
        int n;
        printf("\t Nhap n:");
        scanf("%d",&n);
        switch(chon)
        {
        case 1:
        {
            int s=1;
            for(int i=1;i<=n;i++)
            {
                s*=i;
            }
            printf("\t%d",n);
            printf(" ! =");
            printf("\t%d",s);
            break;

        }
        case 2:
        {
            float s=0;
            for(int i=1;i<=n;i++)
            {
                s+=1*1.0/i;
            }
            printf("\tS = %f",s);
            break;

        }
        case 3:
        {
            float s=0;
            for(int i=1;i<=n;i++)
            {
                s+=pow(i,2);
            }
            printf("\tS = %f",s);
            break;

        }

        case 0:
            return;
        }
    }
    while(1);
    return 0;
}
