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
ll dist1[N],distx[N];
void dfs(int node,int par,int d,int dist[]){
    dist[node]=d;
    for (auto &i:adj[node]){
        if (i==par) continue;
        dfs(i,node,d+1,dist);
    }
}

void run() {
    int n,m;cin>>n>>m;
    for (int i=1;i<n;i++){
        int u,v;cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    dfs(1,0,0,dist1);
    dfs(m,0,0,distx);
    ll ans=0;
    for (int i=1;i<=n;i++){
        if (distx[i]<dist1[i]){
            ans=max(ans,dist1[i]);
        }
    }
    cout<<2*ans;
}

signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}