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
const long long N = 1e3+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

int n ,m,ans;
bool vis[N][N];
char  s[N][N];

bool valid (int x , int y)
{
    return (x>=0 && x<n && y>=0 && y<m && s[x][y]=='.' && !vis[x][y]);
}
void dfs(int x , int y)
{
    vis[x][y]=1;
    for(int i=0;i<4;i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (valid(nx, ny)) dfs(nx, ny);
    }

}
void run() {
    cin >> n >> m;
    for (int i=0;i<n;i++) for (int j=0;j<m;j++) cin >> s[i][j];
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) if (valid(i,j)) ans++,dfs(i,j);
    cout << ans;
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
