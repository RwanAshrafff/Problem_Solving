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

int n,m,q,s;
void run() {
    vector<vector<int>>adj(n+1);
    vector<array<int,3>>g(m);
    for(auto &[u,v,w]:g){
        cin>>u>>v>>w;
        adj[u].push_back(v);
    }
    vector<int>dist(n+1,1e18);
    vector<int>vis(n+1,0);
    queue<int>qu;
    dist[s]=0;
    for(int i=0;i<n;i++){
        for(auto [u,v,w]:g){
            if(dist[u]!=1e18 && dist[u]+w<dist[v]){
                dist[v]=dist[u]+w;
            if(i==n-1){
                qu.push(v);
                vis[v]=1;
            }
        }
        }
    }
    while(! qu.empty()){
        int node=qu.front();qu.pop();
        for(auto child:adj[node]){
            if(!vis[child]){
                qu.push(child);
                vis[child]=1;
            }
        }
    }
    while(q--){
        int x; cin>>x;
        if (vis[x]) cout<<"-Infinity"<<el;
        else if(dist[x]==1e18) cout<<"Impossible"<<el;
        else cout<<dist[x]<<el;
    }  
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
   //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    while (cin>>n>>m>>q>>s,n) run(), cout << el;
}