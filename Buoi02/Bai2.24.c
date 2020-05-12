#include <stdio.h>
#include <stdlib.h>

int main()
{
        int   chon;
    printf("\t==============MENU=============\n");
    printf("\t1. Loai Vai 1 \n");
    printf("\t2. Loai Vai 2 \n");
    printf("\t3. Loai Vai 3\n");
    printf("\t4. Loai Vai 4 \n");
    printf("\t0. Thoat \n");
    do{
        printf("\tNhap lua chon:");
        scanf("%d",&chon);
        switch(chon)
        {
        case 1:
            {
                float n,s;
                printf("\tNhap so met vai:");
                scanf("%f",&n);
                s = n*200000;
                printf("\tGia = %f",s);
                break;

            }
             case 2:
            {
                float n,s;
                printf("\tNhap so met vai:");
                scanf("%f",&n);
                s = n*170000;
                printf("\tGia = %fVND",s);
                break;

            }
             case 3:
            {
                float n,s;
                printf("\tNhap so met vai:");
                scanf("%f",&n);
                s = n*120000;
                printf("\tGia = %f",s);
                break;

            }
             case 4:
            {
                float n,s;
                printf("\tNhap so met vai:");
                scanf("%f",&n);
                s = n*90000;
                printf("\tGia = %f",s);
                break;

            }
             case 0:
                return;
        }
    }while(1);
    return 0;
}
