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

ll mx1,bst1;
vector<ll>adj[N];
void dfs1(int node,int par,int depth){
    if (depth>mx1){
        mx1=depth;
        bst1=node;
    }
    for (auto &i : adj[node]){
        if (i!=par){
            dfs1(i,node,depth+1);
        }
    }
}

ll mx2;
void dfs2(int node,int par,int depth){
    if (depth>mx2){
        mx2=depth;
    }
    for (auto &i : adj[node]){
        if (i!=par){
            dfs2(i,node,depth+1);
        }
    }
}

void run() {
    int n ; cin>>n;
    for (int i=0;i<n-1;i++){
        int u,v;    cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    dfs1(1,-1,0);
    dfs2(bst1,-1,0);
    cout<<mx2;
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}