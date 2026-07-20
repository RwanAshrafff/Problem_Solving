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
const int dx[]={0,0,1,-1}; // RLDU
const int dy[]={1,-1,0,0};
const int dx8[] = {1, 0, -1, 0,1,-1,1,-1};
const int dy8[] = {0, 1, 0, -1,1,-1,-1,1};

void run() {
    int n,m; cin>>n>>m;
    vector <vector<char>> grid(n+2,vector<char>(m+2,'#'));
    vector<pair<int,int>>border;
    int stx,sty;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>grid[i][j];
            if(grid[i][j]=='A') stx=i,sty=j;
            if(i==n || j==m || i==1 || j==1) border.pb({i,j});
        }
    }

    vector<char>dir{'R','L','D','U'};
    vector<vector<pair<int,int>>>parent(n+2,vector<pair<int,int>>(m+2));
    vector<vector<int>>lvl(n+2,vector<int>(m+2,1e9));
    vector<vector<char>>parentdir(n+2,vector<char>(m+2,1e9));
    queue<pair<int,int>>q;
    q.push({stx,sty});
    lvl[stx][sty]=0;
    while (!q.empty()){
        auto [cx,cy]=q.front();
        q.pop();
        for (int d=0;d<4;d++){
            int nx=cx+dx[d];
            int ny=cy+dy[d];
            if (grid[nx][ny]=='#' || lvl[nx][ny]!=1e9) continue;
            lvl[nx][ny]=lvl[cx][cy]+1;
            parent[nx][ny]={cx,cy};
            parentdir[nx][ny]=dir[d];
            q.push({nx,ny});
        }
    }

    vector<vector<int>>monsterdis(n+2,vector<int>(m+2,1e9));
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            if (grid[i][j]=='M'){
                q.push({i,j});
                monsterdis[i][j]=0;
            }
        }
    }
    while(!q.empty()){
        auto [cx,cy]=q.front();
        q.pop();
        for (int d=0;d<4;d++){
            int nx=cx+dx[d];
            int ny=cy+dy[d];
            if (monsterdis[nx][ny]!=1e9 || grid[nx][ny]=='#') continue;
            monsterdis[nx][ny]=monsterdis[cx][cy]+1;
            q.push({nx,ny});
        }
    }
    for(auto [x,y] : border){
        if (grid[x][y]!='#'  && lvl[x][y]<monsterdis[x][y]){
            vector<char>path;
            int tx=x,ty=y;
            while(tx!=stx || ty!=sty){
                path.pb(parentdir[tx][ty]);
                tie(tx,ty)=parent[tx][ty];
            }
            reverse(all(path));
            cout<<"YES"<<el;
            cout<<lvl[x][y]<<el;
            for(auto &i:path) cout<<i;
            return;
        }
    }
    cout<<"NO";
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
   //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    while (tc--) run(), cout << el;
}