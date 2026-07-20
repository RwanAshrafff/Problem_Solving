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
const long long N =1e3+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

vector<tuple<int,int,int>>adj[N];
bool vis[N],used[N];
int cost,tot;

void dfs(int node,int par){
    vis[node]=1;
    for (auto &[i,j,k]:adj[node]){
        if (k==par) continue;
        if (!vis[i]) {
            cost+=j;
            dfs(i,k);
        }
        else if (!used[k]){
            cost+=j;
            used[k]=1;
        }
    }
}


void run() {
    int n; cin>>n;

    for (int i=1;i<=n;i++){
        int u,v,c;cin>>u>>v>>c;
        adj[u].pb({v,0,i}); // clockwise
        adj[v].pb({u,c,i}); //anticlock
        tot+=c;
    }
    dfs(1,0);
    cout<<min(cost,tot-cost);
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}