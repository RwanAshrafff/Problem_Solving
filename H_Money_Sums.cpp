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
const long long N = 100+5;
const long long M = 1e5+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

int n,vis[N][M];
vector<int>v;
set<int>ans;
void solve(int idx,int curr){
    //base case
    if(idx==n) {
        if(curr>0) ans.insert(curr);
        return ;
    }

    if(vis[idx][curr]) return ;
    vis[idx][curr]=1;

    //take
    solve(idx+1,curr+v[idx]);
    //leave
    solve(idx+1,curr);

}
void run() {
    cin>>n;
    v=vector<int>(n);
    for(auto &i:v) cin>>i;
    solve(0,0);
    cout<<ans.size()<<el;
    for(auto &i:ans) cout<<i<<" ";
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}