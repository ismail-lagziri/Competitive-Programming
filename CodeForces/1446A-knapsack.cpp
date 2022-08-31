#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
const int N = 2e5+5;

struct node{
    ll v;
    int p;
};

node a[N];
int ans[N]; 
int len;

bool comp(const node&a,const node&b){
    return a.v < b.v;
}
 
int find_begin(int n,ll w){
    int l = 1, r = n;
    while(l < r){
        int mid = l+r>>1;
        if(a[mid].v >= w){
            r = mid;
        }else{
            l = mid+1;
        }
    }
    return l;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        len=0;
        int n;
        ll w;
        cin >> n >> w;
        for(int i = 1; i <= n; i++){
            cin >> a[i].v;
            a[i].p = i;
        }
 
        sort(a+1,a+1+n,comp);
 
        int p = find_begin(n,(w+1)/2);
        int ptr = 0;
        if(a[p].v > w){
            ptr = p-1;
        }else if(a[p].v <= w && a[p].v >= (w+1)/2){
            cout<< "1\n"<<a[p].p<<"\n";
            continue;
        }else{
            ptr = p;
        }
        int flag = 0;
        ll sum = 0;
        for(int i = ptr; i >= 1; i--){
            if(sum + a[i].v <= w){
                sum += a[i].v;
                ans[++len] = a[i].p;
            }
 
            if(sum >= (w+1)/2){
                flag = 1;
                break;
            }
        }
 
        if(flag){
            sort(ans+1,ans+1+len);
            int first = 1;
            cout << len << endl;
            for(int i = 1; i <= len; i++){
                if(first)first=0;else putchar(' ');
                cout << ans[i];
            }
            putchar('\n');
        }else{
            cout << "-1\n";
        }
    }
    return 0;
}
