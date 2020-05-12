#include <stdio.h>
#include <stdlib.h>

int main()
{

     printf("\tSo do la :");
    for(int i =100 ;i<1000;i++)
    {
        if(i%6==2 && (i/100+i/10%10+i%10 ==20))
        {
            printf("%d \t",i);
        }
    }
    return 0;
}
