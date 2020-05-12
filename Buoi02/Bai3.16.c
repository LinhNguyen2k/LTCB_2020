#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int a, b;
    for(a=0;a<=25;a++)
    {
        for(b=0;b<=50;b++)
        {
            if(a+b==36 && a*4+b*2==100)
            {
                printf("\tSo chan cho voi chan ga la:%d %d",a,b);
            }

        }
    }
    return 0;
}
