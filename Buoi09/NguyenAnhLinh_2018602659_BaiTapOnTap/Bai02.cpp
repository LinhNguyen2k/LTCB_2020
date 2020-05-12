#include <iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;

int main()
{
    char LoaiTho[30],*s;
    float CongTg,CongNG, F=0;
    printf("\tNhap So Cong Trong Gio:");
    scanf("%f",&CongTg);
    printf("\tNhap So Cong Ngoai Gio:");
    scanf("%f",&CongNG);
    printf("\tNhap Loai Tho:");
    fflush(stdin);
    gets(LoaiTho);

    if( s = strstr(LoaiTho, "xay dung moi tho ca"))
    {
        if(CongNG >0)
        {
            F = 250000 * CongTg + CongNG*250000*1.5;
        }
        else
        {
            F =250000 * CongTg;
        }

    }
     if(s = strstr(LoaiTho, "tho phu"))
    {
        if(CongNG >0)
        {
            F = 180000 * CongTg + CongNG*180000*1.5;
        }
        else
        {
            F =180000 * CongTg;
        }

    }
    if(s = strstr(LoaiTho, "xay dung cai thien tho ca"))
    {
        if(CongNG >0)
        {
            F = 320000 * CongTg + CongNG*320000*1.5;
        }
        else
        {
            F =320000 * CongTg;
        }

    }
    if(s = strstr(LoaiTho, "xay dung cai thien tho phu"))
    {
        if(CongNG >0)
        {
            F = 100000 * CongTg + CongNG*100000*1.5;
        }
        else
        {
            F =100000 * CongTg;
        }

    }
    printf("\nSo Tien Phai Tra cho %s ",LoaiTho );
    printf(" La: %f ",F);
    return 0;
}
