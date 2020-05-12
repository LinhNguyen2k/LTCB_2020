#include <iostream>
#include <math.h>
using namespace std;

int main()
{   int n,s=0;
    for(n=2;n<=pow(10,9);++n)
    {
    for(int i=1;i<=n/2;++i)
    {
        s=0;
        if(n%i==0)
            s=s+i;
    }
    if(s==n)
        {
            cout<<n<<"la so hh";
        }
    }
    cout<<"hi";
    return 0;
}

