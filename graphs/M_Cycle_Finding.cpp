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
const long long N = 5e3+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

struct Edge{
    int from;
    int to;
    int w;
};
int n,m;
vector<Edge>edg(N);

vector<int> bellman(int n,vector<Edge>& edgs){
    vector<int>dist(n+1,0),cyc;
    vector<int>parent(n+1,-1);
    int x=-1;

    for (int i=1;i<=n;i++){
        x=-1;
    for (auto &i:edgs){
        if (dist[i.from]+i.w<dist[i.to]){
            dist[i.to]=dist[i.from]+i.w;
            parent[i.to]=i.from;
            x=i.to;
            }
        }
    }
    
    if (x==-1) return {}; // no cycle
    for (int i=0;i<n;i++) x=parent[x];
    int v=x;

    do{
        cyc.push_back(v);
        v=parent[v];
    }   
    while(v!=x);
    cyc.push_back(x);
    reverse(cyc.begin(),cyc.end());
    return cyc;
}


void run() {
    cin>>n>>m;
    for (int i=1;i<=m;i++){
        cin>>edg[i].from>>edg[i].to>>edg[i].w;
    }

   vector<int> cyc= bellman(n,edg);
    if (! cyc.empty() ){
        cout<<"YES"<<el;
        for (auto &i:cyc) cout<<i<<" ";
    }
    else cout<<"NO";
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
//bellmanford algo