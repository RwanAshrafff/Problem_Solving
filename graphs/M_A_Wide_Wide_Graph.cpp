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

vector<int>adj[N];

void dfs(int node,int par,int d , vector<int> &dis){
    dis[node]=d;
    for (auto &i:adj[node]){
        if (i!=par) dfs(i,node,d+1,dis);
    }
}

void run() {
    int n; cin>>n;
    for (int i=1;i<n;i++){
        int u,v;cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    vector<int>d1(n+1),d2(n+1);
    dfs(1,-1,0,d1);
    int x= max_element(all(d1))-d1.begin();
    dfs(x,-1,0,d1);
    int y= max_element(all(d1))-d1.begin();
    dfs(y,-1,0,d2);
    for (int i=1;i<=n;i++) d2[i]=max(d1[i],d2[i]);
    sort(all(d2));

    int num=1;
    for (int k=1;k<=n;k++){
        while (d2[num]<k && num<=n) num++;
        cout<<min(n,num)<<" ";
    }
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}