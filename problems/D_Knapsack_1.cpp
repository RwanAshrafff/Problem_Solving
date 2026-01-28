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
const long long N = 105;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

int v[N],w[N];
int n,mxw;
int dp[105][100005];

int solve(int idx,int wt){
    // base case 
    if (idx==n) return 0;

    int &ret=dp[idx][wt];
    if (~ret) return ret;
    
    //leave 
    ret =solve(idx+1,wt);
    //take
    if (w[idx]+wt<=mxw) 
        ret=max(ret,solve(idx+1,wt+w[idx])+v[idx]);
    return ret;
}

void run() {
    memset(dp,-1,sizeof(dp));
    cin>>n>>mxw;
    for (int i=0;i<n;i++) cin>>w[i]>>v[i];
    cout<<solve(0,0);
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}