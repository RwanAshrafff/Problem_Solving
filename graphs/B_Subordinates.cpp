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
bool vis[N];
int ans[N];
int dfs(int node){
    int sz=1;
    for (auto &i : adj[node]){
        sz+=dfs(i);
    }
    ans[node]=sz-1;
    return sz;
}

void run() {
    int n; cin>>n;
    for (int i=2;i<=n;i++) {
        int u; cin>>u;
        adj[u].pb(i);
    }
    dfs(1);
    for (int i=1;i<=n;i++) cout<<ans[i]<<" ";
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}