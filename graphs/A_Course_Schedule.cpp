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

vector<ll>adj[N],topo;
int state[N],cyc=0;

void dfs(int node){
    state[node]=1;
    for (auto &i : adj[node]){
        if (state[i]==0) dfs(i);
        else if (state[i]==1) cyc=1;
    }
    state[node]=2;
    topo.push_back(node);
}

void run() {
    int n,m; cin>>n>>m;
    for (int i=0;i<m;i++){
        int u,v; cin>>u>>v;
        adj[u].pb(v);
    }
    for (int i=1;i<=n;i++){
        if (state[i]==0) dfs(i);
    }
    if (cyc) cout<<"IMPOSSIBLE";
    else{
        reverse(all(topo));
        for (int i=0;i<n;i++) cout<<topo[i]<<" ";
    }
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}