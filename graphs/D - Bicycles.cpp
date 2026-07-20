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
    int n,m;cin>>n>>m;
    vector<vector<pair<int,int>>>adj(n+1);
    for(int i=0;i<m;i++){
        int u,v,w;cin>>u>>v>>w;
        adj[u].pb({v,w});
        adj[v].pb({u,w});
    }
    vector<int>v(n+1);
    for(int i=1;i<=n;i++) cin>>v[i];
    priority_queue<array<int,3>,vector<array<int,3>>,greater<>>pq;
    vector<vector<int>>dist(n+1,vector<int>(1005,1e18));
    dist[1][v[1]]=0;
    pq.push({0,v[1],1});

    while(!pq.empty()){
        auto [w,sp,node]=pq.top();pq.pop();
        if(w>dist[node][sp]) continue;
        for(auto &[child,c]:adj[node]){
            if(dist[child][sp]>w+(c*sp)){
                dist[child][sp]=w+(c*sp);
                pq.push({dist[child][sp],min(sp,v[child]),child});
            }
        }
    }

    int ans=1e18;
    for(int i=1;i<1001;i++) ans=min(ans,dist[n][i]);
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