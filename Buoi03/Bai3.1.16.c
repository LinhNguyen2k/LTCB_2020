#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("\tCac Cap Nghiem la:");
    for(a=0;a<=20;a++)
    {
        for(b=0;b<=100;b++)
        {
            for(c=0;c<=40;c++)
            {
                    if(a*10000+b*2000+c*5000 ==200000)
                    {
                        printf("%d %d %d \n",a,b,c);
                    }
            }
        }
    }
    return 0;
}
