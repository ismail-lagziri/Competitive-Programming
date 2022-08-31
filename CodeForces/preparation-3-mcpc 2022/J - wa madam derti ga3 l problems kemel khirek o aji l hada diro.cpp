#include <iostream>

using namespace std;
typedef long long ll;

ll n;
int main(){
    scanf("%lld", &n);
    ll ans = 1;
    for(int i = 1; i <= n; i++) ans *= (ll)i;
    ans *= (ll)2;
    ans /= (ll)(n * n);
    printf("%lld\n", ans);
    return 0;
}
