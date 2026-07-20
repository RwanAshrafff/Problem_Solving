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

vector<int>adj[N],pre(N);

void run() {
    int n,m;cin>>n>>m;
    for (int i=1;i<=m;i++){
        int u,v; cin>>u>>v;
        adj[u].pb(v);
        pre[v]++;
    }
    vector<int>ans;
    priority_queue<int,vector<int>,greater<int>>pq;

    for(int i=1;i<=n;i++){
        if(pre[i]==0) pq.push(i);
    }

    while(!pq.empty()){
        int curr=pq.top();
        ans.pb(curr);
        pq.pop();
        for (auto &i:adj[curr]){
            pre[i]--;
            if(pre[i]==0) pq.push(i);
        }
    }
    if (ans.size()!=n){
        cout<<"Sandro fails.";
    }
    else{
        for(auto &i:ans) cout<<i<<" ";
    }
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
//kahns algo