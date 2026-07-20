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
    int n,m,k; cin>>n>>m>>k;
    vector<vector<pair<int,int>>>adj(n+1);
    for(int i=0;i<m;i++){
        int u,v,w;cin>>u>>v>>w;
        adj[u].pb({v,w});
    }
    vector<int>ans;
    vector<int>count(n+1,0);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;
    pq.push({0,1});
    while(!pq.empty()){
        auto [cost,node]=pq.top();
        pq.pop();
        count[node]++;

        if(node==n) ans.pb(cost);

        if(count[node]<=k){
        for(auto [child,c]:adj[node]) 
            pq.push({cost+c,child});
        }

    }
    for(int i=0;i<k;i++) cout<<ans[i]<<" ";
}

signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
   //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    while (tc--) run(), cout << el;
}