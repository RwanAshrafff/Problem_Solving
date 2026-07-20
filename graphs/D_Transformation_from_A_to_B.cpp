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

vector<int> adj[N],ans;
int flg,b;

void dfs(int node){
    if (node>b) return;
    ans.pb(node);
    if (node==b){
        flg=1;
        cout<<"YES"<<el;
        cout<<ans.size()<<el;
        for (auto &i :ans) cout<<i<<" ";
    }
    dfs(node*2);
    dfs(node*10+1);
    if (!flg) ans.pop_back();
}

void run() {
    int a; cin>>a>>b;
    dfs(a);
    if (!flg) cout<<"NO";
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}