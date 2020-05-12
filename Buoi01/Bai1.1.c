#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,Tong,Hieu,Tich,PhanNguyen,PhanDu;
    printf("\tNhap a:");
    scanf("%d",&a);
    printf("\tNhap b:");
    scanf("%d",&b);

    Tong = a+b;
    Hieu = a-b;
    Tich = a*b;
    PhanNguyen = a/b;
    PhanDu = a%b;
    printf("Tong = %d \n",Tong);
    printf("Hieu = %d \n",Hieu);
    printf("Tich = %d \n",Tich);
    printf("Phan Nguyen =%d \n",PhanNguyen);
    printf("Phan Du = %d \n",PhanDu);
    return 0;
}
