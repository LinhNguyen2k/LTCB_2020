#include<stdio.h>
#include<conio.h>
float Tinh(float c,float x)
{
  float mu=1,e=1;
  int gt=1,i=1;
while(mu/gt>0.00001)
{
  e=e+mu/gt;
  i++;
  mu=mu*x;
  gt=gt*i;
}
return e;
}
void main()
{
float x;
printf("\nx=");
scanf("%f",&x);
printf("\ne mu %2.f=%6.6f",x,Tinh(0.00001,x));
getch();
}
