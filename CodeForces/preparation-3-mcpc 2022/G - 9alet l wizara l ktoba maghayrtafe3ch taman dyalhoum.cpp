#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        int arr[a];
        for(int i=0;i<a;i++)cin>>arr[i];
        int j=a-1;
        while(j>0)
        {
            if(arr[j]==1)
                break;
            else j--;
        }
        int i=0;
        while(i<a)
        {
            if(arr[i]==1)
                break;
            else i++;
        }
        int cnt=0;
        for(int k=i; k<=j; k++)
        {
            if(arr[k]==0)
                cnt++;
        }
        cout<<cnt<<endl;
    }
}
