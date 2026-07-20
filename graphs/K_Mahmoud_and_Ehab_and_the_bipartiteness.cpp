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
int color[N],cnt[4];

void dfs(int node){
    cnt[color[node]]++;
    for (auto &i :adj[node]){
        if (!color[i]){
            color[i]= 3-color[node];
            dfs(i);
        } 
    }
}

void run() {
    int n ; cin>>n;
    for (int i=1;i<n;i++) {
        int u,v; cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    color[1]=1;
    dfs(1);
    cout<<cnt[1] * cnt[2] -(n-1);
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
// team 1 2 