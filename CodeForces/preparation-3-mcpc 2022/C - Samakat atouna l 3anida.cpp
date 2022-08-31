#include<iostream>

using namespace std;
const int maxn=3e5+100;
typedef long long ll;
ll a[maxn];

int main()
{
  
  ll t;
  cin>>t;
  while(t--)
  {
  	ll n;cin>>n;
  	for(ll i=0;i<=n+10;i++) a[i]=0; 
  	for(ll i=1;i<=n;i++) cin>>a[i];
  	ll mx=-1e18;
  	for(ll i=1;i<=n;i++){
  		if(mx<a[i]) mx=a[i];	
	}
	
	ll pos1=0;
	for(ll i=1;i<=n;i++){
		if(mx==a[i]) {
			
			if(i==1&&a[1]>a[2]){
				pos1=1;break;
			}
			else if(i==n&&a[n]>a[n-1]){
				pos1=n;break;
			}
			else if( ((i!=1)&&a[i]>a[i-1])||(i!=n&&a[i]>a[i+1])){
				pos1=i;break;
			}
		}
	}
	if(pos1==0){
		cout<<"-1"<<endl;
	}
	else cout<<pos1<<endl;
  }
  return 0;
}
