#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int chon;
    printf("\t==============MENU=============\n");
    printf("\t1. function 1 \n");
    printf("\t2. function 2 \n");
    printf("\t3. function 3 \n");
    printf("\t4. function 4 \n");
    printf("\t5. function 5 \n");
    printf("\t6. function 6 \n");
    printf("\t7. function 7 \n");
    printf("\t8. function 8 \n");
    printf("\t9. function 9 \n");
    printf("\t10. function 10 \n");
    printf("\t11. function 11 \n");
    printf("\t0. Thoat \n");
    do
    {
        printf("\tNhap lua chon:");
        scanf("%d",&chon);
        int n;
        printf("\tNhap n:");
        scanf("%d",&n);
        switch(chon)
        {
        case 1:
        {
            int s=0;
            for(int i=0; i<=n; i++)
            {
                s+=i;
            }
            printf("\tfunction 1 =%d",s);
            break;
        }
        case 2:
        {
            int s=1;
            for(int i=1; i<=n; i++)
            {
                s*=i;
            }
            printf("\tfunction 2 =%d",s);
            break;
        }
        case 3:
        {
            float s=1;
            for(int i=1; i<=n; i++)
            {
                s=s+1*1.0/i;
            }
            printf("\tfunction 3 =%f",s);
            break;
        }
        case 4:
        {
            float s1=1,s2=1;
            for(int i=1; i<=n; i++)
            {
                s2*=2;
                s1+=s2;
            }
            printf("\tfunction 4 =%f",s1);
            break;
        }
        case 5:
        {
            float s=1;
            for(int i=1; i<=n; i++)
            {
                s*= 1*1.0/(i*i);
            }
            printf("\tfunction 5 =%f",s);
            break;
        }
        case 6:
        {
            float s=1;
            for(int i=1; i<=n; i++)
            {
                s*= 1*1.0/(i*i*i);
            }
            printf("\tfunction 6 =%f",s);
            break;
        }
        case 7:
        {
            float s1=1,s2=1;
            for(int i=1; i<=n; i++)
            {
                s1 = s1*i;
                s2*= 1*1.0/(s1);
            }
            printf("\tfunction 7 =%f",s2);
            break;
        }
        case 8:
        {
            float s2=1;
            for(int i=1; i<=n; i++)
            {
                s2*= 1*1.0/(2*i*2*i);
            }
            printf("\tfunction 8 =%f",s2);
            break;
        }
        case 9:
            {
               float s1=1;
               for(int i=1;i<=n;i++)
               {
                   s1*=1*1.0/i*i;
               }
               printf("\tfunction 9 =%f",s1);
            break;
            }
        case 10:
            {
                float s1=1;
                for(int i=1;i<=n;i++)
                {
                    s1+=i*i;
                }
                    printf("\tfunction 10 =%f",s1);
            break;
            }
        case 11:
            {
                float s=1;

                    if( n%2==0)
                    {
                        for(int i=2;i<=n;i+=2)
                        {
                            s*=i;
                        }
                    }
                    else
                     {
                        for(int i=1;i<=n;i+=2)
                        {
                            s*=i;
                        }
                    }


                         printf("\tfunction 11 =%f",s);
            break;
            }
        }
    }
    while(1);
    return 0;
}
