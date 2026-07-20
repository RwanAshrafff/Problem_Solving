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
    for(int i=0;i<m;i++){
        int u,v,w;cin>>u>>v>>w;
        adj[u].pb({v,w});
    }
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<>>pq;
    vector<vector<int>>dist(n+1,vector<int>(2,1e18)); // 0 not using dis, 1 using discount
    dist[1][0]=0;
    pq.push({0,{1,0}});
    while(!pq.empty()){
        int cost=pq.top().first;
        int node =pq.top().second.first;
        int st=pq.top().second.second;
        pq.pop();
        if(cost>dist[node][st]) continue;
        for(auto [child,c]:adj[node]){
            if(dist[child][st]>dist[node][st]+c){
                dist[child][st]=dist[node][st]+c;
                pq.push({dist[child][st],{child,st}});
            }
            if(st==0){
                if(dist[child][1]>dist[node][0]+(c/2)){
                dist[child][1]=dist[node][0]+(c/2);
                pq.push({dist[child][1],{child,1}});
            }
            }
        }
    }
    cout<<dist[n][1];
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
   //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    while (tc--) run(), cout << el;
}