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

int pos[N];
bool cmp(int  a, int b){
    return (pos[a]<pos[b]);
}

void run() {
    int n;cin>>n;
    vector<vector<int>>adj(n+1);
    for (int i=0;i<(n-1);i++){
        int u,v;cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    vector<int>trav(n);
    for (int i=0;i<n;i++){
        cin>>trav[i];
        pos[trav[i]]=i;
    }
    for (int i=1;i<=n;i++) sort(all(adj[i]),cmp);

    vector<bool>vis(n+1,0);
    vector<int>ans;
    queue<int>q;
    q.push(1);
    vis[1]=1;

    while (! q.empty()){
        int node=q.front();
        q.pop();
        ans.pb(node);

        for (auto &child :adj[node]){
            if(!vis[child]){
                q.push(child);
                vis[child]=1;
            }
        }
    }
    if(ans==trav) cout<<"Yes";
    else cout<<"No";
}
signed main() {
    ROU
    int tc = 1;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //cin >> tc;
    while (tc--) run(), cout << el;
}
