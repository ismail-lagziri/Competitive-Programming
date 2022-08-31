#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int cnt=0,f=0,sz,i,j;
        string s,sc;
        cin>>s;
        sc=s;
        sz=s.size();
        sort(s.begin(),s.end());
        if(s[0]==s[sz-1])
        {
            if(s[0]=='?')
                cout<<sz<<endl;
            else
                cout<<"1"<<endl;
        }
        else
        {
            f=0;
            for(i=0; i<sz; i++)
            {
                if(sc[i]=='0')
                {
                    f=1;
                    for(j=i; j>=0; j--)
                    {
                        cnt++;
                        if(sc[j]=='1')
                            break;
                    }
                    break;

                }
            }
            if(f==0)
            {
                for(i=sz-1; i>=0; i--)
                {
                    cnt++;
                    if(sc[i]=='1')
                        break;
                }
            }
            cout<<cnt<<endl;
        }
    }
}
