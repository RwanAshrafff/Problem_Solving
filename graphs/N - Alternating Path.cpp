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

vector<vector<int>>adj;
vector<int>color;
int bipartite,c0,c1;
void dfs(int node, int c){
    color[node]=c;
    c==0?c0++:c1++;
    for (auto &i:adj[node]){
        if(color[i]==-1) {
            dfs(i,c^1);
        }
        else if (color[i]==color[node]) bipartite=0;
    }
}

void run() {
    int n ,m ; cin>>n>>m;
    adj=vector<vector<int>>(n+1);
    color=vector<int>(n+1,-1);
    for (int i=1;i<=m;i++){
        int u,v; cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    int ans=0;
    for (int i=1;i<=n;i++){
        if (color[i]==-1){
            c0=0,c1=0;
            bipartite=1;
            dfs(i,0);
            if (bipartite) ans+=max(c0,c1);
        }
    }
    cout<<ans;
}   
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
   //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    while (tc--) run(), cout << el;
}