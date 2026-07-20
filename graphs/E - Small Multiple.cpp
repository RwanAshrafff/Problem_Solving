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

void run() {
    int k;cin>>k;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;
    vector<int>dist(k,1e18);
    for(int i=1;i<min(9ll,k);i++)  dist[i]=i,pq.push({dist[i],i});
    while(!pq.empty()){
        auto [cost,node]=pq.top(); pq.pop();
        if(cost>dist[node]) continue;
        for(int d=0;d<=9;d++){
            int nxt=(node*10+d)%k;
            if(dist[nxt]>dist[node]+d){
                dist[nxt]=dist[node]+d;
                pq.push({dist[nxt],nxt});
            }
        }
    }
    cout<<dist[0];
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
   //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    while (tc--) run(), cout << el;
}