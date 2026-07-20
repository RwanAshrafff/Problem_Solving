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

int scenario,bug,inter;
int state[N],flg=0;
vector<int>adj[N];
int color[N];
void dfs(int node,int c){
    color[node]=c;
    for (auto &i:adj[node]){
        if (color[i]==-1){
            dfs(i,c^1);
        }  
        else if (color[i]==color[node]) flg=1;
    }
}

void run() {
    cin>>scenario;
    int t=1;

    while (scenario--){
        cin>>bug>>inter;
        cout<<"Scenario #" <<t<<":"<<el;
        t++;
        flg=0;
        for (int i=1;i<=bug;i++){
            adj[i].clear();
            color[i]=-1;
        }
        for (int i=1;i<=inter;i++){
            int u,v;cin>>u>>v;
            adj[u].pb(v);
            adj[v].pb(u);
        }


        for (int i=1;i<=bug;i++){
            if (color[i]==-1) {
                dfs(i,0);
            }
        }
        if (flg) cout<<"Suspicious bugs found!"<<el;
        else cout<<"No suspicious bugs found!"<<el;
    }
    
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
// bipartite Suspicious bugs found! 
