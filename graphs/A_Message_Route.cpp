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

void run() {
    int n,m ; cin>>n>>m;
    vector<vector<int>>adj(n+1);
        for (int i=1;i<=m;i++){
        int u,v;cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    queue<int>q;
    int lvl[n+1],parent[n+1];
    fill(lvl,lvl+n+1,-1);
    fill(parent,parent+n+1,0);
    lvl[1]=1;
    q.push(1);

    while(! q.empty()){
        int node=q.front();
        q.pop();
        for (auto &i:adj[node]){
            if (lvl[i]==-1){
                lvl[i]=lvl[node]+1;
                parent[i]=node;
                q.push(i);
            }
        }
    }

    if (lvl[n]==-1) cout<<"IMPOSSIBLE";
    else{
        cout<<lvl[n]<<el;
        vector<int>path;
        int num=n;
        while (num){
            path.pb(num);
            num=parent[num];
        }
        reverse(all(path));
        for(auto &i:path) cout<<i<<" ";
    }
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}