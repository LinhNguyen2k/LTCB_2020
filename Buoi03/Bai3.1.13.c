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
    int dem = 0;
    int S=0;
    int i = 2;
    while (dem < n) {
        if (SNT(i)) {
            printf("%d\t", i);
            dem++;
            S+=i;
        }
        i++;
    }
    printf("S= %d",S);
}

