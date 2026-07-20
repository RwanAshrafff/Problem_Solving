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
const int dx8[] = {1, 0, -1, 0,1,-1,1,-1};
const int dy8[] = {0, 1, 0, -1,1,-1,-1,1};

vector<vector<pair<int,int>>>adj;
pair<int,int> treedist(int node,int par, int d ){
    pair<int,int> ret={d,node};
    for (auto &[child,w] : adj[node]){
        if (child!=par){
            ret=max(ret,treedist(child,node,d+w));
        }
    }
    return ret;
}
vector<int>depth;
void dfs(int node,int par,int d){
    for (auto &[child,w] :adj[node]){
        if (child!=par){
            depth[child]=max(depth[child],d+w);
            dfs(child,node,d+w);
        }
    }
}

void run() {
    int n; cin>>n;
    adj=vector<vector<pair<int,int>>>(n+1);
    for (int i=1;i<n;i++){
        int u,v,w; cin>>u>>v>>w;
        adj[u].pb({v,w});
        adj[v].pb({u,w});
    }
    depth=vector<int>(n+1);
    auto [n1,node]=treedist(1,0,0);
    auto [n2,node2]=treedist(node,0,0);
    dfs(node,0,0);
    dfs(node2,0,0);
    for (int i=1;i<=n;i++) cout<<depth[i]<<" ";
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
   //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    while (tc--) run(), cout << el;
}