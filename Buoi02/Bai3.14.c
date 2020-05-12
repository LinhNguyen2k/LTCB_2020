#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    printf("\tCac Cap Nghiem la:");
    for(a=0;a<3;a++)
    {
        for(b=0;b<8;b++)
        {
            for(c=0;c<15;c++)
            {
                for(int d=0;d<30;d++)
                {
                    if(a*50+b*20+c*10+d*5 ==145)
                    {
                        printf("%d %d %d %d \n",a,b,c,d);
                    }
                }
            }
        }
    }
    return 0;
}
