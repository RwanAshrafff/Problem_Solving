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

vector<int>adj[N];
int m,ans;
vector<int>cats;

void dfs(int node,int par,int cons){
    if (cats[node]) cons++;
    else cons=0;
    if(cons>m) return;

    bool leaf=true;
    for (auto &i: adj[node]){
       if(i==par) continue;
       leaf=false;
       dfs(i,node,cons);
    }
    if (leaf) ans++;
}

void run() {
    int n;cin>>n>>m;
    cats=vector<int>(n+1);
    for (int i=1;i<=n;i++) cin>>cats[i];
    for (int i=1;i<n;i++){
        int u,v; cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    dfs(1,0,0);
    cout<<ans;
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}