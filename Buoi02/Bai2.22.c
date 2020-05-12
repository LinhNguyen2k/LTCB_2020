#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    char  chon;
    printf("\t==============MENU=============\n");
    printf("\tA. HINH CHU NHAT \n");
    printf("\tB. HINH TAM GIAC \n");
    printf("\tC. HINH TRON \n");
    printf("\tD. HINH THANG \n");
    printf("\t0. THOAT \n");


    do
    {
        printf("\t Moi Ban Chon 1 Chuc Nang:");
        fflush(stdin);
        scanf("%c",&chon);
        switch(chon)
        {
        case 'A':
        {

            int a,b,CV,S;
            printf("\tNhap chieu dai:");
            scanf("%d",&a);
            printf("\tNhap chieu rong:");
            scanf("%d",&b);
            CV = a+b;
            S = a*b;
            printf("S =%d \n",S);
            printf("CV =%d \n",CV);
            break;
        }
        case 'B':
        {

            float a,b,c,CV,S,R;
            printf("\tNhap canh a:");
            scanf("%f",&a);
            printf("\tNhap canh b:");
            scanf("%f",&b);
            printf("\tNhap canh c:");
            scanf("%f",&c);
            if(a+b<=c || b+c<=a || c+a <=b)
            {
                printf("Day Khong Phai Tam Giac\n");
                return 0;
            }
            else
            {

                float   p = (a+b+c)/2;
                CV = 2*p;
                S = sqrt(p*((p-a)*(p-b)*(p-c)));
                R = (a*b*c)/(4*S);
                printf("S =%f \n",S);
                printf("R =%f \n",R);
                printf("CV =%f \n",CV);
            }
            break;
        }
        case 'C':
        {
            float r,CV,S;
            printf("\tNhap r:",&r);
            scanf("%f",&r);
            S = M_PI *r*r;
            CV =2*r*M_PI;
            printf("CV =%f \n",CV);
            printf("S =%f \n",S);
            break;
        }
        case 'D':
        {
            float a,b,h,S;
            printf("\tNhap day lon a:");
            scanf("%f",&a);
            printf("\tNhap day nho b:");
            scanf("%f",&b);
            printf("\tNhap chieu cao h:");
            scanf("%f",&h);
            S = (a+b)*1.0/2*h;
            printf("S =%f \n",S);
            break;
        }
        case 0:
            return 0;

    default:
        {
            printf("\tBan Chon Sai \n");

        }
    }
    }
    while(1);
    return 0;
}
