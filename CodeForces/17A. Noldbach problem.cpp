#include <iostream>
#include <cstring>

using namespace std;

const int N=1010;
int a[N],vis[N];
int n,k,cnt;

void init()
{
  	cnt=0;
    memset(vis,0,sizeof(vis));
    for(int i=2; i<=n; i++)
    {
        if(!vis[i])
        {
            a[cnt++]=i;
            for(int j=2*i; j<=n; j+=i)
                vis[j]=1;
        }
    }
}

int main()
{
    int ans;
    while(cin>>n>>k)
    {
        ans=0;
        init();
        for(int i=0; i<=cnt; i++)
            for(int j=1; j<cnt; j++)
            {
                if(a[i]==(a[j-1]+a[j]+1)&&j<=i)
                  ans++;
            }
        printf("%s\n",ans>=k?"YES":"NO");
    }
 
 
    return 0;
}
