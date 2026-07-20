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
    int n,m,k;cin>>n>>m>>k;
    vector<vector<int>>fire(n+1,vector<int>(m+1,0));
    vector<vector<int>>lvl(n+1,vector<int>(m+1,-1));
    queue<pair<int,int>>q;
    for (int i=0;i<k;i++){
        int x,y; cin>>x>>y;
        fire[x][y]=1;
        lvl[x][y]=0;
        q.push({x,y});
    }
    int ansx=1,ansy=1;
    while (!q.empty()){
        auto [x,y]=q.front();
        q.pop();
        ansx=x,ansy=y;
        for (int d=0;d<4;d++){
            int nx=x+dx[d];
            int ny=y+dy[d];
            if (nx<1 || nx>n || ny<1 || ny>m) continue;
            if (fire[nx][ny]==1 || lvl[nx][ny]!=-1) continue;

            lvl[nx][ny]=lvl[x][y]+1;
            fire[nx][ny]=1;
            q.push({nx,ny});
        }
    }
    cout<<ansx<<" "<<ansy;
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while (tc--) run(), cout << el;
}