#include <bits/stdc++.h>
using namespace std;
#define ROU ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(container) (container).begin(), (container).end()
#define rall(v) v.rbegin(), v.rend()
#define el "\n"
#define ll long long
#define int long long
#define f first
#define s second
#define pb push_back
#define popcnt(x) __builtin_popcountll(x)
const long long N = 2e5+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

int mul(int a, int b,int mod){return ((a%mod)*(b%mod)) % mod ;}
int fastexp(int a, int b,int mod){
    if(b == 0) return 1;
    int ret = fastexp(a, b/2,mod);
return mul(ret, mul(ret, (b&1 ? a:1),mod),mod);
}

void run() {
    int a,b,c; cin>>a>>b>>c;
    int op1=fastexp(b,c,mod-1);
    cout<<fastexp(a,op1,mod); 
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}
