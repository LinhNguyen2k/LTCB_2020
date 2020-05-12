#include<stdio.h>

#include<math.h>

float tong(int x, float epsilon);

int gt(int n)
{

    if(n==0||n==1)

        return 1;

    int g=1, i;

    for(i=1; i<=n; i++)

        g = g * i;

    return g;

}

int main()
{

    int x;

    float epsilon;

    do
    {

        printf("Nhap x: ");

        scanf("%d",&x);



        printf("Nhap epsilon: ");

        scanf("%f",&epsilon);

    }
    while(x<=0);

    tong( x, epsilon);

}

float tong(int x,float epsilon)
{

    int i=1,mau=1;

    float s=0,gg=0;

    do
    {

        gg = pow ( x, 2 * i - 1 ) /gt(2*i-1);

        s = s + pow (- 1, i - 1) * gg;

        printf("\tg = %f,\t s= %f\n",gg,s);

        i++;

    }
    while(gg>=epsilon);

    printf("\nsin(x) la: %f",s);

}
