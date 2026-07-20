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

void run() {
    int n,m; cin>>n>>m;
    vector<vector<pair<int,int>>>adj(n+1);
    for (int i=0;i<m;i++){
        int u,v,w;cin>>u>>v>>w;
        adj[u].pb({v,w});
        //adj[v].pb({u,w});
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;
    vector<int>dist(n+1,1e18);
    int src=1;
    dist[src]=0;
    pq.push({dist[src],src});
    while(!pq.empty()){
        auto [cost,node]=pq.top();
        pq.pop();
        if(cost>dist[node]) continue;
        for(auto &[child,w]:adj[node]){
            if(dist[child]>w+dist[node]){
                dist[child]=w+dist[node];
                pq.push({dist[child],child});
            }
        }
    }
    for(int i=1;i<=n;i++) cout<<dist[i]<<" ";
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
   //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    while (tc--) run(), cout << el;
}