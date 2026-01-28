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

int n,m,ans;
bool vis[N];
int cats[N];
vector<int>adj[N];

void dfs(int node,int parent,int cat)
{
    vis[node]=1;
    if (cat>m) return;
    if (!cats[node]) cat = 0;
    bool leaf =1;
    for (auto x : adj[node])
    {
        if(x!=parent){
            dfs(x,node,cats[x]+cat);
            leaf=0;
        }
    }
    ans+=leaf;
}
void run() {
    cin >>n>> m; 
    for (int i=1;i<=n;i++) cin >> cats[i];
    for (int i=1;i<n;i++)
    {
        int a,b; cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    dfs(1,1,cats[1]);
    cout << ans;
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
