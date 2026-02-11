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
const long long N = 1e5+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

ll dp[N],n,k;
vector<ll>v;

ll solve(ll start)
{
    if (start >= (n-1) ) return 0;

    ll &ret=dp[start];
    if (~ret) return ret;
    ret=1e18;

    for (ll i = start+1;i <=min(start+k,n-1); i++)
        ret = min(ret, solve(i) + abs(v[start] - v[i]));

    return ret;
}

void run() {
    cin>>n>>k;
    v=vector<ll>(n);
    memset(dp,-1,sizeof(dp));
    for (auto &i:v) cin>>i;
    cout<<solve(0);
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}