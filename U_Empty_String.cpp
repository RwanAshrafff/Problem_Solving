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
const long long N = 5e2+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

int mul(int a, int b){return ((a%mod)*(b%mod)) % mod ;}
int add(int a, int b){return ((a%mod)+(b%mod)) % mod ;}

int fastpow(int a, int b) {
    if (b == 0) return 1;
    int ret = fastpow(a, b / 2) % mod;
    ret = mul(ret, ret);                
    if (b & 1) ret = mul(ret, a);        
    return ret;
}
ll fact[N]={0};
ll factInv[N]={0};
void pre(){
    fact[0] = 1;
    for (int i = 1; i < N; ++i) fact[i] = fact[i-1] * i % mod;
    factInv[N-1] = fastpow(fact[N-1], mod-2);
    for (int i = N-2; i >= 0; --i) factInv[i] = factInv[i+1] * (i+1) % mod;
}
ll ncr(int n ,int r)
{
   return fact[n]*factInv[n-r]%mod*factInv[r]%mod; 
}


string s ;
int dp[N][N];
int solve(int l , int r ){
    if(l>r) return 1;

    int &ret=dp[l][r];
    if(~ret) return ret;

    ret=0;
    for(int mid=l+1;mid<=r;mid++){
        if(s[l]==s[mid]){
            int rngl=solve(l+1,mid-1);
            int rngr=solve(mid+1,r);
            int cnt=(r-l+1)/2;
            ret=add(ret,mul(mul(rngl,rngr),ncr(cnt,(r-mid)/2)));
        }
    }

    return ret;
}

void run() {
    cin>>s;
    int sz=s.size();
    memset(dp,-1,sizeof(dp));
    cout << solve(0,sz-1);
}
signed main() {
    ROU
    int tc = 1;
    pre();
    //cin >> tc;
    while (tc--) run(), cout << el;
}