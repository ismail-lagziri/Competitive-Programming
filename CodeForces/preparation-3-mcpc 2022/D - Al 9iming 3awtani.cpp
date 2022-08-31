#include <iostream>

using namespace std;

int n,t,s;
int a[101], max1;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        s=0;
        max1=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            max1=max(max1,a[i]);
            s+=a[i];
        }
        if(n==1)
            cout<<"T"<<endl;
        else if(n==2)
        {
            if(a[1]==a[2])
                cout<<"HL"<<endl;
            else
                cout<<"T"<<endl;
        }
        else
        {
            if(max1>s-max1)
                cout<<"T"<<endl;
            else
            {
                if(s%2==1)
                    cout<<"T"<<endl;
                else
                    cout<<"HL"<<endl;
            }
        }
    }
    return 0;
}
 
