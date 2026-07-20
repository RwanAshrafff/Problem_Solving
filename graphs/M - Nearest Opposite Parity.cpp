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
const int dx8[] = {1, 0, -1, 0,1,-1,1,-1};
const int dy8[] = {0, 1, 0, -1,1,-1,-1,1};


void run() {
    int n;cin>>n;
    vector<int>v(n+1);
    for (int i=1;i<=n;i++) cin>>v[i];

    vector<vector<int>>rev(n+1); //kol node 3ndha min y2dr ywslha
    for (int i=1;i<=n;i++){
        if (i+v[i]<=n) rev[i+v[i]].pb(i);
        if (i-v[i]>=1) rev[i-v[i]].pb(i);
    }

    queue<int>q;
    vector<int>dist(n+1,-1);
    for (int i=1;i<=n;i++){
        if(i+v[i]<=n && (v[v[i]+i]%2!=v[i]%2)){
            dist[i]=1;
            q.push(i);
        }
        if( (i-v[i]>=1 && (v[i]%2!=v[i-v[i]]%2))){
            dist[i]=1;
            q.push(i);
        }
    }
    while (!q.empty()){
        int node = q.front();
        q.pop();
        for (auto i:rev[node]){
            if(dist[i]==-1){
                dist[i]=dist[node]+1;
                q.push(i);
            }
        }
    }
    for (int i=1;i<=n;i++) cout<<dist[i]<< " ";
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
   //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    while (tc--) run(), cout << el;
}