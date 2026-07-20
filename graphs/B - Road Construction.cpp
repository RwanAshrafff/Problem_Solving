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

vector<int>gsz,par;
int find (int node){
    if(node==par[node]) return node;
    return par[node]=find(par[node]);
}

void run() {
    int n,m;cin>>n>>m;
    int u,v;
    par=gsz=vector<int>(n+1,1);
    iota(all(par),0);
    int component=n,maxi=1;
    while (m--){
        cin>>u>>v;
        int pu=find(u),pv=find(v);
        if(par[pu]!=par[pv]) {
        if(gsz[pu]<gsz[pv]) swap(pu,pv);
        gsz[pu]+=gsz[pv];
        par[v]=u;
        maxi=max(maxi,gsz[pu]);
        component--;
        }
        cout<<component<< " "<<maxi<<el;
    }
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
   //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    while (tc--) run(), cout << el;
}