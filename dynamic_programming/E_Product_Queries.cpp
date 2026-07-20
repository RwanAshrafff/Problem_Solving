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
const long long N = 3e5+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

int n;
int dp[N];
vector<int>v,vis;
vector<vector<int>>divs;

int solve(int num){
    if (num==1) return 0;

    int &ans = dp[num];
    if (~ans) return ans;

    ans=INT_MAX;
    for (auto &i:divs[num]) ans=min(ans,solve(num/i) +1);

    return ans;
}


void run() {
    cin>>n;
    v=vector<int>(n);
    vis=vector<int>(n+1,0);
    for (auto &i:v) cin>>i,vis[i]=1;
    memset(dp,-1,sizeof(dp));

    divs.assign(n+1,{});
    for (int i=2;i<=n;i++){
        if (vis[i]){
            for (int j=i;j<=n;j+=i) divs[j].pb(i);
        }
    }
    for (int i=1;i<=n;i++){
        if (i==1) {
            vis[i]?cout<<1<<" ":cout<<-1<< " ";
        }
        else{
            int ans=solve(i);
            (ans == INT_MAX)?cout<<-1<<" ":cout<<ans<<" ";
        }
    }
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}