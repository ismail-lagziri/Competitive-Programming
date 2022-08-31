#include <iostream>
#include <algorithm>
#define ll long long

using namespace std;

const int maxn = 1e5+3;
ll a[maxn];
int main()
{
    int n,m=1;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    ll res=1e18;
    for(ll c=1;;c++)
    {
        ll sum=0,now=1;
        for(ll i=1;i<=n;i++)
        {
            sum+=abs(a[i]-now);
            now*=c;
            if(now>=1e15)
            {
                now=-1;
                break;
            }
        }
        if(now==-1)
        {
             break;
        }
        else
        {
            res=min(res,sum);
        }
    }
    cout<<res<<endl;
}
