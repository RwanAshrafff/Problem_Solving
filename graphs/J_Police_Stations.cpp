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

void run() {
    int n,k,d; cin>>n>>k>>d;
    queue<int>q;
    vector<int>lvl(n+1,-1);
    for (int i=1;i<=k;i++){
         int x; cin>>x;
         lvl[x]=i;
         q.push(x);
    }
    vector<vector<int>>adj(n+1);
    vector<pair<int,int>>edges;
    for (int i=1;i<n;i++){
        int u,v; cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
        edges.pb({u,v});
    }
   
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for (auto &child:adj[node]){
            if (lvl[child]==-1){
                lvl[child]=lvl[node];
                q.push(child);
        }   
    }
    }
    vector<int> ans;
    for (int i=0;i<edges.size();i++){
        if (lvl[edges[i].first] != lvl[edges[i].second]) ans.pb(i+1);
    }
    cout<<ans.size()<<el;
    for (auto &i:ans) cout<<i<<" ";
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}