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

vector<int>par,gsz;
int find(int node){
    if (node==par[node]) return node;
    return par[node]=find(par[node]);
}

bool connect (int u,int v){
        int pu=find(u),pv=find(v);
        if(pu!=pv){
            if(gsz[pu]<gsz[pv]) swap(pu,pv);
            gsz[pu]+=gsz[pv];
            par[pv]=pu;
            return true;
        }
        return false;
}

void run() {
    int n,m; cin>>n>>m;
    par=gsz=vector<int>(n+1,1);
    iota(all(par),0);
    vector<pair<int,int>>edges(m+1);
    for(int i=1;i<=m;i++) { cin>>edges[i].first>>edges[i].second; }
    int q; cin>>q;
    vector<int>queries(q);
    vector<bool>del(m+1);
    for(int i=0;i<q;i++){
        cin>>queries[i];
        del[queries[i]]=1;
    }

    int component=n;
    for(int i=1;i<=m;i++){
        if(!del[i]) {
            if(connect(edges[i].first,edges[i].second)) 
                component--;
        }
    }
    vector<int>res(q);
    for(int i=q-1;i>=0;i--){
        res[i]=component;
        int idx=queries[i];
        int u=edges[idx].first;
        int v =edges[idx].second;
        if(connect(u,v)) component--;
    }
    for(auto &i:res) cout<<i<<" ";
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
   //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    while (tc--) run(), cout << el;
}