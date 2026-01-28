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

int n ,m;
bool vis[N];
vector<int>adj[N];

void dfs(int node)
{
    vis[node]=1;
    for (auto x: adj[node])
    {
        if (!vis[x]) dfs(x);
    }
}
void run() {
    cin >> n >> m;
    while (m--)
    {
        int a,b; cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    vector<int> ans;
    for (int i=1;i<=n;i++) if (!vis[i]) ans.pb(i),dfs(i);
    cout << ans.size()-1<< el;
    //int sz = ans.size();
    //for (int i=1;i<sz;i++) cout << ans[i-1] << " "<< ans[i]<<el ;
    for (auto &i : ans) cout << i << " ";
    cout << el;
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
