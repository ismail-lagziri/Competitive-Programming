#include <iostream>

using namespace std;
typedef long long ll;
const int N = 100010;
int n;
ll a[N];
void solve()
{
	if(n==1)
	{
		printf("%d %d\n%lld\n",1,1,-a[1]);
		printf("%d %d\n0\n",1,1);
		printf("%d %d\n0\n",1,1);
		return;
	} 
	printf("%d %d\n",1,n-1);
	for(int i=1;i<n;i++)
	{
		printf("%lld ",(n-1)*a[i]);
		a[i]+=(n-1)*a[i];
	}
	printf("\n%d %d\n%lld\n",n,n,-a[n]);
	a[n] = 0;
	printf("%d %d\n",1,n); 
	for(int i=1;i<=n;i++)
	  printf("%lld ",-a[i]);
	printf("\n");
}
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
	solve(); 
	return 0;
}
