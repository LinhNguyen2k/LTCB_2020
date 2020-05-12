#include<stdio.h>
 #include<math.h>

int SNT(int n)
{
    if(n<2)
        return 0;
    else
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
                return 0;
        }
    }
    return 1;
}
int main() {
 int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    printf("%d Cac so dau tien la: \n", n);
    int s = 0;
    int i = 2;
    while (i < n) {
        if (SNT(i)) {
            printf("%d\t", i);
            s+=i;
        }
        i++;
    }
    printf("\n");
    printf("S = %d",s);
}

