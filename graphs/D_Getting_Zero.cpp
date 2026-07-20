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
const long long mod = 32768;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

void run() {
    int n ; cin>>n;
    vector<vector<int>>adj(mod);
    for (int i=1;i<=mod;i++){
        adj[(2*i)%mod].pb(i%mod);
        adj[i%mod].pb(i-1);
    }
    queue<int>q;
    int lvl[mod];
    fill(lvl,lvl+mod,-1);
    q.push(0);
    lvl[0]=0;
    while (! q.empty()){
        int node = q.front();
        q.pop();
        for (auto &child : adj[node]){
            if(lvl[child]==-1){
            lvl[child]=lvl[node]+1;
            q.push (child);
        }
    }}
    for(int i=1;i<=n;i++){
        int x;  cin>>x;
        cout<<lvl[x]<<" ";
    }
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}