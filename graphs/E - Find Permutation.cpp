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

    vector<vector<int>>adj(n+1);
    vector<int>indegree(n+1,0);
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[u].pb(v);
        indegree[v]++;
    }
    queue<int>q;
    for(int i=1;i<=n;i++){
        if(indegree[i]==0) q.push(i);
    }
    vector<int>topo;
    bool flg=1;
    while(! q.empty()){
        if(q.size()>1){
            flg=0;
            break;
        }
        int node=q.front();
        q.pop();
        topo.pb(node);
        for(auto &child:adj[node]){
            indegree[child]--;
            if(indegree[child]==0) q.push(child);
        }
    }
if(!flg)
cout<<"No";
else {
    cout<<"Yes"<<el;
    vector<int>v(n+1);
    for(int i=0;i<n;i++) v[topo[i]]=i+1;
    for(int i=1;i<=n;i++) cout<<v[i]<<" ";
    }
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
   //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    while (tc--) run(), cout << el;
}