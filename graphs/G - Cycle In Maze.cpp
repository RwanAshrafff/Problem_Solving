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
const int dx[] = {1, 0, 0, -1}; 
const int dy[] = {0, -1, 1, 0};
char dstchar[4] = {'D', 'L', 'R', 'U'};

int stx,sty,n,m,k;
vector<vector<int>> dist;
vector<string> grid;
queue<pair<int,int>> q;

void bfs (){
    q.push({stx,sty});
    dist[stx][sty]=0;

    while(!q.empty()){
        auto [x,y]=q.front();
        q.pop();
        for (int d=0;d<4;d++){
            int nx=x+dx[d];
            int ny=y+dy[d];
            if (nx<0 || ny<0 || nx>=n || ny>=m) continue;
            if (grid[nx][ny]=='*' || dist[nx][ny]!=-1) continue;
            dist[nx][ny]=dist[x][y]+1;
            q.push({nx,ny});
        }
    }
}

void run() {
    cin>>n>>m>>k;
    grid= vector<string>(n);
    dist=vector<vector<int>>(n,vector<int>(m,-1));
    
    for (int i=0;i<n;i++){
        cin>>grid[i];
        for (int j=0;j<m;j++){
            if (grid[i][j]=='X') stx=i,sty=j;
        }
    }
    if (k&1){
        cout<<"IMPOSSIBLE";
        return;
    }
    bfs();

    string ans;
    int nstx=stx,nsty=sty;
    for(int i=0;i<k;i++){
        for (int d=0;d<4;d++){
            int nx=nstx+dx[d];
            int ny=nsty+dy[d];
            if (nx<0 || ny<0 || nx>=n || ny>=m) continue;
            if (grid[nx][ny]=='*' || dist[nx][ny]==-1) continue;

            if(dist[nx][ny]<=k-i-1){
                nstx=nx,nsty=ny;
                ans+=dstchar[d];
                break;
                
            }
            
        }
    }
    if (ans.empty()) cout<<"IMPOSSIBLE";
    else cout<<ans;
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}