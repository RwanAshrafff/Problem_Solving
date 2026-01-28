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
const long long N = 1e6+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

int mul(int a, int b){return ((a%mod)*(b%mod)) % mod ;}
int fastpow(int a, int b){
    if(b == 0) return 1;
    int ret = fastpow(a, b/2);
return mul(ret, mul(ret, (b&1 ? a:1)));
}
ll fact[N]={0};
void pre()  
{
    fact[0]=1;
    for (int i=1;i<N;i++) fact[i]=i*fact[i-1]%mod;
}

ll ncr(int n ,int r)
{
   return fact[n]*fastpow(fact[n-r],mod-2)%mod*fastpow(fact[r],mod-2)%mod; 
}
void run() {
    int a,b; cin>>a>>b;
    cout<<ncr(a,b);
}
signed main() {
    ROU
    int tc = 1;
    pre();
    cin >> tc;
    while (tc--) run(), cout << el;
}