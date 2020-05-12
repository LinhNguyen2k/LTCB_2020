#include <stdio.h>
#include <stdlib.h>

int main()
{  int dem=0;
    for(int i=0;i<1;i++)
    {
        for(int j=0;j<100;j++)
        {   dem++;
            printf("%d \t",j);
            if(dem==10)
            {

                printf("\n");
                dem=0;
            }
        }
    }
    return 0;
}
