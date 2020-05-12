#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    float r,S,CV;
    printf("\tNhap r:",&r);
    scanf("%f",&r);
    S = M_PI *r*r;
    CV =2*r*M_PI;
    printf("CV =%f \n",CV);
    printf("S =%f \n",S);
    return 0;
}
