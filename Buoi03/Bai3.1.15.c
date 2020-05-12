#include <stdio.h>
#include <stdlib.h>

int SHH(int n)
{   int s=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        s+=i;

    }
    return s;
}
int main()
{   int n=5000,S=0;
printf("\tCac so hoan hao la:");
    for(int i=2;i<n;i++)
    {
        if( i== SHH(i))
            printf("%d \t", i);


    }
    return 0;
}
