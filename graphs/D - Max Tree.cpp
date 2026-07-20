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
    int n;cin>>n;
    vector<vector<int>>adj(n+1);
    vector<int> indegree(n+1,0);
    for (int i=0;i<n-1;i++){
        int u,v,x,y; cin>>u>>v>>x>>y;
        if(x>y) adj[u].pb(v),indegree[v]++;
        else adj[v].pb(u),indegree[u]++;
    }
    queue<int>q;
    for(int i=1;i<=n;i++) if(indegree[i]==0) q.push(i);
    vector<int>v;
    while (! q.empty()){
        auto node=q.front();
        q.pop();
        v.pb(node);
        for(auto &child:adj[node]){
            indegree[child]--;
            if(indegree[child]==0) q.push(child);
        }
    }
    vector<int>ans(n+1);
    int curr=n;
    for(auto i:v){
        ans[i]=curr--;
    }
    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
   //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    while (tc--) run(), cout << el;
}