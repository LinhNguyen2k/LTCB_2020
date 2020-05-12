#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float x1,y1,x2,y2,kc;
    printf("\tNhap x1:");
    scanf("%f",&x1);
    printf("\tNhap y1:");
    scanf("%f",&y1);
    printf("\tNhap x2:");
    scanf("%f",&x2);
    printf("\tNhap y2:");
    scanf("%f",&y2);
    kc = sqrt((pow((x2-x1),2) + (pow((y2-y1),2))));
    printf("KC = %f", kc);
    return 0;
}
