#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,x3,y3,AB,BC,CA,p,S;
    printf("\tNhap x1:");
    scanf("%f",&x1);
    printf("\tNhap y1:");
    scanf("%f",&y1);
    printf("\tNhap x2:");
    scanf("%f",&x2);
    printf("\tNhap y2:");
    scanf("%f",&y2);
    printf("\tNhap x3:");
    scanf("%f",&x3);
    printf("\tNhap y3:");
    scanf("%f",&y3);
    AB = (float)sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    CA = (float)sqrt(pow((x1-x3),2) + pow((y1-y3),2));
    BC = (float)sqrt(pow((x3-x2),2) + pow((y3-y2),2));

    if(AB+BC<=CA || BC+CA<=AB || CA+AB <=BC)
    {
        printf("Day Khong Phai Tam Giac");
        return 0;
    }

    p = (AB+BC+CA)/2;
    printf("AB = %f \n",AB);
    printf("BC = %f \n",BC);
    printf("CA = %f \n",CA);

    S = (float)(sqrt(p*((p-AB)*(p-BC)*(p-CA)));
    printf("S =%f \n",S);
    return 0;
}
