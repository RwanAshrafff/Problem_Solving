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

int n,mx;
vector<int>w,v;
int dp[105][N];

int solve(int idx,int remv){
    if(idx==n) return ((remv==0)?0:1e18);

    int &ret=dp[idx][remv];
    if(~ret) return ret;

    ret=1e18;
    ret=min(ret,solve(idx+1,remv));
    if(remv-v[idx]>=0)
        ret=min(ret,solve(idx+1,remv-v[idx])+w[idx]); 

    return ret;
}

void run() {
    cin>>n>>mx;
    memset(dp,-1,sizeof(dp));
    w=vector<int>(n);
    v=vector<int>(n);
    for (int i=0;i<n;i++)  cin>>w[i]>>v[i];

    int ans=0;
    for(int i=0;i<N;i++){
        int mnw=solve(0,i);
        if (mnw<=mx)
            ans=i;
    }
    cout<<ans;
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
