#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    float a, S, V, d ;
    printf("\tNhap canh a:");
    scanf("%f",&a);
    S = 4*a*a;
    V = a*a*a;
    d = a*sqrt(3);
    printf("S =%f \n",S);
    printf("V =%f \n",V);
    printf("d =%f \n",d);
    return 0;
}
