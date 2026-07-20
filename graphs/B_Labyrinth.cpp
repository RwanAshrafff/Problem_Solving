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
const int dy[]={1,-1,0,0}; //RLDU

void run() {
    int n,m;cin>>n>>m;
    char grid[n+1][m+1];
    int stx,sty,edx,edy;

    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cin>>grid[i][j];
            if (grid[i][j]=='A') stx=i,sty=j;
            else if (grid[i][j]=='B') edx=i,edy=j;
        }
    }
    
    vector<char> dir{'R','L','D','U'};
    vector<vector<int>>lvl(n+2,vector<int>(m+2,-1));
    vector<vector<pair<int,int>>>parent(n+2,vector<pair<int,int>>((m+2)));
    vector<vector<char>>parentdir(n+2,vector<char>((m+2)));
    queue<pair<int,int>>q;
    q.push({stx,sty});
    lvl[stx][sty]=0;
    
    while(!q.empty()){
        auto [cx,cy] = q.front();
        q.pop();
        for(int d=0;d<4;d++){
            int nx= cx+dx[d];
            int ny= cy+dy[d];
            if (nx<1 || ny<1 || nx>n || ny>m ) continue;
            if (grid[nx][ny]=='#' || lvl[nx][ny]!=-1) continue;

            lvl[nx][ny]=lvl[cx][cy]+1;
            parent[nx][ny]={cx,cy};
            parentdir[nx][ny]=dir[d];
            q.push({nx,ny});
        }
    }

    if(lvl[edx][edy]==-1){
        cout<<"NO";
    }
    else{
        cout<<"YES"<<el;
        cout<<lvl[edx][edy]<<el;
        vector<char>path;
        int tx=edx,ty=edy;
        while(tx!=stx || ty!=sty){
            path.pb(parentdir[tx][ty]);
            tie(tx,ty)=parent[tx][ty];
        }
        reverse(all(path));
        for(auto &i : path) cout<<i;
    }
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}