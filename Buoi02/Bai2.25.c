#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    char   ch;
    printf("\t==============MENU=============\n");
    printf("\t1. Phep Toan + \n");
    printf("\t2. Phep Toan - \n");
    printf("\t3. Phep Toan % \n");
    printf("\t4. Phep Toan / \n");
    printf("\t0. Thoat \n");
    do
    {
        printf("\tNhap lua chon phep toan:");
        printf("\n");
        fflush(stdin);
        scanf("%c",&ch);
        switch(ch)
        {
        case '+':
        {
            float a,b,s;
            printf("\tNhap  a:");
            scanf("%f",&a);
            printf("\tNhap  b:");
            scanf("%f",&b);
            s= a+b;
            printf("\tTONG =%f",s);
            break;

        }
        case '-':
        {
            float a,b,H;
            printf("\tNhap  a:");
            scanf("%f",&a);
            printf("\tNhap  b:");
            scanf("%f",&b);
            H= a-b;
            printf("\tHIEU =%f",H);
            break;

        }
        case '*':
        {
            float a,b,T;
            printf("\tNhap  a:");
            scanf("%f",&a);
            printf("\tNhap  b:");
            scanf("%f",&b);
            T= a*b;
            printf("\tTICH =%f",T);
            break;

        }
        case  '%':
        {
            int a,b;
            float T;
            printf("\tNhap  a:");
            scanf("%d",&a);
            printf("\tNhap  b:");
            scanf("%d",&b);
            T= a%b;
            printf("\tChia Du =%f",T);
            break;

        }
        case '/':
        {
            float a,b,T;
            printf("\tNhap  a:");
            scanf("%f",&a);
            printf("\tNhap  b:");
            scanf("%f",&b);
            T= a/b;
            printf("\tChia Nguyen =%f",T);
            break;

        }
        case 0:
            return;
        }
    }
    while(1);
    return 0;
}
