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
const long long N = 1e9;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0}; //RLDU
const int dx8[] = {1, 0, -1, 0,1,-1,1,-1};
const int dy8[] = {0, 1, 0, -1,1,-1,-1,1};

void run() {
    int x0,y0,x1,y1; cin>>x0>>y0>>x1>>y1;
    int pos; cin>>pos;
    map<pair<int,int>,int>lvl;
    for (int i=0;i<pos;i++){
        int r,a,b;
        cin>>r>>a>>b;
        for (int j=a;j<=b;j++){
            lvl[{r,j}]=-1;
        }
    }
    queue<pair<int,int>>q;
    q.push({x0,y0});
    lvl[{x0,y0}]=0;
    lvl[{x1,y1}]=-1;
    while(! q.empty()){
        auto [cx,cy]=q.front();
        q.pop();
        for (int d=0;d<8;d++){
            int nx= cx+dx8[d];
            int ny=cy+dy8[d];
            if (nx<=N && ny<=N && nx>0 && ny>0 && lvl[{nx,ny}]==-1){
                lvl[{nx,ny}]=lvl[{cx,cy}]+1;
                q.push({nx,ny});
            }
        }
    }
    cout<<lvl[{x1,y1}];
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}