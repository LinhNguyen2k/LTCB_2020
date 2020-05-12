
#include <stdio.h>
#include <math.h>

int SNT(int n)
{
    int i;
    int m = (int) sqrt(n);
    for (i = 2; i <= m; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n, i;
    printf("Enter number n = ");
    scanf("%d", &n);

    printf("%d = ", n);

    for (i = 2; i <= n; i++)
    {
        while( SNT(i) && (n % i == 0) )
        {
            printf("%d ", i);

            n = n / i;
             if(n>1)
            {
                printf(" * ");
            }
        }
    }

    return 0;
}
