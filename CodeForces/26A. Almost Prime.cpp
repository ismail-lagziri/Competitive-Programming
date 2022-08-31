#include<iostream>
#include<cmath>
using namespace std;
int primefactor(int n)
{
    int i,c=0;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n=n/i;
            }
            c++;
        }
    }
    if(n!=1)
        c++;
    return c;
}
int main()
{
    int a,c,i,n,r=0,t=0;
    cin>>a;
    for(i=2; i<=a; i++)
    {
        r=primefactor(i);
        if(r==2)
            t++;
    }
    cout<<t<<endl;
}
