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

vector<vector<int>>adj;
void run() {
    int n ; cin>>n;
    vector<pair<int,int>>pts(n);
    map<pair<int,int>,int>id;
    for (int i=0;i<n;i++){
        cin>>pts[i].first>>pts[i].second;
        id[pts[i]]=i;
    }
    queue<pair<int,int>>q;
    vector<pair<int,int>>ans(n);
    for (auto [x,y] :pts){
        
        for (int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if (!id.count({nx,ny}) )
            {
                ans[id[{x,y}]]={nx,ny};
                q.push({x,y});
                break;
            }
        }
    }
    
    while(!q.empty()){
        auto [cx,cy] = q.front();
        q.pop();
        for (int i=0;i<4;i++){
            int nx=cx+dx[i];
            int ny=cy+dy[i];
            if (id.count({nx,ny})){
                int curr= id[{cx,cy}];
                int nxt= id[{nx,ny}];
                if (ans[nxt].first==0 && ans[nxt].second==0){
                    ans[nxt]=ans[curr];
                    q.push({nx,ny});
                }
            }
        }
    }
    for (auto [x,y]:ans) cout<<x<< " "<<y<<el;
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
   //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    while (tc--) run(), cout << el;
}