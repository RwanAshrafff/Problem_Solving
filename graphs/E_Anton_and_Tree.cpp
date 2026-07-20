#include <bits/stdc++.h>
using namespace std;
#define ROU ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(container) (container).begin(), (container).end()
#define rall(v) v.rbegin(), v.rend()
#define el "\n"
#define ll long long
//#define int long long
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
int n;
int color[N];
pair<int,int> treedist(int node,int par, int d ){
    pair<int,int> ret={d,node};
    for (auto child : adj[node]){
        if (child!=par){
            ret=max(ret,treedist(child,node,d+(color[child]!=color[node])));
        }
    }
    return ret;
}


void run() {
    cin>>n;
    for(int i=1;i<=n;i++) cin>>color[i];
    adj.assign(n+1,vector<int>());
    for(int i=0;i<n-1;i++){
        int u,v;cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    auto op1=treedist(1,-1,0);
    auto op2=treedist(op1.second,-1,0);
    cout<<(op2.first+1)/2; 
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
   //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    while (tc--) run(), cout << el;
}