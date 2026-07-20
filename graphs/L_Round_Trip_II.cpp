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

vector<int>adj[N],ans;
int state[N],parent[N],st=-1,en=-1;
bool dfs(int node ,int par){
    state[node]=1;
    for (auto &i : adj[node]){
        if (state[i]==0){
            parent[i]=node;
            if (dfs(i,node)) return true;
        }
        else if (state[i]==1) {
            st=i;
            en=node;
            return true;
        }
    }
    state[node]=2;
    return false;
}

void run() {
    int n,m; cin>>n>>m;
    for (int i=1;i<=m;i++){
        int u,v; cin>>u>>v;
        adj[u].pb(v);
    }
    
    for (int i=1;i<=n;i++){
        if (state[i]==0){
            if (dfs(i,-1)) break;
        }
    }

    if (st==-1){
        cout<<"IMPOSSIBLE";
        return;
    }
    ans.pb(st);
    for(int i=en;i!=st;i=parent[i]) ans.pb(i);
    ans.pb(st);
    reverse(all(ans));
    cout<<ans.size()<<el;
    for (auto &i:ans) cout<<i<<" "; 
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}