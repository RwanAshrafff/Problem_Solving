#include <bits/stdc++.h>
using namespace std;
#define ROU ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(container) (container).begin(), (container).end()
#define rall(v) v.rbegin(), v.rend()
#define el "\n"
#define ll long long
//#define int long long
#define f first
#define s second
#define pb push_back
#define popcnt(x) __builtin_popcountll(x)
const long long N = 2e5+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

int x[N],y[N],vis[N],mnx,mxx,mny,mxy,ans;
vector<int> adj[N];

void dfs(int node){
    vis[node]=1;
    mnx=min(mnx,x[node]);
    mny=min(mny,y[node]);
    mxx=max(mxx,x[node]);
    mxy=max(mxy,y[node]);

    for (auto &i:adj[node]){
        if (!vis[i]) dfs(i);
    }
}

void run() {
    int n,m; cin>>n>>m;
    for (int i=1;i<=n;i++)  cin>>x[i]>>y[i]; // cows

    for (int i=1;i<=m;i++){
        int u,v;cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    ans=INT_MAX;
    for (int i=1;i<=n;i++){
        if (!vis[i]){
        mnx=mny=INT_MAX;
        mxx=mxy=INT_MIN;
        dfs(i);
        ans=min(ans,2*((mxx-mnx)+(mxy-mny)));
    }
}
    cout<<ans;
}
signed main() {
    ROU
    int tc = 1;
    freopen("fenceplan.in", "r", stdin);
    freopen("fenceplan.out", "w", stdout);
    //cin >> tc;
    while (tc--) run(), cout << el;
}