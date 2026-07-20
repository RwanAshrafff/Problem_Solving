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
int color[N],flg=1;
void dfs(int node){
    for (auto &i:adj[node]){
        if (!color[i]) {
            color[i]=3-color[node];
            dfs(i);
        }
        if (color[i]==color[node]) flg=0;
    }
}

void run() {
    int n,m;    cin>>n>>m;
    for (int i=1;i<=m;i++){
        int u,v;cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    for (int i=1;i<=n;i++){
        if (!color[i]) {
            color[i]=1;
            dfs(i);
        }
    }
    if (!flg){
        cout<<"IMPOSSIBLE";
        return;
    }
    for (int i=1;i<=n;i++) cout<<color[i]<< " ";
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
//bipiptide / 0->not vis / 1->team 1 / 2 ->team 2 