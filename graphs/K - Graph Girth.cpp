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

vector<vector<int>>adj;
void run() {
    int n,m; cin>>n>>m;
    adj=vector<vector<int>>(n+1);
    for (int i=1;i<=m;i++){
        int u,v; cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    
    int ans=1e9;
     for (int i=1;i<=n;i++){
        queue<pair<int,int>>q;
        vector<int>lvl(n+1,-1);
        lvl[i]=0;
        q.push({i,-1});
        while (!q.empty()){
            auto [node,par]=q.front();
            q.pop();
            for (auto &child :adj[node]){
                if (lvl[child]==-1){
                    lvl[child]=lvl[node]+1;
                    q.push({child,node});
                }
                else if (child!=par){
                    ans=min(ans,lvl[child]+lvl[node]+1);
                    break;
                }
            }
        }
     }
     if (ans==1e9) cout<<-1;
     else cout<<ans;
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
   //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    while (tc--) run(), cout << el;
}