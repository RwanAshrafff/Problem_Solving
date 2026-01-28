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

int n;
int dp[501][(500*502)/2+1];

int add(int a ,int b) {return (a+b)%mod;}
int mul (int a ,int b ) {return ( (a%mod)*(b%mod) ) %mod;}

int fastpow(int a, int b) {
    if (b == 0) return 1;
    int ret = fastpow(a, b / 2);
    ret = mul(ret, ret);
    if (b & 1) ret = mul(ret, a);
    return ret;
}

int solve(int idx,int sum){
    if (idx>n) return (sum==(((n*(n+1))/2)/2));

    int &ret=dp[idx][sum];
    if (~ret) return ret;

    ret=0;
    ret=add(ret,solve(idx+1,sum+idx));
    ret=add(ret,solve(idx+1,sum));

    return ret;
}

void run() {
    cin>>n;
    
    if (((n*(n+1))/2)&1){
        cout<<0;
        return;
    }
    memset(dp,-1,sizeof(dp));
    cout<<mul(solve(1,0),fastpow(2,mod-2));
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
